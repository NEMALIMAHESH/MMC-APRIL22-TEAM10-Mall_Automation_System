# Introduction
* It measures the temperature and humidity of air. If temperature is high it will glow red led. If temperature is normal it will green led. if temperature is low it will glow blue led. After Glowing leds the motor will rotate according to temperature conditions.If temperature is normal the motor will rotate very slow.If temperature is high the motor will rotate high.If temperature is low the motor rotation will stop.
## Components used
* Stm32f407
* Temperature and humidity sensor.
* Breadboard
* Connecting Wires
* Resistors
* LEDS
* Stepper Motor
* ULN2003 Driver
## SWOT ANALYSIS:
* Strength:
  * It will automatically detect the temperature.
  * Easily Applicable.
* Weakness:
  * Failure of Sensors
  * In case of low power
* Opurtunities:
  * Increase in growth day by day
* Threats:
  * Failure of System.
## 5W'S and 1H:
### WHY:
* It can be used to measure the temperature automatically using DHT11 sensor.
### WHAT:
*  It measures the temperature and humidity of air. If temperature is high it will glow red led. If temperature is normal it will green led. if temperature is low it will glow blue led
### WHERE:
* It can be mainly used in air conditioners,etc
### WHEN:
* It can be used when we need to measure temperature.
### WHO:
* It can be used by anyone.
### HOW:
* It will work automatically.
# HIGH LEVEL REQUIREMENTS:
|HLR|DESCRIPTION|STATUS|
|---|---|---|
|HLR 01| Temperature Sensor|Done|
|HLR 02|LEDS Glowing|Done|
|HLR 03Motor Working|Done|
# LOW LEVEL REQUIREMENTS
|TEST ID|DESCRIPTION|HLR ID|STATUS|
|---|---|----|----|
|LLR 01|Blue Led|HLR 01 & HLR 02|Done|
|LLR 02|Green Led|HLR 01 & HLR 02|Done|
|LLR 03|Red Led|HLR 01 & HLR 02|Done|
|LLR 04|Motor |HLR 01 & HLR 03|Done|
