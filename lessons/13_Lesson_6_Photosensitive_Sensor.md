## Lektion 6: Fotosensitiver Sensor

**(1)Beschreibung**

In diesem Kit sind vier Fotowiderstand-Sensormodule enthalten, die Umgebungslichtsensoren mit Fotowiderstand als Hauptkomponente.

Der Widerstand eines Fotowiderstands variiert mit der Lichtintensität. Wenn Licht vorhanden ist, liegt sein Widerstand im Bereich von 5-10KΩ; während er im Dunkeln nur 0,2MΩ beträgt. Basierend auf dieser Eigenschaft kann eine Schaltung aufgebaut werden, die die Widerstandsänderung in Spannungsänderungen umwandelt.

Außerdem verfügt der Sensor über einen verpolungssicheren Anschluss mit einem Rastermaß von 2,54 mm, um die Verkabelung zu erleichtern. Er ist auch mit vielen Arten von Mikrocontrollern kompatibel, wie der Arduino-Mikrocontroller-Serie.

Hier verwenden wir diesen Sensor mit dem Arduino-Mikrocontroller. Der S (Signal)-Anschluss des Sensors sollte an den analogen Pin des Arduino angeschlossen werden, um die Variation des analogen Werts zu erfassen, der im seriellen Monitor ausgegeben wird. Bitte beachten Sie, dass der Sensor zwei Positionierlöcher mit einem Durchmesser von 4,9 mm besitzt, um die Befestigung zu erleichtern.

**(2)Parameter:**

Betriebsspannung：3,3V-5V（DC）

Schnittstelle：3PIN

Ausgangssignal：analoges Signal

Gewicht：2,3g

![](../media/537af5b84f09fe71a4e1f6cbeabdfc81.png)

**(3)Sie müssen vorbereiten:**

| Steuerplatine*1                                | USB-Kabel*1                                    | Gelbes LED-Modul*1                            | 3-poliges DuPont-Kabel*2                       | Taster-Modul*4                                |
|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
| ![](../media/60cb7081df16f5d5169b0883a6fbf3df.png) | ![](../media/4f8d5af6dee9016b45d975adb2391d37.png) | ![](../media/628e402ae3fc455a2812705b17d7c30d.png) | ![](../media/d57e6d40ae04a5be544cb6b4833a3e98.png) | ![](../media/537af5b84f09fe71a4e1f6cbeabdfc81.png) |

**(4).Anschlussdiagramm:**

| Anschluss-Tabelle       |                      |
|------------------------|----------------------|
| Pin des **Fotowiderstands** | Pin der Steuerplatine |
| G                      | G(GND)               |
| V                      | V(5V)                |
| S                      | A0                   |

| Anschluss-Tabelle      |                      |
|-----------------------|----------------------|
| Pin der **LED**       | Pin der Steuerplatine |
| G                     | G(GND)               |
| V                     | V(5V)                |
| S                     | D3                   |



![](../media/9ad0c25387b65d7eb5ca40d933b2f84c.png)

![](../media/38ea947110ec2dd6b3ee27abd895f258.png)

![](../media/28f391156fb2aec29b24e8ce09246b4c.png)



![](../media/e08a2aa856074276ab58ab45e2652f17.png)![](../media/819aafadd69170aca8063e25a198f0ae.png)