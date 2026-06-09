## Leçon 8 : Module numérique d'intensité lumineuse BH1750

**(1) Description :**

![](../media/53ab41d84e93814e57076a8cc25e1aa7.png)

Le composant principal de ce capteur est la puce BH1750FVI, qui est une puce intégrée pour l'intensité lumineuse numérique.

Comme montré sur l'image ci-dessous, le BH1750 est composé d'une photodiode, d'un amplificateur opérationnel, d'un convertisseur ADC, d'un oscillateur à quartz, etc. La photodiode convertit le signal optique d'entrée en un signal électrique par effet photovoltaïque. Après amplification par le circuit amplificateur opérationnel, la tension est collectée par l'ADC, puis convertie en un nombre binaire 16 bits via le circuit logique et stockée dans le registre interne (Note : Plus la lumière est forte, plus le photocourant est important, et plus la tension est élevée, donc l'intensité lumineuse peut être jugée par la valeur de la tension.

Cependant, il faut noter que la tension et l'intensité lumineuse ont une correspondance un à un, mais ne sont pas proportionnelles. C'est pourquoi un traitement linéaire est effectué par cette puce et pourquoi la puce intégrée est utilisée directement au lieu des photodiodes). Le BH1750 sort la ligne d'horloge et la ligne de données. Le microcontrôleur peut communiquer avec le module BH1750 via le protocole I2C. Vous pouvez choisir le mode de fonctionnement du BH1750, ou extraire les données d'illuminance du registre BH1750.

**(2) Paramètres :**

Interface numérique I2C, supportant un débit maximal de 400Kbps

La sortie est l'illuminance

Plage de mesure de 1 à 65535 lux, résolution minimale de 1 lux

Faible consommation d'énergie (fonction Power down)

Filtre les interférences des variations lumineuses causées par la fréquence secteur 50/60Hz

Supporte deux adresses I2C, sélectionnées par la broche ADDR

Faible déviation de mesure (erreur maximale de précision +/-20%)

GND masse d'alimentation

SDA broche de données du bus I2C

SCL broche d'horloge du bus I2C

VCC tension d'alimentation 3-5V

**(3) Vous devez préparer :**

| Carte de contrôle*1                             | Câble USB*1                                   | Capteur BH1750FVI*1                            | Fil 4 broches F-F 350mm                         |
|------------------------------------------------|------------------------------------------------|------------------------------------------------|------------------------------------------------|
| ![](../media/60cb7081df16f5d5169b0883a6fbf3df.png) | ![](../media/4f8d5af6dee9016b45d975adb2391d37.png) | ![](../media/53ab41d84e93814e57076a8cc25e1aa7.png) | ![](../media/626e88c46a8a1385bd0558610a17ca9f.png) |

**(4) Schéma de connexion :**

![](../media/d7fccd89d5bed291ccce34babfbf5c91.png)

![](../media/e3b43d6080bdd3dcf111f5d594529d3a.png)![](../media/f232b12906eb5a6819c933c79183fc58.png)

![](../media/92857c7b8c368330acb6630e39bd462c.png)

(**Note** : comme le bus I2C peut avoir plusieurs dispositifs avec des adresses différentes, lorsque le module numérique d'intensité lumineuse est utilisé conjointement avec le module I2C LCD1602, il n'y a pas de conflit car ils ont des adresses différentes.)