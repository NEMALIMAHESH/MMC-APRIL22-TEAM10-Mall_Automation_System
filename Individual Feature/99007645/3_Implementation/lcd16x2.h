#ifndef LCD16X2_H_
#define LCD16X2_H_

#include <stdbool.h>
#include "main.h"

//Floating point linker flag: -u _printf_float

/**
 * @brief Initialise LCD on 8-bits mode
 * @param[in] *port_rs_e RS and EN GPIO Port (e.g. GPIOB)
 * @param[in] *port_0_3 D0 to D3 GPIO Port
 * @param[in] *port_4_7 D4 to D7 GPIO Port
 * @param[in] x_pin GPIO pin (e.g. GPIO_PIN_1)
 */
void lcd16x2_init_8bits(
    GPIO_TypeDef* port_rs_e, uint16_t rs_pin, uint16_t e_pin,
    GPIO_TypeDef* port_0_3, uint16_t d0_pin, uint16_t d1_pin, uint16_t d2_pin, uint16_t d3_pin,
    GPIO_TypeDef* port_4_7, uint16_t d4_pin, uint16_t d5_pin, uint16_t d6_pin, uint16_t d7_pin);

/**
 * @brief Initialise LCD on 4-bits mode
 * @param[in] *port_4_7 D4 to D7 GPIO Port
 * @param[in] x_pin GPIO pin (e.g. GPIO_PIN_1)
 */
void lcd16x2_init_4bits(
    GPIO_TypeDef* port_rs_e, uint16_t rs_pin, uint16_t e_pin,
    GPIO_TypeDef* port_4_7, uint16_t d4_pin, uint16_t d5_pin, uint16_t d6_pin, uint16_t d7_pin);

/**
 * @brief Set cursor position
 * @param[in] row - 0 or 1 for line1 or line2
 * @param[in] col - 0 - 15 (16 columns LCD)
 */
void lcd16x2_setCursor(uint8_t row, uint8_t col);
/**
 * @brief Move to beginning of 1st line
 */
void lcd16x2_1stLine(void);
/**
 * @brief Move to beginning of 2nd line
 */
void lcd16x2_2ndLine(void);

/**
 * @brief Select LCD Number of lines mode
 */
void lcd16x2_twoLines(void);
void lcd16x2_oneLine(void);

/**
 * @brief Cursor ON/OFF
 */
void lcd16x2_cursorShow(bool state);

/**
 * @brief Display clear
 */
void lcd16x2_clear(void);

/**
 * @brief Display ON/OFF, to hide all characters, but not clear
 */
void lcd16x2_display(bool state);

/**
 * @brief Shift content to right
 */
void lcd16x2_shiftRight(uint8_t offset);

/**
 * @brief Shift content to left
 */
void lcd16x2_shiftLeft(uint8_t offset);

/**
 * @brief Print to display any datatype (e.g. lcd16x2_printf("Value1 = %.1f", 123.45))
 */
void lcd16x2_printf(const char* str, ...);

#endif /* LCD16X2_H_ */
