## Les 8: BH1750 Digitale Lichtintensiteit Module

**(1)Beschrijving:**

![](../media/53ab41d84e93814e57076a8cc25e1aa7.png)

Het belangrijkste onderdeel van deze sensor is de chip BH1750FVI, een geïntegreerde chip voor digitale lichtintensiteit.

Zoals te zien is op de onderstaande afbeelding, bestaat de BH1750 uit een fotodiode, een operationele versterker, een ADC acquisitie, een kristaloscillator, enz. De fotodiode zet het binnenkomende optische signaal om in een elektrisch signaal via het fotovoltaïsche effect. Nadat het versterkt is door de operationele versterker, wordt de spanning verzameld door de ADC en vervolgens omgezet in een 16-bits binair getal via de logische schakeling en opgeslagen in het interne register (Opmerking: hoe sterker het licht, hoe groter de fotostroom en hoe groter de spanning, dus de lichtintensiteit kan worden beoordeeld aan de hand van de waarde van de spanning.

Het moet echter worden opgemerkt dat de spanning en de lichtintensiteit een één-op-één relatie hebben, maar niet evenredig zijn. Daarom wordt deze chip lineair verwerkt en wordt de geïntegreerde IC direct gebruikt in plaats van fotodiodes). BH1750 leidt de kloklijn en datalijn uit. De microcontroller kan communiceren met de BH1750-module via het I2C-protocol. Je kunt de werkmodus van de BH1750 kiezen, of je kunt de verlichtingsgegevens van het BH1750-register uitlezen.

**(2)Parameters:**

I2C digitale interface, ondersteunt een maximale snelheid van 400Kbps

De output is verlichtingssterkte

Meetbereik is 1~65535 lux, de minimale resolutie is 1 lux

Laag stroomverbruik (Power down) functie

Onderdrukt interferentie van lichtveranderingen veroorzaakt door 50/60Hz netfrequentie

Ondersteunt twee I2C-adressen, te selecteren via de ADDR-pin

Kleine meetafwijking (maximale nauwkeurigheidsfout +/-20%)

GND voedingsaarde

SDA I2C-bus datapin

SCL I2C-bus klokpin

VCC voedingsspanning 3-5V

**(3)Je moet voorbereiden:**

| Besturingsbord*1                                | USB-kabel*1                                    | BH1750FVI Sensor*1                             | 350mm 4pin F-F Draad                             |
|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
| ![](../media/60cb7081df16f5d5169b0883a6fbf3df.png) | ![](../media/4f8d5af6dee9016b45d975adb2391d37.png) | ![](../media/53ab41d84e93814e57076a8cc25e1aa7.png) | ![](../media/626e88c46a8a1385bd0558610a17ca9f.png) |

**(4)Aansluitschema:**

![](../media/d7fccd89d5bed291ccce34babfbf5c91.png)

![](../media/e3b43d6080bdd3dcf111f5d594529d3a.png)![](../media/f232b12906eb5a6819c933c79183fc58.png)



![](../media/92857c7b8c368330acb6630e39bd462c.png)

(**Opmerking**: omdat de I2C-bus meerdere apparaten met verschillende adressen kan hebben, is er geen conflict wanneer de digitale lichtintensiteitsmodule samen met de I2C LCD1602-module wordt gebruikt, omdat ze verschillende adressen hebben.)