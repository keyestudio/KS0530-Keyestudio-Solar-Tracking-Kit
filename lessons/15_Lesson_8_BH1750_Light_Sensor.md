## Lektion 8: BH1750 Digitales Lichtintensitätsmodul

**(1)Beschreibung:**

![](../media/53ab41d84e93814e57076a8cc25e1aa7.png)

Die Hauptkomponente dieses Sensors ist der Chip BH1750FVI, ein integrierter Chip für digitale Lichtintensität.

Wie im Bild unten gezeigt, besteht der BH1750 aus einer Photodiode, einem Operationsverstärker, einer ADC-Erfassung, einem Quarzoszillator usw. Die Photodiode wandelt das eingehende optische Signal durch den photovoltaischen Effekt in ein elektrisches Signal um. Nach der Verstärkung durch die Operationsverstärkerschaltung wird die Spannung vom ADC erfasst und dann durch die Logikschaltung in eine 16-Bit-Binärzahl umgewandelt und im internen Register gespeichert (Hinweis: Je stärker das Licht, desto größer der Fotostrom und desto höher die Spannung, daher kann die Lichtintensität anhand des Spannungswertes beurteilt werden.

Es ist jedoch zu beachten, dass Spannung und Lichtintensität eine Eins-zu-eins-Beziehung haben, aber nicht proportional sind. Deshalb wird in diesem Chip eine lineare Verarbeitung durchgeführt und warum der integrierte IC direkt anstelle von Photodioden verwendet wird). Der BH1750 führt die Taktleitung und Datenleitung heraus. Der Mikrocontroller kann über das I2C-Protokoll mit dem BH1750-Modul kommunizieren. Sie können den Arbeitsmodus des BH1750 wählen oder die Beleuchtungsstärkedaten aus dem BH1750-Register auslesen.

**(2)Parameter:**

I2C-Digitalinterface, unterstützt eine maximale Geschwindigkeit von 400Kbps

Die Ausgabe ist Beleuchtungsstärke

Messbereich ist 1~65535 Lux, die minimale Auflösung beträgt 1 Lux

Niedriger Stromverbrauch (Power down) Funktion

Schirmt Störungen durch Lichtänderungen verursacht durch 50/60Hz Netzfrequenz ab

Unterstützt zwei I2C-Adressen, ausgewählt durch den ADDR-Pin

Geringe Messabweichung (maximaler Genauigkeitsfehler +/-20%)

GND Masseanschluss

SDA I2C-Bus Datenpin

SCL I2C-Bus Taktpin

VCC Versorgungsspannung 3-5V

**(3)Sie müssen vorbereiten:**

| Steuerplatine*1                                | USB-Kabel*1                                    | BH1750FVI Sensor*1                             | 350mm 4poliges F-F Kabel                        |
|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
| ![](../media/60cb7081df16f5d5169b0883a6fbf3df.png) | ![](../media/4f8d5af6dee9016b45d975adb2391d37.png) | ![](../media/53ab41d84e93814e57076a8cc25e1aa7.png) | ![](../media/626e88c46a8a1385bd0558610a17ca9f.png) |

**(4)Anschlussdiagramm:**

![](../media/d7fccd89d5bed291ccce34babfbf5c91.png)

![](../media/e3b43d6080bdd3dcf111f5d594529d3a.png)![](../media/f232b12906eb5a6819c933c79183fc58.png)



![](../media/92857c7b8c368330acb6630e39bd462c.png)

(**Hinweis**: Da der I2C-Bus mehrere Geräte mit unterschiedlichen Adressen haben kann, gibt es keine Konflikte, wenn das digitale Lichtintensitätsmodul zusammen mit dem I2C LCD1602 Modul verwendet wird, da sie unterschiedliche Adressen haben.)