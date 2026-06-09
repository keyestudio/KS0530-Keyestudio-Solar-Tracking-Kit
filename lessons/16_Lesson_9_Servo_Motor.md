## Lektion 9: Testen des Servomotors

![](../media/1e72f94dd8103419a46dded6b2969706.png)

**(1)Beschreibung：**

Ein Servomotor ist ein positionsgesteuerter Drehaktuator. Er besteht hauptsächlich aus Gehäuse, Leiterplatte, kernlosem Motor, Getriebe und Positionssensor. Sein Funktionsprinzip besteht darin, dass der Servo das vom MCU oder Empfänger gesendete Signal empfängt und ein Referenzsignal mit einer Periode von 20 ms und einer Breite von 1,5 ms erzeugt, dann die erfasste Gleichstromvorspannung mit der Spannung des Potentiometers vergleicht und die Spannungsdifferenzausgabe erhält.

![](../media/69be958142b773acdae33eeef12afed7.png)

Für den in diesem Projekt verwendeten Servo ist der braune Draht die Masse, der rote ist der Plusdraht und der orange ist der Signaldraht.

Der Drehwinkel des Servomotors wird durch Regulierung des Tastverhältnisses des PWM-(Pulsweitenmodulations-)Signals gesteuert. Die Standardperiode des PWM-Signals beträgt 20 ms (50 Hz). Theoretisch liegt die Pulsbreite zwischen 1 ms und 2 ms, tatsächlich jedoch zwischen 0,5 ms und 2,5 ms. Die Breite entspricht dem Drehwinkel von 0° bis 180°. Beachten Sie jedoch, dass bei Motoren unterschiedlicher Marken dasselbe Signal unterschiedliche Drehwinkel bewirken kann.

![](../media/84afa5e42f1badf7713edd8ff8e306e4.png)

Weitere Details:

![](../media/ddc74f62dc936c925d28d70a1a9c2214.png)

**(2)Parameter:**

Arbeitsspannung: DC 4,8 V \~ 6 V

Betriebswinkelbereich: ca. 180 ° (bei 500 → 2500 μs)

Pulsbreitenbereich: 500 → 2500 μs

Leerlaufdrehzahl: 0,12 ± 0,01 s / 60 (DC 4,8 V) 0,1 ± 0,01 s / 60 (DC 6 V)

Leerlaufstrom: 200 ± 20 mA (DC 4,8 V) 220 ± 20 mA (DC 6 V)

Haltemoment: 1,3 ± 0,01 kg·cm (DC 4,8 V) 1,5 ± 0,1 kg·cm (DC 6 V)

Strom bei Stillstand: ≦ 850 mA (DC 4,8 V) ≦ 1000 mA (DC 6 V)

Standby-Strom: 3 ± 1 mA (DC 4,8 V) 4 ± 1 mA (DC 6 V)

Kabellänge: 250 ± 5 mm

Abmessungen: 22,9 * 12,2 * 30 mm

Gewicht: 9 ± 1 g (ohne Servoarm)

**(3)Sie müssen vorbereiten:**

| Steuerplatine*1                                | USB-Kabel*1                                    | Servo*2                                               |
|-------------------------------------------------|-------------------------------------------------|--------------------------------------------------------|
| ![](../media/60cb7081df16f5d5169b0883a6fbf3df.png) | ![](../media/4f8d5af6dee9016b45d975adb2391d37.png) | ![](../media/1e72f94dd8103419a46dded6b2969706.png) |

**(4)Anschlussdiagramm**

Hinweis: Der Servo ist an G (GND), V (VCC), D9 angeschlossen. Der braune Draht ist mit Gnd (G) verbunden, der rote Draht mit (V) und der orange Draht mit dem digitalen Pin D9.

![](../media/2e5505ffa429fb27b8e3e054358e9128.png)

Wir stellen zwei Möglichkeiten vor, die Servos zu steuern: eine ohne Verwendung der **<Servo.h>**-Bibliothek und eine mit der **<Servo.h>**-Bibliothek.

**9.1 Steuerung des Servos ohne Verwendung der <Servo.h>-Bibliothek**

![](../media/e6468e130d096224df89724b3a28410d.png)![](../media/eed0aa6ca3a115cf693631ec17fe8966.png)

![](../media/b198b9a0d2c060709ae8305cf3b0123a.png)

**9.2 Steuerung des Servos mit der <Servo.h>-Bibliothek**

![](../media/8a0f67e5e5de4ae3354b61b23287d09f.png)![](../media/27998b4cb3006ca079896756473dc059.png)![](../media/65614db1ad96cb78b577178364ed5241.png)