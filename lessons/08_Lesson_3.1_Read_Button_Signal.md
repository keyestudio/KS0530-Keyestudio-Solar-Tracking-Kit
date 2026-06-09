## Leçon 3.1 : Lire le signal numérique du module bouton

**(1) Description**

Dans ce projet, nous avons l'intention d'utiliser le module bouton-poussoir pour contrôler la LED.

**(2) Paramètres :**

Tension de fonctionnement : DC 3.3-5V

Signal de contrôle : signal numérique

Taille : 34mm

Poids : 3.8g

**(3) Ce dont vous avez besoin :**

| Carte de contrôle*1                             | Câble USB*1                                   | Module LED jaune*1                             | Fil 3 broches F-F 26AWG*2                      | Module bouton-poussoir*1                        |
|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
| ![](../media/60cb7081df16f5d5169b0883a6fbf3df.png) | ![](../media/4f8d5af6dee9016b45d975adb2391d37.png) | ![](../media/628e402ae3fc455a2812705b17d7c30d.png) | ![](../media/d57e6d40ae04a5be544cb6b4833a3e98.png) | ![](../media/6ba7e34f89af660ac90bb2552907ef3f.png) |

**(4) Schéma de connexion**

| Tableau de connexion des broches |                      |
|---------------------------------|----------------------|
| Broche du **bouton**             | Broche de la carte de contrôle |
| G                               | G(GND)               |
| V                               | V(5V)                |
| S                               | D2                   |

| Tableau de connexion des broches |                      |
|---------------------------------|----------------------|
| Broche de la **LED**             | Broche de la carte de contrôle |
| G                               | G(GND)               |
| V                               | V(5V)                |
| S                               | D3                   |

![](../media/024ba0bbd683bf28f7783c8645f488be.png)

![](../media/32bb1f78caa01e562a769a0afe64da74.png)

![](../media/cb4d53c7c2057f85eb4255c453e31001.png)

![](../media/9688c560b185edabcf17838af3353b36.png)

**(5) Explication du code :**

Serial.begin(9600) - initialise la communication série et définit le débit en bauds à 9600

pinMode(pin, INPUT) - utilise la fonction pinMode() pour indiquer à Arduino si la broche est une broche de sortie ou d'entrée

digitalRead(pin) - lit le niveau numérique des broches, soit HIGH soit LOW