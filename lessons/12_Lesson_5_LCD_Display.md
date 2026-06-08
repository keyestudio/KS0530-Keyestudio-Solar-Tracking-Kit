## Lesson 5: 1602 LCD Display Module

**(1).Description：**

![](../media/28bf5a86d2265afb050e55589e145fe9.png)

With I2C communication module, this is a display module that can show 2 lines with 16 characters per line.

It shows blue background and white word and connects to I2C interface of MCU, which highly save the MCU resources.

On the back of LCD display, there is a blue potentiometer for adjusting the backlight. The communication address defaults to 0x27.

The original 1602 LCD can start and run with 11 IO ports, but ours is built with ARDUINOIIC/I2C interface, saving 9 IO ports. Alternatively, the module comes with 4 positioning holes with a diameter of 3mm, which is convenient for you to fix on other devices.

**(2).Parameters：**

I2C address: 0x27

Backlight (blue, white)

Power supply voltage: **5V**

Adjustable contrast

GND: A pin that connects to ground

VCC: A pin that connects to a +5V power supply

SDA: A pin that connects to analog port A4 for IIC communication

SCL: A pin that connects to analog port A5 for IIC communication

**(3).You need to prepare:**

| Control Board*1                                | USB Cable*1                                    | LCD Display*1                                  | 4P-1P F-F DuPon Wire                            |
|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
| ![](../media/60cb7081df16f5d5169b0883a6fbf3df.png) | ![](../media/4f8d5af6dee9016b45d975adb2391d37.png) | ![](../media/28bf5a86d2265afb050e55589e145fe9.png) | ![](../media/f4df3fe85086b2896d958b1caf93a038.png) |

**(4)Connection Diagram**

| Pin Connection Table       |                      |
|----------------------------|----------------------|
| Pin of the **LCD Display** | Pin of Control Board |
| GND                        | G(GND)                 |
| VCC                        | V(5V)                 |
| SDA                        | A4                 |
| SCL                        | A5                 |

![](../media/8c306bd1b7399f0819f4a1c435177ec3.png)

![](../media/74924d373976c4ff67719dea807a5f0d.png)

![](../media/2ab182ee1dd52f41062a95d8519d6a17.png)

![](../media/6eb2b20c59f81f11a84c57be5d8a91f4.png)![](../media/5facbfa2ab2b3bb0a6946cf0a77d263a.png)

