
void config_gpiox(GPIORegDef *gpiox, int pin, int mode, int speed);

/* Input Functions */
int gpiox_read_pin(GPIORegDef *gpiox, int pin, int mode);

/* Interrupt Related Functions */
void config_gpio_irq_priority(unsigned char irq_number, unsigned char irq_priority);
void config_gpio_interrupt(unsigned char irq_number, unsigned char state);

void config_gpio_interrupt(unsigned char irq_number, unsigned char state)
{
	if (state == ENABLE)
	{
		if (irq_number <= 31)
		{
			*NVIC_ISER0 = *NVIC_ISER0 | (1 << irq_number);
		}
		else if (irq_number <= 63)
		{
			*NVIC_ISER1 = *NVIC_ISER1 | (1 << (irq_number % 32));
		}
		else if (irq_number <= 95)
		{
			*NVIC_ISER1 = *NVIC_ISER1 | (1 << (irq_number % 32));
		}
	}
	else
	{
		if (irq_number <= 31)
		{
			*NVIC_ICER0 = *NVIC_ICER0 | (1 << irq_number);
		}
		else if (irq_number <= 63)
		{
			*NVIC_ICER1 = *NVIC_ICER1 | (1 << (irq_number % 32));
		}
		else if (irq_number <= 95)
		{
			*NVIC_ICER1 = *NVIC_ICER1 | (1 << (irq_number % 32));
		}
	}
}

void config_gpio_irq_priority(unsigned char irq_number, unsigned char irq_priority)
{
	// https://developer.arm.com/documentation/dui0497/a/cortex-m0-peripherals/nested-vectored-interrupt-controller/interrupt-priority-registers
	unsigned char ipr_no = irq_number / 4;
	unsigned char byte_offset  = irq_number % 4;
	unsigned char position = (8 * byte_offset) + (8 - NO_PR_BITS_IMPLEMENTED);

	NVIC_IPR_BASE_ADDRESS[ipr_no] |=  (irq_priority << position); 
}
void gpiox_set(GPIORegDef *gpiox, int pin)
{
}

void gpiox_toggle(GPIORegDef *gpiox, int pin)
{
}

int gpiox_read_pin(GPIORegDef *gpiox, int pin, int mode)
{
}
void gpiox_clear(GPIORegDef *gpiox, int pin)
{
}

void gpiox_write(GPIORegDef *gpiox, int pin, int value)
{
}

/* Output Functions */
void gpiox_set(GPIORegDef *gpiox, int pin);
void gpiox_clear(GPIORegDef *gpiox, int pin);
void gpiox_write(GPIORegDef *gpiox, int pin, int value);
void gpiox_toggle(GPIORegDef *gpiox, int pin);