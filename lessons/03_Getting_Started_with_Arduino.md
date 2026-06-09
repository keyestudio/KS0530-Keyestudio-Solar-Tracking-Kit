# 2.Einstieg in Arduino

## **2.1 Was ist Arduino?**

Arduino ist eine Open-Source-Elektronikplattform, die auf einfach zu verwendender Hardware und Software basiert. Arduino-Boards können Eingaben lesen – Licht auf einem Sensor, einen Finger auf einem Knopf oder eine Twitter-Nachricht – und diese in eine Ausgabe umwandeln – einen Motor aktivieren, eine LED einschalten, etwas online veröffentlichen. Sie können Ihrem Board sagen, was es tun soll, indem Sie den Programmcode in der IDE schreiben und die Anweisungen an den Mikrocontroller auf dem Board senden. Dazu verwenden Sie die Arduino-Programmiersprache (basierend auf Wiring) und die Arduino-Software (IDE), die auf Processing basiert.

## **2.2 Installation der Arduino IDE für Windows**

Besuchen Sie <https://www.arduino.cc/en/software>, um die neueste Version der Arduino IDE für das Betriebssystem Ihres Computers herunterzuladen. Es gibt Versionen für Windows, Mac und Linux.

**Die Arduino IDE 2**

Die Arduino IDE 2 ist ein großer Schritt gegenüber ihrem robusten Vorgänger, der Arduino IDE 1.x, und bietet eine überarbeitete Benutzeroberfläche, einen verbesserten Board- & Bibliotheksmanager, Debugger, Autovervollständigungsfunktion und vieles mehr.

Hier zeigen wir, wie man die Arduino IDE 2.2.1 auf Ihrem Windows installiert.

Sie können zwischen dem Installer (.exe) und den Zip-Paketen wählen. Wir empfehlen die erste Option, die direkt alles installiert, was Sie benötigen, um die Arduino Software (IDE) zu verwenden, einschließlich der Treiber. Mit dem Zip-Paket müssen Sie die Treiber manuell installieren. Die Zip-Datei ist auch nützlich, wenn Sie eine [portable Installation](https://arduino.cc/en/Guide/PortableIDE) erstellen möchten.

![](../media/06c450364fe07776520f5b245a6ed165.png)

![](../media/38c6badd454d9c623543a457d32f832f.png)

![](../media/bb179a14b42ee1e130df8c8da575c509.png)

![](../media/ecb1b309ea3db40704e3dca0d341e031.png)

![](../media/c26346f5750f926978e7fefffa5216d4.png)

![](../media/f3c51f678212efc301ef976a892cf9c6.png)

![](../media/56d37d47b71547d2c310c8e7cb440abb.png)

![](../media/539cb1702833b283cda61cc2bb1a1dc2.png)

![](../media/7a1e5c40aec7d793ca7975966ddf3cc4.png)

Klicken Sie auf Fertigstellen und starten Sie die Arduino IDE

![](../media/5038e9b20e71f7b401a691c43baf599a.png)

Die Firewall wird fragen, ob Sie den Zugriff erlauben möchten, klicken Sie einfach auf **Zugriff erlauben**.

![](../media/0194e55376dc05f8f403d1b547150003.png)

Arduino IDE 2.0

![Arduino IDE](../media/a438335b489d8e6390131b6f44eb2019.jpeg)

**Verify / Upload** – kompiliert und lädt Ihren Code auf Ihr Arduino-Board hoch.

**Select Board & Port** – erkannte Arduino-Boards werden hier automatisch zusammen mit der Portnummer angezeigt.

**Sketchbook** – hier finden Sie alle Ihre lokal auf dem Computer gespeicherten Sketche. Zusätzlich können Sie mit der Arduino Cloud synchronisieren und Ihre Sketche auch aus der Online-Umgebung abrufen.

**Boards Manager** – durchsuchen Sie Arduino- und Drittanbieter-Pakete, die installiert werden können. Zum Beispiel erfordert die Verwendung eines MKR WiFi 1010 Boards die Installation des Arduino SAMD Boards-Pakets.

**Library Manager** – durchsuchen Sie Tausende von Arduino-Bibliotheken, erstellt von Arduino und seiner Community.

**Debugger** – testen und debuggen Sie Programme in Echtzeit.

**Search** – suchen Sie nach Schlüsselwörtern in Ihrem Code.

**Open Serial Monitor** – öffnet das Serial Monitor Tool als neuen Tab in der Konsole.

Wenn Sie mehr über die Arduino IDE erfahren möchten, lesen Sie bitte dieses Dokument: [Getting Started with Arduino IDE 2](https://docs.arduino.cc/software/ide-v2/tutorials/getting-started-ide-v2)

## 2.3 Vorstellung des Keyestudio UNO Boards

Der Kernprozessor dieses Boards ist der ATMEGA328P-AU, und der ATMEGA16U2 wird als UART-zu-USB-Konvertierungschip verwendet.

Es verfügt über 14 digitale Ein-/Ausgangspins (von denen 6 als PWM-Ausgänge verwendet werden können), 6 analoge Eingänge, einen 16 MHz Quarzoszillator, eine USB-Verbindung, einen Stromanschluss, 1 ICSP-Header und einen Reset-Knopf.

Alles, was Sie tun müssen, ist, es über ein USB-Kabel mit einem Computer zu verbinden und mit einer externen Stromversorgung von DC 7-12V zu versorgen.

![](../media/8bb76386a2505a9dd0b18a8c78745a64.png)

| **Mikrocontroller**         | **ATMEGA328P-AU**                                        |
|-----------------------------|----------------------------------------------------------|
| Betriebsspannung            | 5V                                                       |
| Eingangsspannung (empfohlen)| DC 7-12V                                                 |
| Digitale I/O-Pins           | 14 (D0-D13)                                              |
| PWM Digitale I/O-Pins       | 6 (D3，D5，D6，D9，D10，D11)                             |
| Analoge Eingangspins        | 6 (A0-A5)                                                |
| Flash-Speicher              | 32 KB (ATMEGA328P-AU), davon 0,5 KB vom Bootloader genutzt |
| SRAM                        | 2 KB (ATMEGA328P-AU)                                     |
| EEPROM                      | 1 KB (ATMEGA328P-AU)                                     |
| Taktfrequenz                | 16 MHz                                                   |

![](../media/fad6c7bef8e618006f403af9a068476f.png)

| **Schnittstellennummer** | **Beschreibung**                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
|-------------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 1                       | **ICSP (In-Circuit Serial Programming) Header ICSP**  Es ist der AVR, ein Arduino Mikroprogramm-Header bestehend aus MOSI, MISO, SCK, RESET, VCC und GND. Wird oft als SPI (Serial Peripheral Interface) bezeichnet und kann als „Erweiterung“ der Ausgänge betrachtet werden. Tatsächlich sind Slave-Ausgabegeräte unter dem SPI-Bus-Host angeschlossen. Beim Anschluss an den PC wird die Firmware auf den ATMEGA328P-AU programmiert.                                                                       |
| 2                       | **Serielle Kommunikationspins**  Anschluss für serielle Kommunikation. 4 Pins (GND, VCC (3,3V oder 5V, gesteuert durch Schiebeschalter), RX, TX)                                                                                                                                                                                                                                                                                                                        |
| 3                       | **GND**  Masseanschlüsse                                                                                                                                                                                                                                                                                                                                                                                                                                              |
| 4                       | **V Pin (VCC)**  Versorgung externer Sensoren und Module. Die Spannung von 3,3V oder 5V wird über einen Schiebeschalter ausgewählt.                                                                                                                                                                                                                                                                                                                                   |
| 5                       | **Digitale I/O**  Es gibt 14 digitale Ein-/Ausgangspins, beschriftet von D0 bis D13 (von denen 6 als PWM-Ausgänge verwendet werden können). Diese Pins können als digitale Eingänge konfiguriert werden, um den Logikwert (0 oder 1) zu lesen, oder als digitale Ausgänge, um verschiedene Module wie LED, Relais usw. anzusteuern. Die Pins D3, D5, D6, D9, D10 und D11 können PWM erzeugen. Für digitale Ports können Sie über Buchsenleisten oder über Pinleisten (beschriftet mit S) mit 2,54 mm Raster anschließen. |
| 6                       | **AREF**  Für analoge Referenz. Wird manchmal verwendet, um eine externe Referenzspannung (0-5V) als obere Grenze der analogen Eingänge einzustellen.                                                                                                                                                                                                                                                                                                                 |
| 7                       | **SDA**  IIC-Kommunikationspin                                                                                                                                                                                                                                                                                                                                                                                                                                        |
| 8                       | **SCL**  IIC-Kommunikationspin                                                                                                                                                                                                                                                                                                                                                                                                                                        |
| 9                       | **ICSP (In-Circuit Serial Programming) Header**  ICSP ist ein AVR, ein Arduino Mikroprogramm-Header bestehend aus MOSI, MISO, SCK, RESET, VCC und GND. Verbunden mit ATMEGA 16U2-MU. Beim Anschluss an den PC wird die Firmware auf den ATMEGA 16U2-MU programmiert.                                                                                                                                                                                                      |
| 10                      | **Mikrocontroller** Jedes Steuerboard hat seinen eigenen Mikrocontroller. Man kann ihn als das Gehirn des Boards betrachten. Mikrocontroller stammen üblicherweise von ATMEL. Bevor Sie ein neues Programm auf der Arduino IDE laden, müssen Sie wissen, welcher IC auf Ihrem Board ist. Diese Information finden Sie auf der Oberseite des ICs. Der auf diesem Board verwendete Mikrocontroller ist der ATMEGA328P-AU.                                                                 |
| 11                      | **D13 LED**  Es gibt eine eingebaute LED, die von digitalem Pin 13 gesteuert wird. Wenn der Pin HIGH ist, leuchtet die LED, wenn der Pin LOW ist, ist sie aus.                                                                                                                                                                                                                                                                                                         |
| 12                      | **TX LED**  An Bord finden Sie die Beschriftung: TX (Transmit). Wenn das Board über die serielle Schnittstelle kommuniziert und eine Nachricht sendet, blinkt die TX-LED.                                                                                                                                                                                                                                                                                              |
| 13                      | **RX LED**  An Bord finden Sie die Beschriftung: RX (Receive). Wenn das Board über die serielle Schnittstelle kommuniziert und eine Nachricht empfängt, blinkt die RX-LED.                                                                                                                                                                                                                                                                                             |
| 14                      | **Power LED**  LED an bedeutet, dass Ihr Schaltkreis korrekt mit Strom versorgt wird. Andernfalls ist die LED aus.                                                                                                                                                                                                                                                                                                                                                     |
| 15                      | **USB-Anschluss**  Sie können das Board über USB mit Strom versorgen oder das Programm über den USB-Port auf das Board hochladen. Verbinden Sie das Board mit einem PC über ein USB-Kabel am USB-Port.                                                                                                                                                                                                                                                               |
| 16                      | **ATMEGA 16U2-MU**  USB-zu-Seriell-Chip, kann das USB-Signal in ein serielles Signal umwandeln.                                                                                                                                                                                                                                                                                                                                                                        |
| 17                      | **Netzschalter**  Sie können den Schalter schieben, um die Spannung des Pins V (VCC) auf 3,3V oder 5V zu steuern.                                                                                                                                                                                                                                                                                                                                                      |
| 18                      | **Spannungsregler**  Steuert die Spannung, die dem Board zugeführt wird, und stabilisiert die Gleichspannung, die vom Prozessor und anderen Komponenten verwendet wird. Wandelt eine externe Eingangsspannung von DC 7-12V in DC 5V um und versorgt dann den Prozessor und andere Komponenten mit DC 5V. Die Ausgangsstromstärke beträgt 2A.                                                                                                                             |
| 19                      | **DC-Stromanschluss**  Das Board kann über den DC-Stromanschluss mit einer externen Spannung von DC 7-12V versorgt werden.                                                                                                                                                                                                                                                                                                                                             |
| 20                      | **IOREF**  Wird verwendet, um die Betriebsspannung des Mikrocontrollers zu konfigurieren. Wird selten verwendet.                                                                                                                                                                                                                                                                                                                                                       |
| 21                      | **RESET Header**  Anschluss für einen externen Knopf zum Zurücksetzen des Boards. Die Funktion ist dieselbe wie die des Reset-Knopfs.                                                                                                                                                                                                                                                                                                                                  |
| 22                      | **Pin 3.3V** Ausgang Bietet eine 3,3V Spannungsversorgung                                                                                                                                                                                                                                                                                                                                                                                                             |
| 23                      | **Pin 5V** Ausgang Bietet eine 5V Spannungsversorgung                                                                                                                                                                                                                                                                                                                                                                                                                  |
| 24                      | **Vin**  Sie können eine externe Spannung von DC 7-12V über diesen Pin an das Board anlegen.                                                                                                                                                                                                                                                                                                                                                                           |
| 25                      | **Analoge Pins**  Das Board hat 6 analoge Eingänge, beschriftet von A0 bis A5. Können auch als digitale Pins verwendet werden: A0=D14, A1=D15, A2=D16, A3=D17, A4=D18, A5=D19. Für analoge Ports können Sie über Buchsenleisten oder über Pinleisten (beschriftet mit S) mit 2,54 mm Raster anschließen.                                                                                                                                                                  |
| 26                      | **IIC-Kommunikationspin**  Anschluss für die IIC-Kommunikation. 4 Pins (GND, VCC (3,3V oder 5V, gesteuert durch Schiebeschalter), SDA, SCL)                                                                                                                                                                                                                                                                                                                            |
| 27                      | **RESET-Knopf**  Sie können Ihr Board zurücksetzen, um das Programm vom Anfangszustand zu starten.                                                                                                                                                                                                                                                                                                                                                                     |

## 2.4 Auswahl von Board und Port in der Arduino IDE

![](../media/9719a62c6ebf40346819de383b90d86c.png)

Bevor Sie Code auf das angeschlossene Steuerboard hochladen, müssen Sie in der Arduino IDE Board und Port auswählen.

Es werden zwei Methoden vorgestellt:

1. Verwendung des Board- und Port-Auswahlmenüs im Tool-Dropdown

2. Verwendung des Board-Selectors

![](../media/9b6c571bb9efb9776d7f13e97356520f.jpeg)

![](../media/27fdb72344a4ae4a32d8de7bfbfe18d4.png)

![](../media/7f90bccae208b43956dbb5ea18e7b96d.png)

## 2.5 Bibliotheken zur Arduino IDE hinzufügen

**Warum Bibliotheken verwenden?**

Bibliotheken sind unglaublich nützlich, wenn man ein Projekt jeglicher Art erstellt. Sie machen die Entwicklung viel einfacher, und es gibt fast unendlich viele davon. Sie werden verwendet, um mit vielen verschiedenen Sensoren, RTCs, Wi-Fi-Modulen, RGB-Matrizen und natürlich mit anderen Komponenten auf Ihrem Board zu interagieren.

**Eine Bibliothek im Sketch einbinden**

![](../media/04646b12f83ae55602cd7e186850034c.png)

![](../media/79939cc2b0037a52ce8b7571cb448699.png)![](../media/067e9b7efcc117f4dd702c49f66f1735.png)

**Zwei Wege, Bibliotheken zur Arduino IDE hinzuzufügen**

1.**Methode Eins: Importieren einer .zip-Bibliothek**

![](../media/68b46d43a6912da4b010ae4c37cc496e.png)

![](../media/3eb07bb12bf9ada902326970dc7a455a.png)

![](../media/0713a4d4dc9e43f97ffb5175bc094c96.jpeg)

2.**Methode Zwei: Manuelle Installation**

Der Standardordner, in dem Arduino-Sketche gespeichert werden, heißt Sketchbook. Das Sketchbook ist einfach ein Ordner auf Ihrem Computer wie jeder andere. Es dient als praktisches Repository für Sketche und ist auch der Ort, an dem Zusatz-Bibliotheken gespeichert werden.

**Bibliotheken-Ordner**

Der Ordner **sketchbook\\libraries** ist der Standardort, an dem Bibliotheken von der Arduino IDE installiert werden.

Wenn Sie eine Bibliothek manuell hinzufügen möchten, darf die Bibliotheksdatei nicht als Zip-Datei hinzugefügt werden. Sie müssen sie entpacken und selbst in den **libraries**-Ordner Ihres Sketchbooks legen.

![](../media/54ed3cb6b4303dfb851d49ec6c998256.jpeg)

![](../media/4dde6298b58678953a4f0e8cb09229cc.jpeg)

![](../media/28fdb140904c915c2b37ba02923a68f6.png)

Deinstallation einer Arduino-Bibliothek

Das Deinstallieren einer Arduino-Bibliothek ist einfacher als die Installation. Finden Sie den Sketchbook-Ordner auf Ihrem Computer (wie im Kapitel „Manuelle Installation einer Bibliothek“ beschrieben). Gehen Sie zu diesem Ort und öffnen Sie den Ordner „libraries“. Wählen Sie den Ordner der Bibliothek aus, die Sie löschen möchten, und löschen Sie ihn einfach. Beim nächsten Öffnen der Arduino IDE wird die gelöschte Bibliothek nicht mehr im Menü Sketch > Include Library angezeigt.

![](../media/7a7fc5fc95be160fe7f9aa50be140f6d.png)

Bibliotheken nehmen nicht viel Platz ein und meistens gibt es keinen Grund, sie zu entfernen. Wenn Sie sie jedoch nicht mehr verwenden möchten und die Liste aufräumen wollen, können Sie sie bedenkenlos löschen. Sie können jede Arduino-Bibliothek jederzeit wieder installieren, wenn Sie sie in Zukunft benötigen.
