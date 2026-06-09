## Les 6: Fotosensitieve Sensor

**(1)Beschrijving**

Er zijn vier fotoresistor sensormodules in deze kit, de omgevingslichtsensoren, met een fotoresistor als hoofdbestanddeel.

De weerstand van een fotoresistor varieert met de lichtintensiteit. Wanneer er licht is, ligt de weerstand tussen 5-10KΩ; terwijl bij duisternis de weerstand slechts 0.2MΩ is. Op basis van deze eigenschap kan een circuit worden gebouwd om de verandering in weerstand om te zetten in veranderingen in spanning.

Bovendien is de sensor voorzien van een anti-omgekeerde aansluiting met een pitch van 2,54 mm om het bedraden te vergemakkelijken. Hij is ook compatibel met veel soorten microcontrollers, zoals de Arduino microcontroller serie.

Hier passen we deze sensor toe met de Arduino microcontroller. Het S (signaal) uiteinde van de sensor moet worden aangesloten op de analoge pin van Arduino om de variatie in analoge waarde te detecteren, die op de seriële monitor wordt weergegeven. Let ook op dat er twee positioneringsgaten met een diameter van 4,9 mm in de sensor zijn ingebouwd om deze te bevestigen.

**(2)Parameters:**

Werkspanning：3,3V-5V（DC）

Interface：3PIN

Uitgangssignaal：analoog signaal

Gewicht：2,3g

![](../media/537af5b84f09fe71a4e1f6cbeabdfc81.png)

**(3)Benodigdheden:**

| Besturingsbord*1                                | USB-kabel*1                                    | Geel LED-module*1                            | 3pin DuPont-draad*2                             | Drukknopmodule*4                           |
|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
| ![](../media/60cb7081df16f5d5169b0883a6fbf3df.png) | ![](../media/4f8d5af6dee9016b45d975adb2391d37.png) | ![](../media/628e402ae3fc455a2812705b17d7c30d.png) | ![](../media/d57e6d40ae04a5be544cb6b4833a3e98.png) | ![](../media/537af5b84f09fe71a4e1f6cbeabdfc81.png) |

**(4).Aansluitschema:**

| Pin Aansluitingstabel     |                      |
|--------------------------|----------------------|
| Pin van **Fotoresistor** | Pin van Besturingsbord |
| G                        | G(GND)               |
| V                        | V(5V)                |
| S                        | A0                   |

| Pin Aansluitingstabel |                      |
|----------------------|----------------------|
| Pin van de **LED**   | Pin van Besturingsbord |
| G                    | G(GND)               |
| V                    | V(5V)                |
| S                    | D3                   |



![](../media/9ad0c25387b65d7eb5ca40d933b2f84c.png)

![](../media/38ea947110ec2dd6b3ee27abd895f258.png)

![](../media/28f391156fb2aec29b24e8ce09246b4c.png)



![](../media/e08a2aa856074276ab58ab45e2652f17.png)![](../media/819aafadd69170aca8063e25a198f0ae.png)