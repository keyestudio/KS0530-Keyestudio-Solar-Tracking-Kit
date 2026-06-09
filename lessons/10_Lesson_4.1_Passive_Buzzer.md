## Lektion 4.1: Passiver Summer

**(1)Beschreibung**

Es gibt zahlreiche interaktive Projekte, die mit Arduino realisiert wurden. Das häufigste ist die Ton- und Lichtanzeige. Wir verwenden immer LEDs für Experimente. Für diese Lektion entwerfen wir eine Schaltung, die Töne erzeugt. Die universellen Tonkomponenten sind Summer und Hupe. Der Summer ist einfacher zu verwenden. Und es gibt aktive und passive Summer. In diesem Experiment verwenden wir einen passiven Summer.

Beim Einsatz eines passiven Summers können wir durch Eingabe von Rechtecksignalen mit unterschiedlichen Frequenzen verschiedene Töne steuern. Während des Experiments steuern wir den Code so, dass der Summer Töne erzeugt, beginnend mit einem „tick, tick“-Ton, dann den passiven Summer „do re mi fa so la si do“ spielen lässt und schließlich bestimmte Lieder abspielt.

**(2)Parameter:**

Steuerinterface: digitaler Port

Betriebsspannung: DC 3,3-5V

**(3)Sie müssen vorbereiten:**

| Steuerplatine*1                                | USB-Kabel*1                                    | Passiver Summer*1                               | 3pin F-F 26AWG Kabel                             |
|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
| ![](../media/60cb7081df16f5d5169b0883a6fbf3df.png) | ![](../media/4f8d5af6dee9016b45d975adb2391d37.png) | ![](../media/0a27e277ef5e39bc76315d74d9bfdf46.png) | ![](../media/d57e6d40ae04a5be544cb6b4833a3e98.png) |

**(4).Schaltplan：**

![](../media/427e69c5b4d8000e5aa7afaca63b8e4f.png)

Die Pins G, V und S des passiven Summers sind mit G, V und D6 der Steuerplatine verbunden.

| Pin-Verbindungstabelle  |                      |
|------------------------|----------------------|
| Pin des **Summers**    | Pin der Steuerplatine |
| G                      | G                    |
| V                      | V                    |
| S                      | D6                   |

![](../media/6ddc10c4079503d3636ea2588055c854.png)

![](../media/203ba6ad35615867f8d743ac0be4a2df.png)

![](../media/05e05166eac9d5ec81fe28bc637110d3.png)