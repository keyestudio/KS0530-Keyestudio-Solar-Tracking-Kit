## Leçon 6 : Capteur photosensible

**(1) Description**

Ce kit comprend quatre modules de capteurs à photo-résistance, des capteurs de lumière ambiante, ayant pour composant principal une photo-résistance.

La résistance d’une photo-résistance varie en fonction de l’intensité lumineuse. Lorsqu’il y a de la lumière autour, sa résistance se situe entre 5 et 10 kΩ ; tandis que dans l’obscurité, la résistance n’est que de 0,2 MΩ. Sur la base de cette propriété, un circuit peut être construit pour convertir la variation de résistance en variation de tension.

De plus, le capteur est équipé d’un terminal anti-inversion avec un pas de 2,54 mm pour faciliter le câblage. Il est également compatible avec de nombreux types de microcontrôleurs, tels que la série de microcontrôleurs Arduino.

Ici, nous utilisons ce capteur avec le microcontrôleur Arduino. L’extrémité S (signal) du capteur doit être connectée à la broche analogique de l’Arduino pour détecter la variation de la valeur analogique qui sera affichée sur le moniteur série. Veuillez également noter que deux trous de positionnement d’un diamètre de 4,9 mm sont intégrés sur le capteur pour faciliter sa fixation.

**(2) Paramètres :**

Tension de fonctionnement : 3,3 V - 5 V (CC)

Interface : 3 broches

Signal de sortie : signal analogique

Poids : 2,3 g

![](../media/537af5b84f09fe71a4e1f6cbeabdfc81.png)

**(3) Ce dont vous avez besoin :**

| Carte de contrôle*1                             | Câble USB*1                                   | Module LED jaune*1                            | Fil DuPont 3 broches*2                         | Module bouton-poussoir*4                       |
|------------------------------------------------|-----------------------------------------------|-----------------------------------------------|------------------------------------------------|------------------------------------------------|
| ![](../media/60cb7081df16f5d5169b0883a6fbf3df.png) | ![](../media/4f8d5af6dee9016b45d975adb2391d37.png) | ![](../media/628e402ae3fc455a2812705b17d7c30d.png) | ![](../media/d57e6d40ae04a5be544cb6b4833a3e98.png) | ![](../media/537af5b84f09fe71a4e1f6cbeabdfc81.png) |

**(4) Schéma de connexion :**

| Tableau de connexion des broches |                      |
|---------------------------------|----------------------|
| Broche du **photo-résistor**    | Broche de la carte de contrôle |
| G                               | G (GND)              |
| V                               | V (5V)               |
| S                               | A0                   |

| Tableau de connexion des broches |                      |
|---------------------------------|----------------------|
| Broche de la **LED**             | Broche de la carte de contrôle |
| G                               | G (GND)              |
| V                               | V (5V)               |
| S                               | D3                   |



![](../media/9ad0c25387b65d7eb5ca40d933b2f84c.png)

![](../media/38ea947110ec2dd6b3ee27abd895f258.png)

![](../media/28f391156fb2aec29b24e8ce09246b4c.png)



![](../media/e08a2aa856074276ab58ab45e2652f17.png)![](../media/819aafadd69170aca8063e25a198f0ae.png)