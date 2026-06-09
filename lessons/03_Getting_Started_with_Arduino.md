# 2.Aan de slag met Arduino

## **2.1 Wat is Arduino?**

Arduino is een open-source elektronica platform gebaseerd op gebruiksvriendelijke hardware en software. Arduino-borden kunnen ingangen lezen - licht op een sensor, een vinger op een knop, of een Twitter-bericht - en dit omzetten in een uitgang - het activeren van een motor, het aanzetten van een LED, iets online publiceren. Je kunt je bord vertellen wat het moet doen door de programmacode te schrijven in de IDE en de instructies naar de microcontroller op het bord te sturen. Hiervoor gebruik je de Arduino programmeertaal (gebaseerd op Wiring) en de Arduino Software (IDE), gebaseerd op Processing.

## **2.2 Installeren van de Arduino IDE voor Windows**

Bezoek <https://www.arduino.cc/en/software> om de nieuwste versie van de Arduino IDE te downloaden voor het besturingssysteem van je computer. Er zijn versies voor Windows, Mac en Linux systemen.

**De Arduino IDE 2**

De Arduino IDE 2 is een grote stap ten opzichte van zijn robuuste voorganger, Arduino IDE 1.x, en komt met een vernieuwde gebruikersinterface, verbeterde board- & bibliotheekbeheerder, debugger, autocomplete-functie en nog veel meer.

Hier laten we zien hoe je de Arduino IDE 2.2.1 downloadt en installeert op je Windows.

Je kunt kiezen tussen de Installer (.exe) en de Zip-pakketten. We raden aan de eerste te gebruiken die direct alles installeert wat je nodig hebt om de Arduino Software (IDE) te gebruiken, inclusief de drivers. Met het Zip-pakket moet je de drivers handmatig installeren. Het Zip-bestand is ook handig als je een [portable installatie](https://arduino.cc/en/Guide/PortableIDE) wilt maken.

![](../media/06c450364fe07776520f5b245a6ed165.png)

![](../media/38c6badd454d9c623543a457d32f832f.png)

![](../media/bb179a14b42ee1e130df8c8da575c509.png)

![](../media/ecb1b309ea3db40704e3dca0d341e031.png)

![](../media/c26346f5750f926978e7fefffa5216d4.png)

![](../media/f3c51f678212efc301ef976a892cf9c6.png)

![](../media/56d37d47b71547d2c310c8e7cb440abb.png)

![](../media/539cb1702833b283cda61cc2bb1a1dc2.png)

![](../media/7a1e5c40aec7d793ca7975966ddf3cc4.png)

Klik op Voltooien en start Arduino IDE

![](../media/5038e9b20e71f7b401a691c43baf599a.png)

De firewall zal vragen of we toegang willen toestaan, klik gewoon op **Toegang toestaan**.

![](../media/0194e55376dc05f8f403d1b547150003.png)

Arduino IDE 2.0

![Arduino IDE](../media/a438335b489d8e6390131b6f44eb2019.jpeg)

**Verify / Upload** - compileer en upload je code naar je Arduino Board.

**Select Board & Port** - gedetecteerde Arduino-borden verschijnen hier automatisch, samen met het poortnummer.

**Sketchbook** - hier vind je al je lokaal opgeslagen sketches op je computer. Daarnaast kun je synchroniseren met de Arduino Cloud en ook je sketches ophalen uit de online omgeving.

**Boards Manager** - blader door Arduino- en derde partij pakketten die geïnstalleerd kunnen worden. Bijvoorbeeld, voor het gebruik van een MKR WiFi 1010 board moet het Arduino SAMD Boards pakket geïnstalleerd zijn.

**Library Manager** - blader door duizenden Arduino bibliotheken, gemaakt door Arduino en de community.

**Debugger** - test en debug programma's in realtime.

**Search** - zoek naar trefwoorden in je code.

**Open Serial Monitor** - opent het Serial Monitor gereedschap als een nieuw tabblad in de console.

Als je meer wilt leren over Arduino IDE, raadpleeg dan dit document: [Getting Started with Arduino IDE 2](https://docs.arduino.cc/software/ide-v2/tutorials/getting-started-ide-v2)

## 2.3 Introductie van het Keyestudio UNO Board

De kernprocessor van dit bord is ATMEGA328P-AU en ATMEGA16U2 wordt gebruikt als een UART-naar-USB conversiechip.

Het heeft 14 digitale in-/uitgangspinnen (waarvan 6 kunnen worden gebruikt als PWM-uitgangen), 6 analoge ingangen, een 16 MHz kristaloscillator, een USB-verbinding, een voedingsaansluiting, 1 ICSP-header en een resetknop.

Alles wat je hoeft te doen is het verbinden met een computer via een USB-kabel en het van stroom voorzien met een externe voeding van DC 7-12V.

![](../media/8bb76386a2505a9dd0b18a8c78745a64.png)

| **Microcontroller**         | **ATMEGA328P-AU**                                        |
|-----------------------------|----------------------------------------------------------|
| Bedrijfsspanning            | 5V                                                       |
| Ingangsspanning (aanbevolen) | DC 7-12V                                                 |
| Digitale I/O pinnen         | 14 (D0-D13)                                              |
| PWM Digitale I/O pinnen     | 6 (D3，D5，D6，D9，D10，D11)                             |
| Analoge ingangen            | 6 (A0-A5)                                                |
| Flashgeheugen               | 32 KB (ATMEGA328P-AU) waarvan 0.5 KB gebruikt door bootloader |
| SRAM                        | 2 KB (ATMEGA328P-AU)                                     |
| EEPROM                      | 1 KB (ATMEGA328P-AU)                                     |
| Kloksnelheid               | 16 MHz                                                   |

![](../media/fad6c7bef8e618006f403af9a068476f.png)

| **Interface nummer** | **Introductie**                                                                                                                                                                                                                                                                                                                                                                                                                                                       |
|----------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 1                    | **ICSP (In-Circuit Serial Programming) Header ICSP**  Het is de AVR, een Arduino micro-programmeerheader bestaande uit MOSI, MISO, SCK, RESET, VCC en GND. Het wordt vaak SPI (serial peripheral interface) genoemd en kan worden gezien als een "uitbreiding" van de output. In feite slave de outputapparaten onder de SPI-bus host. Bij aansluiting op PC wordt de firmware geprogrammeerd naar ATMEGA328P-AU.                                                                       |
| 2                    | **Seriële Communicatie Pin**  Verbindt met seriële communicatie. 4 pinnen (GND, VCC (3.3V of 5V geregeld door schuifschakelaar), RX, TX)                                                                                                                                                                                                                                                                                                                             |
| 3                    | **GND**  Aarde pinnen                                                                                                                                                                                                                                                                                                                                                                                                                                                |
| 4                    | **V Pin (VCC)**  Voedt externe sensoren en modules. Kies de spanning van 3.3V of 5V via een schuifschakelaar.                                                                                                                                                                                                                                                                                                                                                       |
| 5                    | **Digitale I/O**  Het heeft 14 digitale in-/uitgangspinnen, gelabeld D0 tot D13 (waarvan 6 kunnen worden gebruikt als PWM-uitgangen). Deze pinnen kunnen worden geconfigureerd als digitale ingangspin om de logische waarde (0 of 1) te lezen. Of gebruikt worden als digitale uitgangspin om verschillende modules zoals LED, relais, etc. aan te sturen. De pinnen D3, D5, D6, D9, D10 en D11 kunnen PWM genereren. Voor digitale poorten kun je verbinden via vrouwelijke headers, of via pinheaders (gelabeld S) met 2.54mm pitch. |
| 6                    | **AREF**  Voor analoge referentie. Wordt soms gebruikt om een externe referentiespanning (0-5V) in te stellen als bovengrens van analoge ingangen.                                                                                                                                                                                                                                                                                                                 |
| 7                    | **SDA**  IIC communicatie pin                                                                                                                                                                                                                                                                                                                                                                                                                                      |
| 8                    | **SCL**  IIC communicatie pin                                                                                                                                                                                                                                                                                                                                                                                                                                      |
| 9                    | **ICSP (In-Circuit Serial Programming) Header**  ICSP is een AVR, een Arduino micro-programmeerheader bestaande uit MOSI, MISO, SCK, RESET, VCC en GND. Verbonden met ATMEGA 16U2-MU. Bij aansluiting op PC wordt de firmware geprogrammeerd naar ATMEGA 16U2-MU.                                                                                                                                                                                                    |
| 10                   | **Microcontroller** Elk besturingsbord heeft zijn eigen microcontroller. Je kunt het zien als het brein van je bord. Microcontrollers zijn meestal van ATMEL. Voordat je een nieuw programma laadt in de Arduino IDE, moet je weten welke IC op je bord zit. Deze informatie is te vinden op de bovenkant van de IC. De microcontroller die op dit bord wordt gebruikt is ATMEGA328P-AU.                                                                                                     |
| 11                   | **D13 LED**  Er is een ingebouwde LED die wordt aangestuurd door digitale pin 13. Wanneer de pin HIGH is, gaat de LED aan, wanneer de pin LOW is, gaat deze uit.                                                                                                                                                                                                                                                                                                    |
| 12                   | **TX LED**  Op het bord vind je het label: TX (transmit) Wanneer het bord via de seriële poort communiceert en een bericht verzendt, knippert de TX-led.                                                                                                                                                                                                                                                                                                          |
| 13                   | **RX LED**  Op het bord vind je het label: RX (receive) Wanneer het bord via de seriële poort communiceert en een bericht ontvangt, knippert de RX-led.                                                                                                                                                                                                                                                                                                            |
| 14                   | **Power LED**  LED aan betekent dat je schakeling correct van stroom wordt voorzien. Anders is de LED uit.                                                                                                                                                                                                                                                                                                                                                          |
| 15                   | **USB Aansluiting**  Je kunt het bord van stroom voorzien via de USB-verbinding. Of het programma uploaden naar het bord via de USB-poort. Verbind het bord met de PC met een USB-kabel via de USB-poort.                                                                                                                                                                                                                                                        |
| 16                   | **ATMEGA 16U2-MU**  USB naar seriële chip, kan het USB-signaal omzetten in een seriële poortsignaal.                                                                                                                                                                                                                                                                                                                                                                |
| 17                   | **Voedingsschakelaar**  Je kunt de schakelaar schuiven om de spanning van pin V (VCC), 3.3V of 5V te regelen.                                                                                                                                                                                                                                                                                                                                                       |
| 18                   | **Spanningsregelaar**  Om de spanning die aan het bord wordt geleverd te regelen en de DC-spanning te stabiliseren die door de processor en andere componenten wordt gebruikt. Zet een externe ingangsspanning DC7-12V om in DC 5V, en schakelt dan DC 5V naar de processor en andere componenten, uitgang DC 5V, stroomsterkte 2A.                                                                                                                                  |
| 19                   | **DC Voedingsaansluiting**  Het bord kan worden gevoed met een externe voeding DC7-12V via de DC-voedingsaansluiting.                                                                                                                                                                                                                                                                                                                                              |
| 20                   | **IOREF**  Wordt gebruikt om de bedrijfsspanning van de microcontroller te configureren. Wordt weinig gebruikt.                                                                                                                                                                                                                                                                                                                                                   |
| 21                   | **RESET Header**  Verbind een externe knop om het bord te resetten. De functie is hetzelfde als de resetknop.                                                                                                                                                                                                                                                                                                                                                      |
| 22                   | **Pin 3.3V** Uitgang Biedt 3.3V spanningsuitgang                                                                                                                                                                                                                                                                                                                                                                                                                   |
| 23                   | **Pin 5V**  Uitgang Biedt 5V spanningsuitgang                                                                                                                                                                                                                                                                                                                                                                                                                      |
| 24                   | **Vin**  Je kunt een externe spanningsingang DC7-12V via deze pin aan het bord leveren.                                                                                                                                                                                                                                                                                                                                                                             |
| 25                   | **Analoge pinnen**  Het bord heeft 6 analoge ingangen, gelabeld A0 tot A5. Kunnen ook gebruikt worden als digitale pinnen, A0=D14, A1=D15, A2=D16, A3=D17, A4=D18, A5=D19. Voor analoge poorten kun je verbinden via vrouwelijke headers, of via pinheaders (gelabeld S) met 2.54mm pitch.                                                                                                                                                                             |
| 26                   | **IIC Communicatie Pin**  Verbindt met de IIC-communicatie. 4 pinnen (GND, VCC (3.3V of 5V geregeld door schuifschakelaar), SDA, SCL)                                                                                                                                                                                                                                                                                                                               |
| 27                   | **RESET Knop**  Je kunt je bord resetten om het programma vanaf de beginstatus te starten.                                                                                                                                                                                                                                                                                                                                                                         |

## 2.4 Selecteer Board en Poort in Arduino IDE

![](../media/9719a62c6ebf40346819de383b90d86c.png)

Voordat je code uploadt naar het aangesloten besturingsbord, moeten we board en poort selecteren in Arduino IDE.

Twee methoden worden hieronder geïntroduceerd:

1. Gebruik maken van de Board en Port selector in de Tool dropdownlijst

2. Gebruik maken van de board selector

![](../media/9b6c571bb9efb9776d7f13e97356520f.jpeg)

![](../media/27fdb72344a4ae4a32d8de7bfbfe18d4.png)

![](../media/7f90bccae208b43956dbb5ea18e7b96d.png)

## 2.5 Bibliotheken toevoegen aan Arduino IDE

**Waarom bibliotheken gebruiken?**

Bibliotheken zijn ongelooflijk nuttig bij het maken van een project van welk type dan ook. Ze maken onze ontwikkelervaring veel soepeler, en er zijn er bijna oneindig veel. Ze worden gebruikt om te communiceren met veel verschillende sensoren, RTC's, Wi-Fi modules, RGB-matrices en natuurlijk met andere componenten op je bord.

**Een bibliotheek opnemen in de sketch**

![](../media/04646b12f83ae55602cd7e186850034c.png)

![](../media/79939cc2b0037a52ce8b7571cb448699.png)![](../media/067e9b7efcc117f4dd702c49f66f1735.png)

**Twee manieren om bibliotheken toe te voegen aan Arduino IDE**

1.**Methode één: Importeren van een .zip bibliotheek**

![](../media/68b46d43a6912da4b010ae4c37cc496e.png)

![](../media/3eb07bb12bf9ada902326970dc7a455a.png)

![](../media/0713a4d4dc9e43f97ffb5175bc094c96.jpeg)

2.**Methode twee: Handmatige installatie**

De standaardlocatie waar Arduino sketches die je schrijft worden opgeslagen heet het Sketchbook. Het Sketchbook is gewoon een map op je computer zoals elke andere. Het fungeert als een handige opslagplaats voor sketches en is ook waar extra codebibliotheken worden opgeslagen.

**Bibliotheekmap**

De **sketchbook\\libraries** map is de standaardlocatie waar bibliotheken vanuit de Arduino IDE worden geïnstalleerd.

Als je een bibliotheek handmatig wilt toevoegen, kan het bibliotheekbestand niet als zip-bestand worden toegevoegd, je moet het uitpakken en zelf in de **libraries** map van je sketchbook plaatsen.

![](../media/54ed3cb6b4303dfb851d49ec6c998256.jpeg)

![](../media/4dde6298b58678953a4f0e8cb09229cc.jpeg)

![](../media/28fdb140904c915c2b37ba02923a68f6.png)

Bibliotheek verwijderen

Het verwijderen van een Arduino bibliotheek is eenvoudiger dan het installeren ervan. Zoek de sketchbook map op je computer (zoals in het hoofdstuk “Handmatig installeren van een bibliotheek”). Ga naar die locatie en open de “libraries” map. Selecteer de map met de bibliotheek die je wilt verwijderen en verwijder deze simpelweg. De volgende keer dat je je Arduino IDE opent, zal de verwijderde bibliotheek niet meer zichtbaar zijn onder het menu Sketch > Include Library.

![](../media/7a7fc5fc95be160fe7f9aa50be140f6d.png)

Bibliotheken nemen niet veel ruimte in beslag en meestal is er geen reden om ze te verwijderen. Als je ze echter niet meer wilt gebruiken en de lijst wilt opruimen, kun je ze veilig verwijderen. Je kunt altijd een Arduino bibliotheek opnieuw installeren als je die in de toekomst weer nodig hebt.
