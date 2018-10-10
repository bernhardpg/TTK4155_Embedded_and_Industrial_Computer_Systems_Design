# Byggern2019

## Node 1: Breadboard: Atmel microcontroller: ATmega162 - USB Multifunction card
### 1.1 Communication
#### 1.1.1 Listening to output from the microcontroller
`picocom -b 9600 /dev/ttyS0`

*/dev/ttyS0:* DB9 port on PC.

#### 1.1.2 Writing to the microcontroller using `printf`
Run `printf STRING > /dev/ttyS0` from source folder (Byggern2019).
*STRING:* Any string.

#### 1.1.3 Writing to the microcontroller using `cat` (to write entire file)
Run `catf FILENAME > /dev/ttyS0` from source folder (Byggern2019).
*FILENAME:* Any file.

### 1.2 Pin configurations
#### 1.2.1 Usb multifunction card to breadboard pins
##### 1.2.1.1 POWER
mulitf[0-index]	|	breadboard[1-index] | comment
----------------|---------------------|--------
**+** | 12V | NW
**-** |  0V GND | NW 
USB| | Connect to PC


##### 1.2.1.2 OLED bus
mulitf[0-index]	|	breadboard[1-index] | comment
----------------|---------------------|--------
OLED_BUS[0] | GAL[17] |
OLED_BUS[1] | GAL[3] |
OLED_BUS[2] | Atmega[16] | ¬WR
OLED_BUS[3:11] | LATCH[9:2] |

##### 1.2.1.3 Sliders
mulitf[0-index] | mulitf[0-index] | breadboard[1-index] | comment
----------------|-----------------|---------------------|--------
FILTER[0] | PB[4] slider_L (0-index)| | 
FILTER[1] | | ADC[5] | 
FILTER[3] | | ADC[6] | 
FILTER[4] | PD[1] slider_R (0-index)| | 

##### 1.2.1.4 Joystick
mulitf[0-index] | breadboard[1-index] | comment
----------------|---------------------|--------
JOYCON[0] | ADC[4] | 
JOYCON[1] | ADC[3] | 
JOYCON[2] | Atmega[3] PB2| Joy_button


##### 1.2.1.5 Touch buttons 
multif[index-0]| breadboard[1-index] | comment
---------------|---------------------|--------
PB[5] | Atmega[2] PB1 | Touch_button (LEFT)¿
PD[0] | Atmega[1] PB0 | Touch_button (RIGHT)¿

#### 1.2.2 DB9 
DB9|breadboard[1-index] | comment
---|--------------------|--------
signal ground 5 | GND
transmit data 3 | MAX233[5] T1_out
receive data 2 | MAX233[4] R1_in

## Node 2: Arduino: AVR ATmega 2560 - I/O Card - Motorbox - Servo - Solenoid
### 2.1 Communication
#### 2.1.1 Listening to output from the microcontroller
`picocom -b 9600 /dev/ttyACM0`
