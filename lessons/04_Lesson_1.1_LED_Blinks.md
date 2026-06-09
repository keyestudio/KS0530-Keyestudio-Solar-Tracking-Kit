## Les 1.1: LED Knippert

**(1).Beschrijving：**

![](../media/90f495d6deb8516c95dea36fb1efa019.jpeg)![](../media/2aeeeb61ad2a3110303b3108f4ba31e1.png)

LED, de afkorting van lichtgevende diodes, bestaat uit Ga, As, P, N chemische verbindingen, enzovoort. De LED kan in verschillende kleuren knipperen door de vertragingstijd in de testcode te wijzigen. Bij bediening, wanneer GND en VCC zijn ingeschakeld, zal de LED aan zijn als het S-eind op een hoog niveau staat; anders zal deze uitgaan.

![](../media/628e402ae3fc455a2812705b17d7c30d.png)
**(2).Parameters：**

Bedieningsinterface: digitale poort

Werkspanning: DC 3.3-5V

Pinafstand: 2.54mm

LED weergavekleur: geel

**(3).Je moet voorbereiden:**

| Besturingsbord*1                                | USB-kabel*1                                    | Geel LED-module*1                            | 3pin F-F 26AWG Draad                             |
|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
| ![](../media/60cb7081df16f5d5169b0883a6fbf3df.png) | ![](../media/4f8d5af6dee9016b45d975adb2391d37.png) | ![](../media/628e402ae3fc455a2812705b17d7c30d.png) | ![](../media/d57e6d40ae04a5be544cb6b4833a3e98.png) |

**(4).Aansluitschema van de led-module：**

De pin -, + en S van de LED-module zijn verbonden met de pin G, 5V en D3-poort van het besturingsbord.

![](../media/045af155ff7b448adf0e819200ccef57.png)

![](../media/a883125f029dffe6ce7c7d79645aa16d.png)

![](../media/188b0bea1512ccc6a9b3e20ff8a9265d.png)

**(5).Testresultaten:** LED knippert met een interval van 1s

![](../media/351380ab56f691b54869160828bc56d0.png)

**(6).Code-uitleg:**

pinMode(LED，OUTPUT) - Deze functie kan aangeven dat de pin INPUT of OUTPUT is

digitalWrite(LED，HIGH) - Wanneer de pin OUTPUT is, kunnen we deze instellen op HIGH (uitgang 5V) of LOW (uitgang 0V)