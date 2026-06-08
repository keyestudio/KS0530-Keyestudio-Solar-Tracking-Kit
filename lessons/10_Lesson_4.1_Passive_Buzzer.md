## Lesson 4.1: Passive Buzzer

**(1)Description**

There are prolific interactive works completed by Arduino. The most common one is sound and light display. We always use LED to make experiments. For this lesson, we design circuit to emit sound. The universal sound components are buzzer and horns. Buzzer is easier to use. And buzzer includes about active buzzer and passive buzzer. In this experiment, we adopt passive buzzer.

While using passive buzzer, we can control different sound by inputting square waves with distinct frequency. During the experiment, we control code to make buzzer sound, begin with “tick, tick” sound, then make passive buzzer emit “do re mi fa so la si do”, and play specific songs.

**(2)Parameters:**

Control interface: digital port

Working voltage: DC 3.3-5V

**(3)You need to prepare:**

| Control Board*1                                | USB Cable*1                                    | Passive Buzzer*1                               | 3pin F-F 26AWG Wire                             |
|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
| ![](../media/60cb7081df16f5d5169b0883a6fbf3df.png) | ![](../media/4f8d5af6dee9016b45d975adb2391d37.png) | ![](../media/0a27e277ef5e39bc76315d74d9bfdf46.png) | ![](../media/d57e6d40ae04a5be544cb6b4833a3e98.png) |

**(4).Connection Diagram：**

![](../media/427e69c5b4d8000e5aa7afaca63b8e4f.png)

The G, V and S pins of passive buzzer are connected to G, V and D6 of the control Board.

| Pin Connection Table  |                      |
|-----------------------|----------------------|
| Pin of the **Buzzer** | Pin of Control Board |
| G                     | G                    |
| V                     | V                    |
| S                     | D6                   |

![](../media/6ddc10c4079503d3636ea2588055c854.png)

![](../media/203ba6ad35615867f8d743ac0be4a2df.png)

![](../media/05e05166eac9d5ec81fe28bc637110d3.png)

