## Lesson 9: Test the Servo Motor

![](../media/1e72f94dd8103419a46dded6b2969706.png)

**(1)Description：**

Servo motor is a position control rotary actuator. It mainly consists of housing, circuit board, core-less motor, gear and position sensor. Its working principle is that the servo receives the signal sent by MCU or receiver, and produces a reference signal with a period of 20ms and width of 1.5ms, then compares the acquired DC bias voltage to the voltage of the potentiometer and obtains the voltage difference output.

![](../media/69be958142b773acdae33eeef12afed7.png)

For the servo used in this project, the brown wire is the ground, the red one is the positive wire, and the orange one is the signal wire.

The rotation angle of servo motor is controlled by regulating the duty cycle of PWM (Pulse-Width Modulation) signal. The standard cycle of PWM signal is 20ms(50Hz). Theoretically, the width is distributed between 1ms-2ms, but in fact,it’s between 0.5ms-2.5ms. The width corresponds to the rotation angle from 0° to 180°. But note that for different brand motor, the same signal may have different rotation angle.

![](../media/84afa5e42f1badf7713edd8ff8e306e4.png)

More details:

![](../media/ddc74f62dc936c925d28d70a1a9c2214.png)

**(2)Parameters:**

Working voltage: DC 4.8V \~ 6V

Operating angle range: about 180 ° (at 500 → 2500 μsec)

Pulse width range: 500 → 2500 μsec

No-load speed: 0.12 ± 0.01 sec / 60 (DC 4.8V) 0.1 ± 0.01 sec / 60 (DC 6V)

No-load current: 200 ± 20mA (DC 4.8V) 220 ± 20mA (DC 6V)

Stopping torque: 1.3 ± 0.01kg · cm (DC 4.8V) 1.5 ± 0.1kg · cm (DC 6V)

Stop current: ≦ 850mA (DC 4.8V) ≦ 1000mA (DC 6V)

Standby current: 3 ± 1mA (DC 4.8V) 4 ± 1mA (DC 6V)

Lead length: 250 ± 5 mm

Appearance size: 22.9 * 12.2 * 30mm

Weight: 9 ± 1 g (without servo horn)

**(3)You need to prepare:**

| Control Board*1                                | USB Cable*1                                    | Servo*2                                               |
|-------------------------------------------------|-------------------------------------------------|--------------------------------------------------------|
| ![](../media/60cb7081df16f5d5169b0883a6fbf3df.png) | ![](../media/4f8d5af6dee9016b45d975adb2391d37.png) | ![](../media/1e72f94dd8103419a46dded6b2969706.png) |

**(4)Connection Diagram**

Note: The servo is connected to G (GND), V (VCC), D9. The brown wire is connected to Gnd (G), the red wire is connected to (V), and the orange wire is connected to digital pin D9.

![](../media/2e5505ffa429fb27b8e3e054358e9128.png)

We will introduce two ways to control the servos, one without using the **<Servo.h**> library file and one with the **<Servo.h>** library file.

**9.1 Not using the <Servo.h> library to control the servo**

![](../media/e6468e130d096224df89724b3a28410d.png)![](../media/eed0aa6ca3a115cf693631ec17fe8966.png)

![](../media/b198b9a0d2c060709ae8305cf3b0123a.png)

**9.2 Using the <Servo.h> library to control the servo**

![](../media/8a0f67e5e5de4ae3354b61b23287d09f.png)![](../media/27998b4cb3006ca079896756473dc059.png)![](../media/65614db1ad96cb78b577178364ed5241.png)

