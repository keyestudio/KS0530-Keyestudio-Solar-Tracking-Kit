## Lesson 1.1: LED Blinks

**(1).Description：**

![](../media/90f495d6deb8516c95dea36fb1efa019.jpeg)![](../media/2aeeeb61ad2a3110303b3108f4ba31e1.png)

LED, the abbreviation of light emitting diodes consists of Ga, As, P, N chemical compounds, and so on. The LED can flash in diverse colors by altering the delay time in the test code. When in control, power on GND and VCC, the LED will be on if the S end is at a high level; nevertheless, it will go off.

![](../media/628e402ae3fc455a2812705b17d7c30d.png)
**(2).Parameters：**

Control interface: digital port

Working voltage: DC 3.3-5V

Pin spacing: 2.54mm

LED display color: yellow

**(3).You need to prepare:**

| Control Board*1                                | USB Cable*1                                    | Yellow LED Module*1                            | 3pin F-F 26AWG Wire                             |
|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
| ![](../media/60cb7081df16f5d5169b0883a6fbf3df.png) | ![](../media/4f8d5af6dee9016b45d975adb2391d37.png) | ![](../media/628e402ae3fc455a2812705b17d7c30d.png) | ![](../media/d57e6d40ae04a5be544cb6b4833a3e98.png) |

**(4).Connection diagram of the led module：**

The pin -, + and S of LED module are connected to the pin G, 5V and D3 port of the control board.

![](../media/045af155ff7b448adf0e819200ccef57.png)

![](../media/a883125f029dffe6ce7c7d79645aa16d.png)

![](../media/188b0bea1512ccc6a9b3e20ff8a9265d.png)

**(5).Test Results:** LED blinks at the interval of 1s

![](../media/351380ab56f691b54869160828bc56d0.png)

**(6).Code Explanations:**

pinMode(LED，OUTPUT) - This function can denote that the pin is INPUT or OUTPUT

digitalWrite(LED，HIGH) - When pin is OUTPUT, we can set it to HIGH(output 5V) or LOW(output 0V)

