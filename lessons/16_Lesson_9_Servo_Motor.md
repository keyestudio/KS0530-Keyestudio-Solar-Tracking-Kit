## Les 9: Test de Servo Motor

![](../media/1e72f94dd8103419a46dded6b2969706.png)

**(1)Beschrijving：**

Een servomotor is een positionele besturingsrotatie-actuator. Het bestaat voornamelijk uit een behuizing, printplaat, kernloze motor, tandwiel en positieresensor. Het werkingsprincipe is dat de servo het signaal ontvangt dat door de MCU of ontvanger wordt verzonden, en een referentiesignaal produceert met een periode van 20 ms en een breedte van 1,5 ms, vervolgens vergelijkt het de verkregen DC-voorspanning met de spanning van de potentiometer en verkrijgt het spanningsverschil als uitgang.

![](../media/69be958142b773acdae33eeef12afed7.png)

Voor de servo die in dit project wordt gebruikt, is de bruine draad de aarde, de rode is de positieve draad en de oranje is de signaaldraad.

De rotatiehoek van de servomotor wordt geregeld door de duty cycle van het PWM (Pulse-Width Modulation) signaal aan te passen. De standaardcyclus van het PWM-signaal is 20 ms (50 Hz). Theoretisch ligt de breedte tussen 1 ms en 2 ms, maar in de praktijk is het tussen 0,5 ms en 2,5 ms. De breedte komt overeen met de rotatiehoek van 0° tot 180°. Let op dat bij motoren van verschillende merken hetzelfde signaal een andere rotatiehoek kan veroorzaken.

![](../media/84afa5e42f1badf7713edd8ff8e306e4.png)

Meer details:

![](../media/ddc74f62dc936c925d28d70a1a9c2214.png)

**(2)Parameters:**

Werkspanning: DC 4,8V ~ 6V

Werkhoekbereik: ongeveer 180° (bij 500 → 2500 μsec)

Pulsbreedtebereik: 500 → 2500 μsec

Snelheid zonder belasting: 0,12 ± 0,01 sec / 60 (DC 4,8V) 0,1 ± 0,01 sec / 60 (DC 6V)

Stroom zonder belasting: 200 ± 20mA (DC 4,8V) 220 ± 20mA (DC 6V)

Stopkoppel: 1,3 ± 0,01 kg·cm (DC 4,8V) 1,5 ± 0,1 kg·cm (DC 6V)

Stopstroom: ≦ 850mA (DC 4,8V) ≦ 1000mA (DC 6V)

Stand-by stroom: 3 ± 1mA (DC 4,8V) 4 ± 1mA (DC 6V)

Leidraadlengte: 250 ± 5 mm

Afmetingen: 22,9 * 12,2 * 30 mm

Gewicht: 9 ± 1 g (zonder servohoorn)

**(3)Je moet voorbereiden:**

| Besturingsbord*1                                | USB-kabel*1                                    | Servo*2                                               |
|-------------------------------------------------|-------------------------------------------------|--------------------------------------------------------|
| ![](../media/60cb7081df16f5d5169b0883a6fbf3df.png) | ![](../media/4f8d5af6dee9016b45d975adb2391d37.png) | ![](../media/1e72f94dd8103419a46dded6b2969706.png) |

**(4)Aansluitschema**

Let op: De servo is aangesloten op G (GND), V (VCC), D9. De bruine draad is verbonden met Gnd (G), de rode draad met (V), en de oranje draad met digitale pin D9.

![](../media/2e5505ffa429fb27b8e3e054358e9128.png)

We introduceren twee manieren om de servomotoren te besturen, één zonder gebruik te maken van de **<Servo.h>** bibliotheek en één met de **<Servo.h>** bibliotheek.

**9.1 Servo besturen zonder de <Servo.h> bibliotheek**

![](../media/e6468e130d096224df89724b3a28410d.png)![](../media/eed0aa6ca3a115cf693631ec17fe8966.png)

![](../media/b198b9a0d2c060709ae8305cf3b0123a.png)

**9.2 Servo besturen met de <Servo.h> bibliotheek**

![](../media/8a0f67e5e5de4ae3354b61b23287d09f.png)![](../media/27998b4cb3006ca079896756473dc059.png)![](../media/65614db1ad96cb78b577178364ed5241.png)