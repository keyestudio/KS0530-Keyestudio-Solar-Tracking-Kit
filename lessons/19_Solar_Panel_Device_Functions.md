# 5.Solar Panel Device with Multiply Functions

The assembled solar panel device is ready!

In the previous lessons, we only studied the function and working principle of a certain electronic part individually, and tested whether it can work normally.

Now we have them working together to build a solar panel device with multiple functions.

Keep the 18650 battery charged enough as it will be needed to power two servos, an LCD display, four light sensors, a DHT11 sensor and button module.

![](../media/f4b78ac6371097b2e32409c226873651.png)

![](../media/94d386c19c8b95904852ee2a11a4f272.png)

After the code is uploaded successfully, turn on the power switch of the charging module and press the power switch of the control board to 5V.

![](../media/edc80fe0bd7a1cce69bd760ab5d247bc.png)![](../media/67fc5cb5b7eabda71fcb2296a8def597.png)

The servo will rotate to the initial angle. When the ambient light sensor detects changes in light intensity, servos rotate the solar panel to the position where the light is the strongest and LCD1602 shows the value of the light intensity and temperature and humidity detected by the BH1750 and DHT11 respectively.

If you feel that the solar panel rotates too slowly or the solar panel shakes, you can adjust the rotation speed of the servo through the button module.

For example, within the specified time, the servo rotates 1° each time. After pressing the button, the servo will rotate 2° each time within the same time.

Press it again and the servo will rotate 3° each time in the same time. By analogy, the servo can be adjusted to rotate up to 5° each time in the same time.

**“byte resolution = 1”**

You can adjust the resolution to change the rotation angle of the servo. Press the button to change the resolution from 1° to 5°. You can also change `byte m_speed = 10` to set the delay time to adjust the speed of the servo; the longer the time, the smaller the speed.

![](../media/55bbbb88c4e18c1b90ce588fa76d0e3d.png)

