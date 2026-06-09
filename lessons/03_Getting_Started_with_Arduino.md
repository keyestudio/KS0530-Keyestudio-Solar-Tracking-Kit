# 2.Démarrage avec Arduino

## **2.1 Qu'est-ce qu'Arduino ?**

Arduino est une plateforme électronique open-source basée sur du matériel et des logiciels faciles à utiliser. Les cartes Arduino peuvent lire des entrées - lumière sur un capteur, un doigt sur un bouton, ou un message Twitter - et les transformer en sortie - activation d'un moteur, allumage d'une LED, publication en ligne. Vous pouvez dire à votre carte quoi faire en écrivant le code du programme dans l'IDE et en envoyant les instructions au microcontrôleur sur la carte. Pour cela, vous utilisez le langage de programmation Arduino (basé sur Wiring) et le logiciel Arduino (IDE), basé sur Processing.

## **2.2 Installation de l'IDE Arduino pour Windows**

Visitez <https://www.arduino.cc/en/software> pour télécharger la dernière version de l'IDE Arduino pour le système d'exploitation de votre ordinateur. Il existe des versions pour Windows, Mac et Linux.

**L'IDE Arduino 2**

L'IDE Arduino 2 est une grande évolution par rapport à son robuste prédécesseur, l'IDE Arduino 1.x, et propose une interface utilisateur repensée, un gestionnaire de cartes et de bibliothèques amélioré, un débogueur, une fonction d'autocomplétion et bien plus encore.

Ici, nous allons montrer comment télécharger et installer l'IDE Arduino 2.2.1 sur votre Windows.

Vous pouvez choisir entre l'installateur (.exe) et les packages Zip. Nous vous suggérons d'utiliser le premier qui installe directement tout ce dont vous avez besoin pour utiliser le logiciel Arduino (IDE), y compris les pilotes. Avec le package Zip, vous devez installer les pilotes manuellement. Le fichier Zip est également utile si vous souhaitez créer une [installation portable](https://arduino.cc/en/Guide/PortableIDE).

![](../media/06c450364fe07776520f5b245a6ed165.png)

![](../media/38c6badd454d9c623543a457d32f832f.png)

![](../media/bb179a14b42ee1e130df8c8da575c509.png)

![](../media/ecb1b309ea3db40704e3dca0d341e031.png)

![](../media/c26346f5750f926978e7fefffa5216d4.png)

![](../media/f3c51f678212efc301ef976a892cf9c6.png)

![](../media/56d37d47b71547d2c310c8e7cb440abb.png)

![](../media/539cb1702833b283cda61cc2bb1a1dc2.png)

![](../media/7a1e5c40aec7d793ca7975966ddf3cc4.png)

Cliquez sur Terminer et lancez l'IDE Arduino

![](../media/5038e9b20e71f7b401a691c43baf599a.png)

Le pare-feu vous demandera si vous souhaitez autoriser l'accès, cliquez simplement sur **Autoriser l'accès**.

![](../media/0194e55376dc05f8f403d1b547150003.png)

Arduino IDE 2.0

![Arduino IDE](../media/a438335b489d8e6390131b6f44eb2019.jpeg)

**Vérifier / Télécharger** - compiler et téléverser votre code sur votre carte Arduino.

**Sélectionner la carte & le port** - les cartes Arduino détectées apparaissent automatiquement ici, avec le numéro de port.

**Carnet de croquis** - ici vous trouverez tous vos croquis stockés localement sur votre ordinateur. De plus, vous pouvez synchroniser avec l'Arduino Cloud, et aussi obtenir vos croquis depuis l'environnement en ligne.

**Gestionnaire de cartes** - parcourez les packages Arduino et tiers pouvant être installés. Par exemple, utiliser une carte MKR WiFi 1010 nécessite l'installation du package Arduino SAMD Boards.

**Gestionnaire de bibliothèques** - parcourez des milliers de bibliothèques Arduino, créées par Arduino et sa communauté.

**Débogueur** - tester et déboguer les programmes en temps réel.

**Recherche** - rechercher des mots-clés dans votre code.

**Ouvrir le moniteur série** - ouvre l'outil Moniteur Série, dans un nouvel onglet de la console.

Si vous souhaitez en savoir plus sur l'IDE Arduino, veuillez consulter ce document : [Démarrage avec Arduino IDE 2](https://docs.arduino.cc/software/ide-v2/tutorials/getting-started-ide-v2)

## 2.3 Présentation de la carte Keyestudio UNO

Le processeur principal de cette carte est ATMEGA328P-AU et ATMEGA16U2 est utilisé comme puce de conversion UART vers USB.

Elle dispose de 14 broches d'entrée/sortie numériques (dont 6 peuvent être utilisées comme sorties PWM), 6 entrées analogiques, un oscillateur à cristal de 16 MHz, une connexion USB, une prise d'alimentation, un connecteur ICSP et un bouton de réinitialisation.

Tout ce que vous avez à faire est de la connecter à un ordinateur via un câble USB et de l'alimenter avec une alimentation externe DC 7-12V.

![](../media/8bb76386a2505a9dd0b18a8c78745a64.png)

| **Microcontrôleur**         | **ATMEGA328P-AU**                                        |
|-----------------------------|----------------------------------------------------------|
| Tension de fonctionnement   | 5V                                                       |
| Tension d'entrée (recommandée) | DC 7-12V                                                 |
| Broches d'E/S numériques    | 14 (D0-D13)                                              |
| Broches PWM numériques      | 6 (D3，D5，D6，D9，D10，D11)                             |
| Broches d'entrée analogiques| 6 (A0-A5)                                                |
| Mémoire Flash               | 32 KB (ATMEGA328P-AU) dont 0,5 KB utilisé par le bootloader |
| SRAM                        | 2 KB (ATMEGA328P-AU)                                     |
| EEPROM                      | 1 KB (ATMEGA328P-AU)                                     |
| Fréquence d'horloge         | 16 MHz                                                   |

![](../media/fad6c7bef8e618006f403af9a068476f.png)

| **Numéro d'interface** | **Présentation**                                                                                                                                                                                                                                                                                                                                                                                                                                                       |
|-----------------------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 1                     | **Connecteur ICSP (In-Circuit Serial Programming)**  C'est un connecteur micro-programmateur AVR Arduino composé de MOSI, MISO, SCK, RESET, VCC et GND. Il est souvent appelé SPI (interface périphérique série) et peut être considéré comme une "extension" des sorties. En fait, il permet de connecter des périphériques esclaves sous le bus SPI. Lors de la connexion au PC, il sert à programmer le firmware de l'ATMEGA328P-AU.                                                                       |
| 2                     | **Broche de communication série**  Connectée à la communication série. 4 broches (GND, VCC (3.3V ou 5V contrôlé par un interrupteur coulissant), RX, TX)                                                                                                                                                                                                                                                                                                                  |
| 3                     | **GND**  Broches de masse                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 4                     | **Broche V (VCC)**  Alimente les capteurs et modules externes. Sélectionnez la tension de 3.3V ou 5V via un interrupteur coulissant.                                                                                                                                                                                                                                                                                                                                |
| 5                     | **E/S numériques**  Elle dispose de 14 broches d'entrée/sortie numériques, étiquetées D0 à D13 (dont 6 peuvent être utilisées comme sorties PWM). Ces broches peuvent être configurées comme entrée numérique pour lire la valeur logique (0 ou 1). Ou utilisées comme sortie numérique pour piloter différents modules comme LED, relais, etc. Les broches D3, D5, D6, D9, D10 et D11 peuvent générer du PWM. Pour les ports numériques, vous pouvez connecter via des connecteurs femelles ou des broches (étiquetées S) au pas de 2,54 mm. |
| 6                     | **AREF**  Pour la référence analogique. Parfois utilisé pour définir une tension de référence externe (0-5V) comme limite supérieure des broches d'entrée analogiques.                                                                                                                                                                                                                                                                                                |
| 7                     | **SDA**  Broche de communication IIC                                                                                                                                                                                                                                                                                                                                                                                                                                  |
| 8                     | **SCL**  Broche de communication IIC                                                                                                                                                                                                                                                                                                                                                                                                                                  |
| 9                     | **Connecteur ICSP (In-Circuit Serial Programming)**  ICSP est un connecteur micro-programmateur AVR Arduino composé de MOSI, MISO, SCK, RESET, VCC et GND. Connecté à l'ATMEGA16U2-MU. Lors de la connexion au PC, il sert à programmer le firmware de l'ATMEGA16U2-MU.                                                                                                                                                                                               |
| 10                    | **Microcontrôleur** Chaque carte de contrôle possède son propre microcontrôleur. Vous pouvez le considérer comme le cerveau de votre carte. Les microcontrôleurs proviennent généralement d'ATMEL. Avant de charger un nouveau programme dans l'IDE Arduino, vous devez savoir quel CI est sur votre carte. Cette information peut être vérifiée sur le dessus du CI. Le microcontrôleur utilisé sur cette carte est l'ATMEGA328P-AU.                                                                                 |
| 11                    | **LED D13**  Il y a une LED intégrée pilotée par la broche numérique 13. Lorsque la broche est à l'état HAUT, la LED est allumée, lorsqu'elle est à l'état BAS, elle est éteinte.                                                                                                                                                                                                                                                                                       |
| 12                    | **LED TX**  Sur la carte, vous pouvez trouver l'étiquette : TX (transmission). Lorsque la carte communique via le port série, envoie un message, la LED TX clignote.                                                                                                                                                                                                                                                                                                 |
| 13                    | **LED RX**  Sur la carte, vous pouvez trouver l'étiquette : RX (réception). Lorsque la carte communique via le port série, reçoit un message, la LED RX clignote.                                                                                                                                                                                                                                                                                                   |
| 14                    | **LED d'alimentation**  La LED allumée signifie que votre carte est correctement alimentée. Sinon, la LED est éteinte.                                                                                                                                                                                                                                                                                                                                              |
| 15                    | **Connexion USB**  Vous pouvez alimenter la carte via la connexion USB. Ou téléverser le programme sur la carte via le port USB. Connectez la carte au PC à l'aide d'un câble USB via le port USB.                                                                                                                                                                                                                                                                   |
| 16                    | **ATMEGA16U2-MU**  Puce USB vers série, peut convertir le signal USB en signal de port série.                                                                                                                                                                                                                                                                                                                                                                        |
| 17                    | **Interrupteur d'alimentation**  Vous pouvez faire glisser l'interrupteur pour contrôler la tension de la broche V (VCC), 3.3V ou 5V.                                                                                                                                                                                                                                                                                                                              |
| 18                    | **Régulateur de tension**  Pour contrôler la tension fournie à la carte, ainsi que pour stabiliser la tension DC utilisée par le processeur et les autres composants. Convertit une tension d'entrée externe DC7-12V en DC 5V, puis alimente le processeur et les autres composants en DC 5V, avec un courant de sortie de 2A.                                                                                                                                      |
| 19                    | **Prise d'alimentation DC**  La carte peut être alimentée par une alimentation externe DC7-12V via la prise d'alimentation DC.                                                                                                                                                                                                                                                                                                                                      |
| 20                    | **IOREF**  Utilisé pour configurer la tension de fonctionnement du microcontrôleur. Peu utilisé.                                                                                                                                                                                                                                                                                                                                                                    |
| 21                    | **Connecteur RESET**  Connectez un bouton externe pour réinitialiser la carte. La fonction est la même que le bouton de réinitialisation.                                                                                                                                                                                                                                                                                                                         |
| 22                    | **Broche 3.3V** Sortie fournissant une tension de 3.3V                                                                                                                                                                                                                                                                                                                                                                                                               |
| 23                    | **Broche 5V** Sortie fournissant une tension de 5V                                                                                                                                                                                                                                                                                                                                                                                                                  |
| 24                    | **Vin**  Vous pouvez fournir une tension d'entrée externe DC7-12V à la carte via cette broche.                                                                                                                                                                                                                                                                                                                                                                       |
| 25                    | **Broches analogiques**  La carte dispose de 6 entrées analogiques, étiquetées de A0 à A5. Peuvent également être utilisées comme broches numériques, A0=D14, A1=D15, A2=D16, A3=D17, A4=D18, A5=D19. Pour les ports analogiques, vous pouvez connecter via des connecteurs femelles ou des broches (étiquetées S) au pas de 2,54 mm.                                                                                                                                       |
| 26                    | **Broches de communication IIC**  Connectées à la communication IIC. 4 broches (GND, VCC (3.3V ou 5V contrôlé par un interrupteur coulissant), SDA, SCL)                                                                                                                                                                                                                                                                                                             |
| 27                    | **Bouton RESET**  Vous pouvez réinitialiser votre carte pour démarrer le programme depuis l'état initial.                                                                                                                                                                                                                                                                                                                                                           |

## 2.4 Sélectionner la carte et le port dans l'IDE Arduino

![](../media/9719a62c6ebf40346819de383b90d86c.png)

Avant de téléverser le code sur la carte de contrôle connectée, nous devons sélectionner la carte et le port dans l'IDE Arduino.

Deux méthodes sont présentées ci-dessous :

1. Utiliser le sélecteur de carte et de port dans le menu Outils

2. Utiliser le sélecteur de carte

![](../media/9b6c571bb9efb9776d7f13e97356520f.jpeg)

![](../media/27fdb72344a4ae4a32d8de7bfbfe18d4.png)

![](../media/7f90bccae208b43956dbb5ea18e7b96d.png)

## 2.5 Ajouter des bibliothèques à l'IDE Arduino

**Pourquoi utiliser des bibliothèques ?**

Les bibliothèques sont incroyablement utiles lors de la création d'un projet de n'importe quel type. Elles rendent notre expérience de développement beaucoup plus fluide, et il en existe presque une infinité. Elles sont utilisées pour interfacer avec de nombreux capteurs différents, RTC, modules Wi-Fi, matrices RGB et bien sûr avec d'autres composants sur votre carte.

**Inclure une bibliothèque dans le croquis**

![](../media/04646b12f83ae55602cd7e186850034c.png)

![](../media/79939cc2b0037a52ce8b7571cb448699.png)![](../media/067e9b7efcc117f4dd702c49f66f1735.png)

**Deux façons d'ajouter des bibliothèques à l'IDE Arduino**

1.**Méthode 1 : Importer une bibliothèque .zip**

![](../media/68b46d43a6912da4b010ae4c37cc496e.png)

![](../media/3eb07bb12bf9ada902326970dc7a455a.png)

![](../media/0713a4d4dc9e43f97ffb5175bc094c96.jpeg)

2.**Méthode 2 : Installation manuelle**

L'emplacement par défaut où les croquis Arduino que vous écrivez seront enregistrés s'appelle le Carnet de croquis. Le Carnet de croquis est simplement un dossier sur votre ordinateur comme un autre. Il sert de dépôt pratique pour les croquis et c'est aussi là que les bibliothèques de code additionnelles sont enregistrées.

**Dossier des bibliothèques**

Le dossier **sketchbook\\libraries** est l'emplacement par défaut où les bibliothèques sont installées depuis l'IDE Arduino.

Si vous souhaitez ajouter une bibliothèque manuellement, le fichier de la bibliothèque ne peut pas être ajouté en tant que fichier zip, vous devez le décompresser et le placer vous-même dans le dossier **libraries** de votre carnet de croquis.

![](../media/54ed3cb6b4303dfb851d49ec6c998256.jpeg)

![](../media/4dde6298b58678953a4f0e8cb09229cc.jpeg)

![](../media/28fdb140904c915c2b37ba02923a68f6.png)

Désinstaller une bibliothèque Arduino

Désinstaller une bibliothèque Arduino est plus simple que de l'installer. Trouvez le dossier du carnet de croquis sur votre ordinateur (comme dans le chapitre « Installation manuelle d'une bibliothèque »). Allez à cet emplacement et ouvrez le dossier « libraries ». Sélectionnez le dossier contenant la bibliothèque que vous souhaitez supprimer, puis supprimez-le simplement. La prochaine fois que vous ouvrirez votre IDE Arduino, la bibliothèque supprimée n'apparaîtra plus dans le menu Croquis > Inclure une bibliothèque.

![](../media/7a7fc5fc95be160fe7f9aa50be140f6d.png)

Les bibliothèques ne prennent pas beaucoup d'espace et la plupart du temps il n'y a pas de raison de les supprimer. Cependant, si vous ne comptez plus les utiliser et souhaitez alléger la liste, vous pouvez les supprimer en toute sécurité. Vous pouvez toujours réinstaller n'importe quelle bibliothèque Arduino si vous avez besoin de l'utiliser à l'avenir.
