## Lesson 3.1: Read the Digital Signal of Button Module

**(1)Description**

In this project, we intend to use the push button module to control the LED.

**(2)Parameters:**

Working voltage：DC 3.3-5V

Control signal：digital signal

Size：34mm

Weight：3.8g

**(3)You need to prepare:**

| Control Board*1                                | USB Cable*1                                    | Yellow LED Module*1                            | 3pin F-F 26AWG Wire*2                          | Push Button Module*1                           |
|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
| ![](../media/60cb7081df16f5d5169b0883a6fbf3df.png) | ![](../media/4f8d5af6dee9016b45d975adb2391d37.png) | ![](../media/628e402ae3fc455a2812705b17d7c30d.png) | ![](../media/d57e6d40ae04a5be544cb6b4833a3e98.png) | ![](../media/6ba7e34f89af660ac90bb2552907ef3f.png) |

**(4)Connection Diagram**

| Pin Connection Table  |                      |
|-----------------------|----------------------|
| Pin of the **Button** | Pin of Control Board |
| G                     | G(GND)               |
| V                     | V(5V)                |
| S                     | D2                   |

| Pin Connection Table |                      |
|----------------------|----------------------|
| Pin of the **LED**   | Pin of Control Board |
| G                    | G(GND)               |
| V                    | V(5V)                |
| S                    | D3                   |

![](../media/024ba0bbd683bf28f7783c8645f488be.png)

![](../media/32bb1f78caa01e562a769a0afe64da74.png)

![](../media/cb4d53c7c2057f85eb4255c453e31001.png)

![](../media/9688c560b185edabcf17838af3353b36.png)

**(5)Code Explanation:**

Serial.begin(9600)-initialize the serial communication and set the baud rate to 9600

pinMode(pin, INPUT)-use the function pinMode() to tell Arduino whether it is an output pin or an input pin

digitalRead(pin)-read the digital level of pins,be HIGHT OT LOW

