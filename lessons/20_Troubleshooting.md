# 6.Troubleshooting

Here are some solutions to common problems that may help you.

If you don't get the answer you're looking for here, please contact our technical support:

Amazon: [service@keyestudio.com](mailto:service@keyestudio.com)

AliExpress: [tivon@keyestudio.com](mailto:tivon@keyestudio.com)

Other channels: [sunny@keyestudio.com](mailto:sunny@keyestudio.com)

For a faster and more professional resolution of your issue, please include this information when sending us an email:

Your order number or where you got this product from

The problems you encounter, try to include detailed descriptions, pictures or videos.

We need more information than "It doesn't work." Please give us good detail on what you want to accomplish and what you have tried.

Thank You!

**(1)The control board is not recognized by the computer.**

-Please check if the USB cable is good and your computer's USB port is available.

**(2)USB port can’t recognized by computer.**

-Check if you have installed the USB driver

**(3)Code problems/Failed uploading/Code error.**

These reasons can cause problems with your code:

1) The driver is not installed.

2) The board type and COM port are not selected correctly in the Arduino IDE.

3) The library file is not installed.

(Please follow **2.Getting Started with Arduino** to troubleshoot the above problems)

![](../media/224c21b5aa737f11de351dbd9868e317.png)

**(4)Poor USB contact**

If you don’t have the problems in 1-3 above, check that the USB cable connection is good, try re-plugging it, and then upload the code again.

**(5)The assembled Solar tracking kit doesn’t respond.**

1)These reasons may cause the robot not to work:

1)wrong wiring

2)You didn't upload the code

3)Failed uploading/Code error

4)You didn't turn on the 5V switch on the control board and the power switch on the charging module.

![](../media/67fc5cb5b7eabda71fcb2296a8def597.png)![](../media/edc80fe0bd7a1cce69bd760ab5d247bc.png)

5)Insufficient battery power

You need to keep the 18650 battery charged enough as it will be needed to power two servos, an LCD display, four light sensors, a DHT11 sensor and button module.

**(6)Servo stuck/servo hot**

You will need to adjust the initial angle of the servo before assembling them and not change the angle until assembly is complete to ensure that the servo operates properly for solar tracking kit.

**(7)The solar panel does not track the movement of the light source or the sun**

When the ambient light sensor detects changes in light intensity, servos rotate the solar panel to the position where the light is the strongest.

In an environment with uniform lighting, the solar panel may not track the movement of the light source. You may need to apply a very strong light source, or apply a light source in a weak light area to make the solar panel move with the light source. The solar panel may not move toward the sun because the difference in light intensity detected by each ambient light sensor may not be large.

1.  **The solar panel moves very slowly, jerks or gets stuck.**
2.  Check that the servo wiring is organised and not jammed so that the servo can have enough room to move.
3.  18650 battery needs to be fully charged
4.  You can press the button module to adjust the amount of servo rotation.
