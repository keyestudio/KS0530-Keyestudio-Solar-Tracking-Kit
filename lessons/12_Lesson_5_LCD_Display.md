## Lektion 5: 1602 LCD Display Modul

**(1).Beschreibung：**

![](../media/28bf5a86d2265afb050e55589e145fe9.png)

Mit I2C-Kommunikationsmodul ist dies ein Display-Modul, das 2 Zeilen mit jeweils 16 Zeichen anzeigen kann.

Es zeigt einen blauen Hintergrund mit weißen Buchstaben und wird an die I2C-Schnittstelle des MCU angeschlossen, was die MCU-Ressourcen erheblich spart.

Auf der Rückseite des LCD-Displays befindet sich ein blauer Potentiometer zur Einstellung der Hintergrundbeleuchtung. Die Kommunikationsadresse ist standardmäßig auf 0x27 eingestellt.

Das originale 1602 LCD kann mit 11 IO-Ports gestartet und betrieben werden, aber unseres ist mit ARDUINOIIC/I2C-Schnittstelle gebaut, wodurch 9 IO-Ports eingespart werden. Alternativ verfügt das Modul über 4 Befestigungslöcher mit einem Durchmesser von 3 mm, was es Ihnen erleichtert, es an anderen Geräten zu befestigen.

**(2).Parameter：**

I2C-Adresse: 0x27

Hintergrundbeleuchtung (blau, weiß)

Versorgungsspannung: **5V**

Einstellbarer Kontrast

GND: Ein Pin, der mit Masse verbunden wird

VCC: Ein Pin, der mit einer +5V Stromversorgung verbunden wird

SDA: Ein Pin, der für die IIC-Kommunikation mit dem analogen Port A4 verbunden wird

SCL: Ein Pin, der für die IIC-Kommunikation mit dem analogen Port A5 verbunden wird

**(3).Sie müssen vorbereiten:**

| Steuerplatine*1                                | USB-Kabel*1                                    | LCD Display*1                                  | 4P-1P F-F DuPon Kabel                            |
|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
| ![](../media/60cb7081df16f5d5169b0883a6fbf3df.png) | ![](../media/4f8d5af6dee9016b45d975adb2391d37.png) | ![](../media/28bf5a86d2265afb050e55589e145fe9.png) | ![](../media/f4df3fe85086b2896d958b1caf93a038.png) |

**(4)Anschlussdiagramm**

| Pin Anschluss Tabelle       |                      |
|----------------------------|----------------------|
| Pin des **LCD Displays**    | Pin der Steuerplatine |
| GND                        | G(GND)                 |
| VCC                        | V(5V)                 |
| SDA                        | A4                 |
| SCL                        | A5                 |

![](../media/8c306bd1b7399f0819f4a1c435177ec3.png)

![](../media/74924d373976c4ff67719dea807a5f0d.png)

![](../media/2ab182ee1dd52f41062a95d8519d6a17.png)

![](../media/6eb2b20c59f81f11a84c57be5d8a91f4.png)![](../media/5facbfa2ab2b3bb0a6946cf0a77d263a.png)