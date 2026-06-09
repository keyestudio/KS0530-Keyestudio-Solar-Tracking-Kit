## Les 3.1: Lees het digitale signaal van de knopmodule

**(1)Beschrijving**

In dit project willen we de drukknopmodule gebruiken om de LED te bedienen.

**(2)Parameters:**

Werkspanning：DC 3.3-5V

Besturingssignaal：digitaal signaal

Afmeting：34mm

Gewicht：3.8g

**(3)Je moet voorbereiden:**

| Besturingsbord*1                                | USB-kabel*1                                    | Gele LED-module*1                            | 3pin F-F 26AWG draad*2                          | Drukknopmodule*1                           |
|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
| ![](../media/60cb7081df16f5d5169b0883a6fbf3df.png) | ![](../media/4f8d5af6dee9016b45d975adb2391d37.png) | ![](../media/628e402ae3fc455a2812705b17d7c30d.png) | ![](../media/d57e6d40ae04a5be544cb6b4833a3e98.png) | ![](../media/6ba7e34f89af660ac90bb2552907ef3f.png) |

**(4)Aansluitschema**

| Pin Aansluitingstabel  |                      |
|------------------------|----------------------|
| Pin van de **Knop**    | Pin van het Besturingsbord |
| G                      | G(GND)               |
| V                      | V(5V)                |
| S                      | D2                   |

| Pin Aansluitingstabel  |                      |
|------------------------|----------------------|
| Pin van de **LED**     | Pin van het Besturingsbord |
| G                      | G(GND)               |
| V                      | V(5V)                |
| S                      | D3                   |

![](../media/024ba0bbd683bf28f7783c8645f488be.png)

![](../media/32bb1f78caa01e562a769a0afe64da74.png)

![](../media/cb4d53c7c2057f85eb4255c453e31001.png)

![](../media/9688c560b185edabcf17838af3353b36.png)

**(5)Code-uitleg:**

Serial.begin(9600) - initialiseert de seriële communicatie en stelt de baudrate in op 9600

pinMode(pin, INPUT) - gebruik de functie pinMode() om Arduino te vertellen of het een uitgangspin of een ingangspin is

digitalRead(pin) - leest het digitale niveau van pinnen, is HOOG of LAAG