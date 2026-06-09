## Lektion 1.1: LED blinkt

**(1).Beschreibung：**

![](../media/90f495d6deb8516c95dea36fb1efa019.jpeg)![](../media/2aeeeb61ad2a3110303b3108f4ba31e1.png)

LED, die Abkürzung für Leuchtdiode, besteht aus chemischen Verbindungen wie Ga, As, P, N usw. Die LED kann durch Ändern der Verzögerungszeit im Testcode in verschiedenen Farben blinken. Bei Steuerung und Stromversorgung über GND und VCC leuchtet die LED, wenn der S-Anschluss auf hohem Pegel ist; andernfalls erlischt sie.

![](../media/628e402ae3fc455a2812705b17d7c30d.png)  
**(2).Parameter：**

Steuerschnittstelle: digitaler Port

Betriebsspannung: DC 3,3-5V

Pin-Abstand: 2,54 mm

LED-Anzeigefarbe: gelb

**(3).Sie müssen vorbereiten:**

| Steuerplatine*1                                | USB-Kabel*1                                    | Gelbes LED-Modul*1                            | 3pin F-F 26AWG Kabel                             |
|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
| ![](../media/60cb7081df16f5d5169b0883a6fbf3df.png) | ![](../media/4f8d5af6dee9016b45d975adb2391d37.png) | ![](../media/628e402ae3fc455a2812705b17d7c30d.png) | ![](../media/d57e6d40ae04a5be544cb6b4833a3e98.png) |

**(4).Anschlussdiagramm des LED-Moduls：**

Die Pins -, + und S des LED-Moduls sind mit den Pins G, 5V und D3 des Steuerboards verbunden.

![](../media/045af155ff7b448adf0e819200ccef57.png)

![](../media/a883125f029dffe6ce7c7d79645aa16d.png)

![](../media/188b0bea1512ccc6a9b3e20ff8a9265d.png)

**(5).Testergebnisse:** LED blinkt im Intervall von 1 Sekunde

![](../media/351380ab56f691b54869160828bc56d0.png)

**(6).Code-Erklärungen:**

pinMode(LED，OUTPUT) - Diese Funktion legt fest, ob der Pin als INPUT oder OUTPUT verwendet wird

digitalWrite(LED，HIGH) - Wenn der Pin als OUTPUT definiert ist, kann er auf HIGH (5V Ausgang) oder LOW (0V Ausgang) gesetzt werden