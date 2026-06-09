## Leçon 5 : Module d'affichage LCD 1602

**(1). Description :**

![](../media/28bf5a86d2265afb050e55589e145fe9.png)

Avec un module de communication I2C, il s'agit d'un module d'affichage pouvant montrer 2 lignes avec 16 caractères par ligne.

Il affiche un fond bleu avec des caractères blancs et se connecte à l'interface I2C du MCU, ce qui économise fortement les ressources du MCU.

À l'arrière de l'écran LCD, il y a un potentiomètre bleu pour ajuster le rétroéclairage. L'adresse de communication par défaut est 0x27.

Le LCD 1602 d'origine peut démarrer et fonctionner avec 11 ports IO, mais le nôtre est construit avec une interface ARDUINOIIC/I2C, économisant 9 ports IO. Alternativement, le module est équipé de 4 trous de positionnement d'un diamètre de 3 mm, ce qui est pratique pour le fixer sur d'autres appareils.

**(2). Paramètres :**

Adresse I2C : 0x27

Rétroéclairage (bleu, blanc)

Tension d'alimentation : **5V**

Contraste réglable

GND : une broche qui se connecte à la masse

VCC : une broche qui se connecte à une alimentation +5V

SDA : une broche qui se connecte au port analogique A4 pour la communication IIC

SCL : une broche qui se connecte au port analogique A5 pour la communication IIC

**(3). Ce dont vous avez besoin :**

| Carte de contrôle*1                             | Câble USB*1                                   | Affichage LCD*1                               | Fil DuPon 4P-1P F-F                            |
|------------------------------------------------|------------------------------------------------|------------------------------------------------|------------------------------------------------|
| ![](../media/60cb7081df16f5d5169b0883a6fbf3df.png) | ![](../media/4f8d5af6dee9016b45d975adb2391d37.png) | ![](../media/28bf5a86d2265afb050e55589e145fe9.png) | ![](../media/f4df3fe85086b2896d958b1caf93a038.png) |

**(4) Schéma de connexion**

| Tableau de connexion des broches |                      |
|---------------------------------|----------------------|
| Broche de l'**affichage LCD**   | Broche de la carte de contrôle |
| GND                             | G(GND)               |
| VCC                             | V(5V)                |
| SDA                             | A4                   |
| SCL                             | A5                   |

![](../media/8c306bd1b7399f0819f4a1c435177ec3.png)

![](../media/74924d373976c4ff67719dea807a5f0d.png)

![](../media/2ab182ee1dd52f41062a95d8519d6a17.png)

![](../media/6eb2b20c59f81f11a84c57be5d8a91f4.png)![](../media/5facbfa2ab2b3bb0a6946cf0a77d263a.png)