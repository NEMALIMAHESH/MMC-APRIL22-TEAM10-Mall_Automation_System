# Mall Automation

## Feature: Automatic Lights Control Switch


## Abstract:

The objective of this project is to help conserve costs, save energy and also improve home safety. As automatic lights function only on sensing persons, waste of electricity caused by active lights in unused areas can be avoided. Minimal usage of lamps also increases lamp-life thereby reducing maintenance and replacement costs. Most of the times, many of us forget to switch off the lights while leaving the room in which we stay most of the time. This results in unnecessary power wastage. Therefore, an automatic room-light controller automatically turns on the lights when a person enters into a room, and turns off the lights when the person leaves the room. This automatic room controller can be implemented by using a simple microcontroller and sensors.

## Description:

This project describes the design aspects of an automatic lighting system which involves the automatic switching on/off of lights in a room with the help of LDR sensors and PIR motion sensors, of the artificial lights in accordance to available natural light. An automatic system, when installed in a room, will sense the available ambient light as well as the persons in the room. The term lighting controls is generally taken to refer to some form of electronic, or automatic solution, rather than the simple, mains ON/OFF switch. Automatic lightings help conserve costs and save energy. As automatic lights function only on sensing persons, waste of electricity caused by active lights in unused areas can be avoided. The Arduino Uno continuously checks for the communication from ultrasonic sensor and LDR. The led will be ON when the light intensity and the distance from ultrasonic sensor are satisfied. Otherwise the led will be in OFF position.</br>


*✳ Components:*

* STM32F407VG.</br>
* LDR (Photoresistor).</br>
* Ultrasonic (HC-SR04).</br>
* 221 Ohms resistor.</br>
* 10K Ohms resistor.</br>
* LED/ any light source.</br>
* Breadboard(optional).</br></br>

* _STM32F407VG_ The STM32F407VG Discovery kit leverages the capabilities of the STM32F407 high-performance microcontrollers, to allow users to develop audio applications easily. It includes an ST-LINK/V2-A embedded debug tool, one ST-MEMS digital accelerometer, one digital microphone, one audio DAC with integrated class D speaker driver, LEDs, push-buttons, and a USB OTG Micro-AB connector.</br>

* _LDR:_ An LDR is a component that has a variable resistance that changes with the light intensity that falls upon it. The resistance of a photoresistor decreases with increasing incident light intensity which is made of a high resistance semiconductor.</br>

* _Ultrasonic:_ The HC-SR04 Ultrasonic Distance Sensor is a sensor used for detecting the distance to an object using sonar. The HC-SR04 uses non-contact ultrasound sonar to measure the distance to an object.</br>

* _LED:_ A light-emitting diode(LED) is a semiconductor light source that emits light when current flows through it.</br>

* _Resistors:_ A resistor is a passive two-terminal electrical component that implements electrical resistance as a circuit element. This project is done using two resistors, 221 Ohms and 10k Ohms. 221 Ohms resistor has the color code as red-red-brown-black/orange(tolerance) & 10k Ohms resistor has the color code as brown-black-orange-black(tolerance).</br>

## Requirement Modelling:

### High Level Requirements:

|ID|Description|
|:---|:---|
|HR01|Sensor shall detect day light.|
|HR02|Sensor shall detect person.|
|HR03|LED shall turn on.|
|HR04|LED shall turn off.|

## Low Level Requirements

|ID|Description|HLR ID|
|:---|:---|:---|
|LR01|The sensor detects whether the room or surrounding is dark/bright.|HR01/HR02|
|LR02|The LED will be turned off if there is enough light.|HR03|
|LR03|The controller(arduino) turns on the LED if the sensor detects that its dark and if a person is detected.|HR02|


## 5W's & 1H:
<img width="524" alt="project" src="https://user-images.githubusercontent.com/98941312/163315337-798f67cf-0e81-44b7-8ccf-33390907541f.png">





#### Working: 

🔸 The sensor shall detect if its day/night based on the ambience of light received by the sensor.</br>
🔸 If the room is bright enough then the LDR sensor does not activates.</br>
🔸 If the room is dark and a person is detected only then LDR sensor provides the information to arduino.</br>
