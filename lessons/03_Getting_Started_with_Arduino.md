# 2.Iniziare con Arduino

## **2.1 Cos'è Arduino?**

Arduino è una piattaforma elettronica open-source basata su hardware e software facili da usare. Le schede Arduino sono in grado di leggere input - luce su un sensore, un dito su un pulsante, o un messaggio su Twitter - e trasformarli in un output - attivando un motore, accendendo un LED, pubblicando qualcosa online. Puoi dire alla tua scheda cosa fare scrivendo il codice del programma nell'IDE e inviando le istruzioni al microcontrollore sulla scheda. Per farlo usi il linguaggio di programmazione Arduino (basato su Wiring) e il Software Arduino (IDE), basato su Processing.

## **2.2 Installare l'Arduino IDE per Windows**

Visita <https://www.arduino.cc/en/software> per scaricare l'ultima versione dell'Arduino IDE per il sistema operativo del tuo computer. Ci sono versioni per Windows, Mac e Linux.

**L'Arduino IDE 2**

L'Arduino IDE 2 è un grande passo rispetto al suo robusto predecessore, Arduino IDE 1.x, e presenta un'interfaccia utente rinnovata, un migliorato gestore di schede e librerie, debugger, funzione di completamento automatico e molto altro.

Qui mostreremo come scaricare e installare l'Arduino IDE 2.2.1 sul tuo Windows.

Puoi scegliere tra l'Installer (.exe) e i pacchetti Zip. Ti suggeriamo di usare il primo che installa direttamente tutto il necessario per usare il Software Arduino (IDE), inclusi i driver. Con il pacchetto Zip devi installare i driver manualmente. Il file Zip è utile anche se vuoi creare un’[installazione portatile](https://arduino.cc/en/Guide/PortableIDE).

![](../media/06c450364fe07776520f5b245a6ed165.png)

![](../media/38c6badd454d9c623543a457d32f832f.png)

![](../media/bb179a14b42ee1e130df8c8da575c509.png)

![](../media/ecb1b309ea3db40704e3dca0d341e031.png)

![](../media/c26346f5750f926978e7fefffa5216d4.png)

![](../media/f3c51f678212efc301ef976a892cf9c6.png)

![](../media/56d37d47b71547d2c310c8e7cb440abb.png)

![](../media/539cb1702833b283cda61cc2bb1a1dc2.png)

![](../media/7a1e5c40aec7d793ca7975966ddf3cc4.png)

Clicca su Finish e avvia Arduino IDE

![](../media/5038e9b20e71f7b401a691c43baf599a.png)

Il firewall chiederà se vuoi consentire l'accesso, clicca semplicemente su **Allow access**.

![](../media/0194e55376dc05f8f403d1b547150003.png)

Arduino IDE 2.0

![Arduino IDE](../media/a438335b489d8e6390131b6f44eb2019.jpeg)

**Verify / Upload** - compila e carica il tuo codice sulla scheda Arduino.

**Select Board & Port** - le schede Arduino rilevate automaticamente appaiono qui, insieme al numero di porta.

**Sketchbook** - qui troverai tutti i tuoi sketch salvati localmente sul computer. Inoltre, puoi sincronizzarti con l'Arduino Cloud e ottenere i tuoi sketch dall'ambiente online.

**Boards Manager** - sfoglia i pacchetti Arduino e di terze parti che possono essere installati. Ad esempio, per usare una scheda MKR WiFi 1010 è necessario installare il pacchetto Arduino SAMD Boards.

**Library Manager** - sfoglia migliaia di librerie Arduino, create da Arduino e dalla sua comunità.

**Debugger** - testa e debugga i programmi in tempo reale.

**Search** - cerca parole chiave nel tuo codice.

**Open Serial Monitor** - apre lo strumento Serial Monitor come nuova scheda nella console.

Se vuoi saperne di più sull'Arduino IDE, consulta questo documento: [Getting Started with Arduino IDE 2](https://docs.arduino.cc/software/ide-v2/tutorials/getting-started-ide-v2)

## 2.3 Introduzione alla scheda Keyestudio UNO

Il processore principale di questa scheda è ATMEGA328P-AU e ATMEGA16U2 è usato come chip di conversione UART-USB.

Ha 14 pin digitali di input/output (di cui 6 possono essere usati come uscite PWM), 6 ingressi analogici, un oscillatore a cristallo da 16 MHz, una connessione USB, un jack di alimentazione, 1 header ICSP e un pulsante di reset.

Tutto ciò che devi fare è collegarla a un computer tramite un cavo USB e alimentarla con un alimentatore esterno DC 7-12V.

![](../media/8bb76386a2505a9dd0b18a8c78745a64.png)

| **Microcontrollore**         | **ATMEGA328P-AU**                                        |
|-----------------------------|----------------------------------------------------------|
| Tensione di funzionamento    | 5V                                                       |
| Tensione di ingresso (consigliata) | DC 7-12V                                                 |
| Pin digitali I/O             | 14 (D0-D13)                                              |
| Pin digitali PWM             | 6 (D3，D5，D6，D9，D10，D11)                             |
| Pin di ingresso analogico    | 6 (A0-A5)                                                |
| Memoria Flash               | 32 KB (ATMEGA328P-AU) di cui 0.5 KB usati dal bootloader |
| SRAM                        | 2 KB (ATMEGA328P-AU)                                     |
| EEPROM                      | 1 KB (ATMEGA328P-AU)                                     |
| Frequenza di clock          | 16 MHz                                                   |

![](../media/fad6c7bef8e618006f403af9a068476f.png)

| **Numero interfaccia** | **Descrizione**                                                                                                                                                                                                                                                                                                                                                                                                                                                       |
|-----------------------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 1                     | **Header ICSP (In-Circuit Serial Programming)**  È l'header di programmazione micro AVR, un Arduino, composto da MOSI, MISO, SCK, RESET, VCC e GND. Spesso chiamato SPI (serial peripheral interface) e può essere considerato un "prolungamento" delle uscite. Infatti, i dispositivi slave sono sotto il bus SPI host. Quando si collega al PC, si programma il firmware su ATMEGA328P-AU.                                                                       |
| 2                     | **Pin di comunicazione seriale**  Collegamento per comunicazione seriale. 4 pin (GND, VCC (3.3V o 5V controllati da interruttore a slitta), RX, TX)                                                                                                                                                                                                                                                                                                                     |
| 3                     | **GND**  Pin di massa                                                                                                                                                                                                                                                                                                                                                                                                                                                |
| 4                     | **Pin V (VCC)**  Alimenta sensori e moduli esterni. Seleziona la tensione di 3.3V o 5V tramite interruttore a slitta.                                                                                                                                                                                                                                                                                                                                                 |
| 5                     | **Digital I/O**  Ha 14 pin digitali di input/output, etichettati da D0 a D13 (di cui 6 possono essere usati come uscite PWM). Questi pin possono essere configurati come input digitali per leggere il valore logico (0 o 1) o come output digitali per pilotare moduli come LED, relè, ecc. I pin D3, D5, D6, D9, D10 e D11 possono generare PWM. Per la porta digitale, puoi collegarti tramite connettori femmina o tramite header (etichettati S) con passo 2.54mm. |
| 6                     | **AREF**  Per riferimento analogico. A volte usato per impostare una tensione di riferimento esterna (0-5V) come limite superiore degli ingressi analogici.                                                                                                                                                                                                                                                                                                           |
| 7                     | **SDA**  Pin di comunicazione IIC                                                                                                                                                                                                                                                                                                                                                                                                                                    |
| 8                     | **SCL**  Pin di comunicazione IIC                                                                                                                                                                                                                                                                                                                                                                                                                                    |
| 9                     | **Header ICSP (In-Circuit Serial Programming)**  ICSP è un header micro AVR Arduino composto da MOSI, MISO, SCK, RESET, VCC e GND. Collegato a ATMEGA 16U2-MU. Quando si collega al PC, si programma il firmware su ATMEGA 16U2-MU.                                                                                                                                                                                                                                  |
| 10                    | **Microcontrollore** Ogni scheda di controllo ha il proprio microcontrollore. Puoi considerarlo il cervello della tua scheda. I microcontrollori sono solitamente di ATMEL. Prima di caricare un nuovo programma sull'Arduino IDE, devi sapere quale IC è sulla tua scheda. Questa informazione si trova sulla parte superiore dell'IC. Il microcontrollore usato in questa scheda è ATMEGA328P-AU.                                                                                 |
| 11                    | **LED D13**  C'è un LED integrato pilotato dal pin digitale 13. Quando il pin è HIGH, il LED è acceso, quando è LOW, è spento.                                                                                                                                                                                                                                                                                                                                       |
| 12                    | **LED TX**  A bordo trovi l'etichetta: TX (trasmissione). Quando la scheda comunica via porta seriale inviando un messaggio, il LED TX lampeggia.                                                                                                                                                                                                                                                                                                                  |
| 13                    | **LED RX**  A bordo trovi l'etichetta: RX (ricezione). Quando la scheda comunica via porta seriale ricevendo un messaggio, il LED RX lampeggia.                                                                                                                                                                                                                                                                                                                    |
| 14                    | **LED di alimentazione**  Il LED acceso indica che la scheda è correttamente alimentata. Altrimenti il LED è spento.                                                                                                                                                                                                                                                                                                                                                 |
| 15                    | **Connessione USB**  Puoi alimentare la scheda tramite connessione USB o caricare il programma tramite la porta USB. Collega la scheda al PC usando un cavo USB tramite la porta USB.                                                                                                                                                                                                                                                                               |
| 16                    | **ATMEGA 16U2-MU**  Chip USB-seriale, può convertire il segnale USB in segnale seriale.                                                                                                                                                                                                                                                                                                                                                                              |
| 17                    | **Interruttore di alimentazione**  Puoi spostare l'interruttore per controllare la tensione del pin V (VCC), 3.3V o 5V.                                                                                                                                                                                                                                                                                                                                             |
| 18                    | **Regolatore di tensione**  Controlla la tensione fornita alla scheda e stabilizza la tensione DC usata dal processore e dagli altri componenti. Converte una tensione DC esterna di ingresso 7-12V in DC 5V, quindi fornisce DC 5V al processore e agli altri componenti, con corrente di uscita 2A.                                                                                                                                                              |
| 19                    | **Jack di alimentazione DC**  La scheda può essere alimentata con una tensione esterna DC 7-12V tramite il jack di alimentazione DC.                                                                                                                                                                                                                                                                                                                               |
| 20                    | **IOREF**  Usato per configurare la tensione di funzionamento del microcontrollore. Usato raramente.                                                                                                                                                                                                                                                                                                                                                                |
| 21                    | **Header RESET**  Collegare un pulsante esterno per resettare la scheda. La funzione è la stessa del pulsante di reset.                                                                                                                                                                                                                                                                                                                                             |
| 22                    | **Pin 3.3V** Uscita che fornisce una tensione di 3.3V                                                                                                                                                                                                                                                                                                                                                                                                                |
| 23                    | **Pin 5V**  Uscita che fornisce una tensione di 5V                                                                                                                                                                                                                                                                                                                                                                                                                   |
| 24                    | **Vin**  Puoi fornire una tensione esterna di ingresso DC 7-12V tramite questo pin alla scheda.                                                                                                                                                                                                                                                                                                                                                                      |
| 25                    | **Pin analogici**  La scheda ha 6 ingressi analogici, etichettati da A0 a A5. Possono anche essere usati come pin digitali, A0=D14, A1=D15, A2=D16, A3=D17, A4=D18, A5=D19. Per la porta analogica, puoi collegarti tramite connettori femmina o tramite header (etichettati S) con passo 2.54mm.                                                                                                                                                                         |
| 26                    | **Pin di comunicazione IIC**  Collegamento per comunicazione IIC. 4 pin (GND, VCC (3.3V o 5V controllati da interruttore a slitta), SDA, SCL)                                                                                                                                                                                                                                                                                                                       |
| 27                    | **Pulsante RESET**  Puoi resettare la scheda per far partire il programma dallo stato iniziale.                                                                                                                                                                                                                                                                                                                                                                      |

## 2.4 Selezionare la scheda e la porta nell'Arduino IDE

![](../media/9719a62c6ebf40346819de383b90d86c.png)

Prima di caricare il codice sulla scheda di controllo collegata, dobbiamo selezionare la scheda e la porta nell'Arduino IDE.

Sono introdotti due metodi:

1. Usare il selettore di Scheda e Porta nel menu a tendina Strumenti

2. Usare il selettore di scheda

![](../media/9b6c571bb9efb9776d7f13e97356520f.jpeg)

![](../media/27fdb72344a4ae4a32d8de7bfbfe18d4.png)

![](../media/7f90bccae208b43956dbb5ea18e7b96d.png)

## 2.5 Aggiungere librerie all'Arduino IDE

**Perché usare le librerie?**

Le librerie sono incredibilmente utili quando si crea un progetto di qualsiasi tipo. Rendono la nostra esperienza di sviluppo molto più fluida e ce ne sono quasi infinite. Sono usate per interfacciarsi con molti sensori diversi, RTC, moduli Wi-Fi, matrici RGB e ovviamente con altri componenti sulla tua scheda.

**Includere una libreria nello sketch**

![](../media/04646b12f83ae55602cd7e186850034c.png)

![](../media/79939cc2b0037a52ce8b7571cb448699.png)![](../media/067e9b7efcc117f4dd702c49f66f1735.png)

**Due modi per aggiungere librerie all'Arduino IDE**

1.**Metodo uno: Importare una libreria .zip**

![](../media/68b46d43a6912da4b010ae4c37cc496e.png)

![](../media/3eb07bb12bf9ada902326970dc7a455a.png)

![](../media/0713a4d4dc9e43f97ffb5175bc094c96.jpeg)

2.**Metodo due: Installazione manuale**

La posizione predefinita dove gli sketch Arduino che scrivi vengono salvati si chiama Sketchbook. Lo Sketchbook è semplicemente una cartella sul tuo computer come qualsiasi altra. Funziona come un comodo archivio per gli sketch ed è anche dove vengono salvate le librerie di codice aggiuntive.

**Cartella delle librerie**

La cartella **sketchbook\\libraries** è la posizione predefinita dove le librerie vengono installate dall'Arduino IDE.

Se vuoi aggiungere una libreria manualmente, il file della libreria non può essere aggiunto come file zip, devi decomprimerlo e metterlo nella cartella **libraries** del tuo sketchbook da solo.

![](../media/54ed3cb6b4303dfb851d49ec6c998256.jpeg)

![](../media/4dde6298b58678953a4f0e8cb09229cc.jpeg)

![](../media/28fdb140904c915c2b37ba02923a68f6.png)

Disinstallare una libreria Arduino

Disinstallare una libreria Arduino è più semplice che installarla. Trova la cartella dello sketchbook sul tuo computer (come nel capitolo “Installazione manuale di una libreria”). Vai in quella posizione e apri la cartella “libraries”. Seleziona la cartella contenente la libreria che vuoi eliminare, quindi cancellala semplicemente. La prossima volta che aprirai l'Arduino IDE, la libreria eliminata non apparirà più nel menu Sketch > Include Library.

![](../media/7a7fc5fc95be160fe7f9aa50be140f6d.png)

Le librerie non occupano molto spazio e la maggior parte delle volte non c'è motivo di rimuoverle. Se però non intendi più usarle e vuoi snellire la lista, puoi cancellarle in sicurezza. Puoi sempre reinstallare qualsiasi libreria Arduino se ti serve in futuro.

