# 4.Assembling the Solar Tracking Kit

Things to note before assembly:

1.Before assembly, please tear off the protective film on the acrylic boards.

![](../media/15aad64ba3edebe3004541446eacc823.png)

2.You will need to prepare yourself a 18650 battery as well as a battery charger.

The following parameters are available for your purchase：

| Specifications            |                                                           |
|---------------------------|-----------------------------------------------------------|
| Size                      | 18650                                                     |
| Positive Terminal：       | ![](../media/a073b35e565bb6f3c29ec114dc467e6b.png)With a top |
| Capacity                  | >2200mAh                                                 |
| Nominal Voltage           | 3.7V                                                      |
| Maximum Voltage           | 4.2V                                                      |
| Discharge cut-off Voltage | 2.5V                                                      |
| Rechargeable              | Yes                                                       |
| Approx. Dimensions        | 18.5mm x 65.2mm                                           |



**Part 1**

Components Needed

![](../media/5b08f5dd3cc6a24979d83addfba135e3.png)

Assembling the 1602 display and battery box

![](../media/f8aabfb9c14e1d0072298f751a2f114f.png)

![](../media/d9156cedcf4e898026c92001597b0c8a.png)

**Part 2**

Components Needed

![](../media/f74712c21427762025bdb9b44cd4d748.png)

Assembling the control board

![](../media/081d0d21d1bd9f964723c8f323a3f177.png)

![](../media/ec727ba8f455586f2120e984ba181e03.png)

**Part 3**

Components Needed

![](../media/cde397ed998ff584eceec0d4e5904531.png)

Assembling the Lithium Battery Power Module and Charging module

![](../media/29ccce1d21aefa84a68b8aeacf40f964.png)

![](../media/98b5873c9dd038506b3d5c92d88741fe.png)

**Part 4**

Components Needed

![](../media/4dfed35fb3b9411520d379b76b55e2e5.png)

Assembling the M3*45MM Copper Columns

![](../media/284424ec29729ad222977eaff93489c1.png)

![](../media/d63b4374373005a015d39bd6720642c6.png)

**Wiring the Lower Part Of The Kit**

Use the 20cm M to F DuPont Wire to connect the Solar USB Charging Module to the uno control board. The G pin of the module is connected to the GND of UNO, the V pin of the module is connected to the Vin of UNO

![](../media/fc355889b96c325ccac72e887b379b16.png)

![](../media/5c2fcdb796c2da6a41ba70061a49710b.png)

Connect the LCD display to the UNO board

| Pin Connection Table       |                      |
|----------------------------|----------------------|
| Pin of the **LCD Display** | Pin of Control Board |
| GND(black wire)            | G(GND)               |
| VCC(red wire)              | V(5V)                |
| SDA(blue wire)             | A4                   |
| SCL(green wire)            | A5                   |

![](../media/ca85a47344a459c91d3a20079f9687a1.png)![](../media/f912e3561a5fdb4f7004149f5a53f828.png)

Note: The working voltage of the LCD Display is 5V, please make sure the 3.3-5V Switch on the control board is dial to 5V.

![](../media/62285b96cb0ec086bc79a72f776aba8f.png)

Install an 18650 battery inside the battery case, taking care that the positive and negative terminals of the battery are all the way to the positive and negative terminals of the battery case.

Connect the battery case to the solar usb charging module and mobile phone charging module.

![](../media/4fae5606d8a89cf3d64cad13fac2df19.png)


**Part 5**

Components Needed

![](../media/d267f4fefc6c90283e57c0b9db9cc2fd.png)

![](../media/14a35fc0cc7372a856fc09880a885b78.png)

Assembling the sensors and modules

![](../media/e776075a7ae1c43745cfeeb837a1c738.png)

**Part 6**

Components Needed

![](../media/5e270635b02e1c4a7c1be9f2353da395.png)

![](../media/bfb641e5e42d2f84142ffcc673894e77.png)

![](../media/5975368bb162a843736b912b1c172e95.png)

**Part 7**

Components Needed

![](../media/211500037f52144a3aa4b18bd39c1870.png)

![](../media/c90ed1203ee35f25e00fb3974b6082f1.png)

Note the orientation of the upper section, the buzzer module and the LCD display below are in the same orientation.

![](../media/2e04abbf3613d39afb2cdcff86e1932c.png)

**Part 8**

Components Needed

![](../media/af21087f2c4fc3ce4b51107b3258caa4.png)

![](../media/8289ff55eb2e2acdd9f3425aaaa936d3.png)

![](../media/be529a21c1ca16d114c73475fb6c0c58.png)

**Part 9**

Components Needed

![](../media/459a9081531592d6dfa2b09ec0096488.png)

![](../media/b6329bbd1ea9fba2fbc79e6897141b71.png)

Installation Diagram (mind the installation direction of the servo)

![](../media/a9b2e2050d9a0b207c7afb00fe0522ca.png)

**Part 10**

Components Needed

![](../media/14fab09683530ffb01429f381608d3f7.png)

![](../media/b28eb76d7b5d5d25f807b15b91349f03.png)

**Part 11**

Components Needed

![](../media/98be19dcc673e5efe24a759b0a54b7dd.png)

![](../media/81c82980c0d3ccac09a316e2fa35e99e.png)

Before putting them together, you need to adjust the angle of the **servo ②**.Set its initial angle to **10 degrees** to keep the solar panel level.

**Connection Diagram**

Note: The servo is connected to G (GND), V (VCC), D10. The brown wire is connected to Gnd (G), the red wire is connected to (V), and the orange wire is connected to digital pin D10.

![](../media/b36a6b47705944879c4200ab1a56b75e.jpeg)

![](../media/6d2a91b6d38e208bec80b10ac6faa08d.png)![](../media/26b8abdd5862d20ced793e36668ac9cf.png)

Installation Diagram (pay attention to the angle of the servo, as shown in the picture)![](../media/15f493110d37113d992fd9e5a76450f5.png)![](../media/fc8e14e930751266c581a1685afbcf97.png)

**Note:** You cannot turn the servo shaft until you have completed this fixing step, otherwise you will need to re-set it to 10 degree using the code above.

**Part 12**

Components Needed

![](../media/459a9081531592d6dfa2b09ec0096488.png)

![](../media/480994b79ba58d1c8c57b8464249f347.png)

![](../media/eafd29872cf5e70d337f270365d35eef.png)

![](../media/3fb558672b4f1ef52b40b5cb60a93882.png)

**Part 13**

Components Needed

![](../media/459a9081531592d6dfa2b09ec0096488.png)

![](../media/7b46133b504120d53fb653671b6352b9.png)

![](../media/d33a267034b2906f56efec5a67019458.png)

![](../media/27efd1be66e14cfacc161c620e513c1c.png)

**Part 14**

Components Needed

![](../media/98be19dcc673e5efe24a759b0a54b7dd.png)

![](../media/a2bc82e4973fde85b2c549a0da860400.png)

Before putting them together, you need to adjust the angle of the **servo ①**. Set its initial angle to **90 degrees**.

**Connection Diagram**

Note: The servo is connected to G (GND), V (VCC), D9. The brown wire is connected to Gnd (G), the red wire is connected to (V), and the orange wire is connected to digital pin D9.

![](../media/2e5505ffa429fb27b8e3e054358e9128.png)

![](../media/e539bcb920b0b1b1420b388c01003e4c.png)

![](../media/f1ffd660bc1faab0118f50ed08794c3d.png)

Installation Diagram

**Note:** You cannot turn the servo shaft until you have completed this fixing step, otherwise you will need to re-set it to 90 degree using the code above.

![](../media/da31eb334e0c1e9d7d81060359ecba73.png)

![](../media/e52f51035e537315152c7498cf9bd6eb.png)

**Part 15**

Components Needed

![](../media/170390970615486d961355a328e60a86.png)

![](../media/0525cb77644ddb9b9c5c355785b0e897.png)

![](../media/cd803e2e6709d1633a22cc6f57de88ea.png)

**Part 16**

Components Needed

![](../media/3b52ffb52dae7c7c450af6fe3d3d9402.png)

![](../media/9991f2d956f33da3078438e1dfe37000.png)

![](../media/b56cc707cebe05c8e98b6f6afc795423.png)

**Part 17**

Components Needed

![](../media/2d22837fabdcc1c8c34a9927129ddcb5.png)

![](../media/f21718a60ac270bf9bb88a8b2b2c05ab.png)

![](../media/4a5cc2caf5c79ef0538cf1861fa73298.png)

**Part 18**

Components Needed

![](../media/f0a1f87a34e18a1c1f22ffb93fc98c2c.png)

![](../media/342f6b93cbaca41ee062352702267c95.png)

![](../media/77b94d52457f9104fc85ae91d3c18027.png)

**Part 19**

Components Needed

![](../media/7a023d5f4e9a13cf7d2141ab4700d811.png)

![](../media/6bf49abc10882b8ead3d3aede99198c7.png)

![](../media/db89b632a149b4431d9e01a2a373851d.png)

**Wiring the Upper Part Of The Kit**

1)![](../media/469d80ec804ed66cc813071e3cf56aa8.png)Connect the lower servo to D9 of the UNO control board, and the upper servo of D10 on the UNO control board. Connect the brown wire of the servo to G, the red wire to V, and the yellow wire to S.

2)Plug the jack of the solar panel to the SOLAR4.8-6.0V end of the solar USB charging module.

![](../media/56b3303300870f07a6cf4e38ab1fa998.png)

3)Next, we will use the seven 3P 26AWG 200mm F-F DuPont Wires to connect the photosensors, buzzer module, pushbutton module and the DHT11 temperature and humidity sensor to the uno board.

![](../media/ffb7fb703ade99a7d7a932da7c781d81.png)

The photosensitive sensor on the left is connected to the A0 pin of UNO board.

The photosensitive sensor on the right is connected to the A1 pin of UNO board.

The photosensitive sensor on the back is connected to the A2 pin of UNO board.

The photosensitive sensor on the front is connected to the A3 pin of UNO board.

The button module is connected to the D2 pin of UNO board.

The buzzer module is connected to the D6 pin of UNO board.

The dht11 temperature and humidity sensor is connected to the D7 pin of UNO board.

![](../media/9822f50f9d1906833347175a42ff3fea.png)

**Note: In order to avoid reverse connection, we recommend wiring according to the following method：**

-The G pin of the module is connected to the G pin of UNO with a black wire;

-The V pin of the module is connected to the V pin of UNO with a red wire;

-The S pin of the module is connected to the S pin of UNO with a orange wire.

As shown in the way the dht11 temperature and humidity sensor is connected to the UNO board.

![](../media/8beddf04e8c9ee1c94c91b225328036e.png)

4)Finally, connect the bh1750 digital light intensity module to the UNO board.

![](../media/d7fccd89d5bed291ccce34babfbf5c91.png)

