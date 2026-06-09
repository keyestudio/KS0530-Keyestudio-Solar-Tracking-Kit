## Les 5: 1602 LCD Display Module

**(1).Beschrijving：**

![](../media/28bf5a86d2265afb050e55589e145fe9.png)

Met I2C-communicatiemodule is dit een displaymodule die 2 regels kan weergeven met 16 tekens per regel.

Het toont een blauwe achtergrond en witte tekst en sluit aan op de I2C-interface van de MCU, wat de MCU-bronnen aanzienlijk bespaart.

Aan de achterkant van het LCD-display bevindt zich een blauwe potentiometer voor het aanpassen van de achtergrondverlichting. Het communicatieadres staat standaard op 0x27.

De originele 1602 LCD kan starten en werken met 11 IO-poorten, maar de onze is gebouwd met ARDUINOIIC/I2C-interface, waardoor 9 IO-poorten worden bespaard. Daarnaast is de module voorzien van 4 positioneringsgaten met een diameter van 3 mm, wat handig is om deze op andere apparaten te bevestigen.

**(2).Parameters：**

I2C-adres: 0x27

Achtergrondverlichting (blauw, wit)

Voedingsspanning: **5V**

Instelbaar contrast

GND: Een pin die met de aarde is verbonden

VCC: Een pin die met een +5V voeding is verbonden

SDA: Een pin die met analoge poort A4 is verbonden voor IIC-communicatie

SCL: Een pin die met analoge poort A5 is verbonden voor IIC-communicatie

**(3).Je moet voorbereiden:**

| Besturingsbord*1                                | USB-kabel*1                                    | LCD Display*1                                  | 4P-1P F-F DuPon Draad                            |
|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
| ![](../media/60cb7081df16f5d5169b0883a6fbf3df.png) | ![](../media/4f8d5af6dee9016b45d975adb2391d37.png) | ![](../media/28bf5a86d2265afb050e55589e145fe9.png) | ![](../media/f4df3fe85086b2896d958b1caf93a038.png) |

**(4)Aansluitschema**

| Pin Aansluitingstabel       |                      |
|-----------------------------|----------------------|
| Pin van het **LCD Display** | Pin van Besturingsbord |
| GND                         | G(GND)                 |
| VCC                         | V(5V)                 |
| SDA                         | A4                 |
| SCL                         | A5                 |

![](../media/8c306bd1b7399f0819f4a1c435177ec3.png)

![](../media/74924d373976c4ff67719dea807a5f0d.png)

![](../media/2ab182ee1dd52f41062a95d8519d6a17.png)

![](../media/6eb2b20c59f81f11a84c57be5d8a91f4.png)![](../media/5facbfa2ab2b3bb0a6946cf0a77d263a.png)