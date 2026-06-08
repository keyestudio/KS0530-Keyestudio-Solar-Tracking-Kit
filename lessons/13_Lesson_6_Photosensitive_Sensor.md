## Lesson 6: Photosensitive Sensor

**(1)Description**

There are four photoresistor sensor modules in this kit, the ambient light sensors, with photoresistor as main component.

The resistance of a photoresistor varies with the light intensity. When there is light around, its resistance ranges in 5-10KΩ; while when it is dark, the resistance is only 0.2MΩ. Based on this property, a circuit can be built to convert the change in resistance to changes in voltage.

What’s more, the sensor comes with an anti-reverse insertion terminal with a pitch of 2.54mm to facilitate the wiring. It is also compatible with many kinds of microcontrollers, such the Arduino microcontroller series.

Here, we apply this sensor with the Arduino microcontroller. The S (signal) end of the sensor should be input to the analog pin of Arduino to detect the variation in analog value which will be printed on the serial monitor. And please notice that there are two positioning holes with a diameter of 4.9mm built on the sensor to help fix it.

**(2)Parameters:**

Working voltage：3.3V-5V（DC）

Interface：3PIN

Output signal：analog signal

Weight：2.3g

![](../media/537af5b84f09fe71a4e1f6cbeabdfc81.png)

**(3)You need to prepare:**

| Control Board*1                                | USB Cable*1                                    | Yellow LED Module*1                            | 3pin DuPont Wire*2                             | Push Button Module*4                           |
|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
| ![](../media/60cb7081df16f5d5169b0883a6fbf3df.png) | ![](../media/4f8d5af6dee9016b45d975adb2391d37.png) | ![](../media/628e402ae3fc455a2812705b17d7c30d.png) | ![](../media/d57e6d40ae04a5be544cb6b4833a3e98.png) | ![](../media/537af5b84f09fe71a4e1f6cbeabdfc81.png) |

**(4).Connection Diagram:**

| Pin Connection Table     |                      |
|--------------------------|----------------------|
| Pin of **Photoresistor** | Pin of Control Board |
| G                        | G(GND)               |
| V                        | V(5V)                |
| S                        | A0                   |

| Pin Connection Table |                      |
|----------------------|----------------------|
| Pin of the **LED**   | Pin of Control Board |
| G                    | G(GND)               |
| V                    | V(5V)                |
| S                    | D3                   |



![](../media/9ad0c25387b65d7eb5ca40d933b2f84c.png)

![](../media/38ea947110ec2dd6b3ee27abd895f258.png)

![](../media/28f391156fb2aec29b24e8ce09246b4c.png)



![](../media/e08a2aa856074276ab58ab45e2652f17.png)![](../media/819aafadd69170aca8063e25a198f0ae.png)

