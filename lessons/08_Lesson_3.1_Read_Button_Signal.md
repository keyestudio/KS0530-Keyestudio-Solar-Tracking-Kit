## Lektion 3.1: Das digitale Signal des Tastenmoduls auslesen

**(1)Beschreibung**

In diesem Projekt möchten wir das Drucktastenmodul verwenden, um die LED zu steuern.

**(2)Parameter:**

Arbeitsspannung: DC 3,3-5V

Steuersignal: digitales Signal

Größe: 34mm

Gewicht: 3,8g

**(3)Sie müssen vorbereiten:**

| Steuerplatine*1                                | USB-Kabel*1                                    | Gelbes LED-Modul*1                            | 3poliges F-F 26AWG Kabel*2                          | Drucktastenmodul*1                           |
|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
| ![](../media/60cb7081df16f5d5169b0883a6fbf3df.png) | ![](../media/4f8d5af6dee9016b45d975adb2391d37.png) | ![](../media/628e402ae3fc455a2812705b17d7c30d.png) | ![](../media/d57e6d40ae04a5be544cb6b4833a3e98.png) | ![](../media/6ba7e34f89af660ac90bb2552907ef3f.png) |

**(4)Anschlussdiagramm**

| Pin-Verbindungstabelle  |                      |
|------------------------|----------------------|
| Pin des **Tasters**     | Pin der Steuerplatine |
| G                      | G(GND)               |
| V                      | V(5V)                |
| S                      | D2                   |

| Pin-Verbindungstabelle |                      |
|-----------------------|----------------------|
| Pin der **LED**        | Pin der Steuerplatine |
| G                      | G(GND)               |
| V                      | V(5V)                |
| S                      | D3                   |

![](../media/024ba0bbd683bf28f7783c8645f488be.png)

![](../media/32bb1f78caa01e562a769a0afe64da74.png)

![](../media/cb4d53c7c2057f85eb4255c453e31001.png)

![](../media/9688c560b185edabcf17838af3353b36.png)

**(5)Code-Erklärung:**

Serial.begin(9600) – initialisiert die serielle Kommunikation und setzt die Baudrate auf 9600

pinMode(pin, INPUT) – verwendet die Funktion pinMode(), um Arduino mitzuteilen, ob es sich um einen Ausgangs- oder Eingangs-Pin handelt

digitalRead(pin) – liest den digitalen Pegel der Pins aus, entweder HIGH oder LOW