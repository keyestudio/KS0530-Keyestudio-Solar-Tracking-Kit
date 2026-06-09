## Leçon 1.1 : Clignotement de la LED

**(1). Description :**

![](../media/90f495d6deb8516c95dea36fb1efa019.jpeg)![](../media/2aeeeb61ad2a3110303b3108f4ba31e1.png)

La LED, abréviation de diode électroluminescente, est composée de composés chimiques tels que Ga, As, P, N, etc. La LED peut clignoter en différentes couleurs en modifiant le temps de délai dans le code de test. Lorsqu'elle est contrôlée, alimentée par GND et VCC, la LED s'allume si la broche S est à un niveau haut ; sinon, elle s'éteint.

![](../media/628e402ae3fc455a2812705b17d7c30d.png)  
**(2). Paramètres :**

Interface de contrôle : port numérique

Tension de fonctionnement : DC 3,3-5V

Espacement des broches : 2,54 mm

Couleur d'affichage de la LED : jaune

**(3). Ce dont vous avez besoin :**

| Carte de contrôle*1                             | Câble USB*1                                   | Module LED jaune*1                             | Fil 3 broches F-F 26AWG                         |
|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
| ![](../media/60cb7081df16f5d5169b0883a6fbf3df.png) | ![](../media/4f8d5af6dee9016b45d975adb2391d37.png) | ![](../media/628e402ae3fc455a2812705b17d7c30d.png) | ![](../media/d57e6d40ae04a5be544cb6b4833a3e98.png) |

**(4). Schéma de connexion du module LED :**

Les broches -, + et S du module LED sont connectées respectivement aux broches G, 5V et D3 de la carte de contrôle.

![](../media/045af155ff7b448adf0e819200ccef57.png)

![](../media/a883125f029dffe6ce7c7d79645aa16d.png)

![](../media/188b0bea1512ccc6a9b3e20ff8a9265d.png)

**(5). Résultats du test :** La LED clignote à un intervalle de 1 seconde

![](../media/351380ab56f691b54869160828bc56d0.png)

**(6). Explications du code :**

pinMode(LED，OUTPUT) - Cette fonction permet de définir si la broche est en entrée (INPUT) ou en sortie (OUTPUT)

digitalWrite(LED，HIGH) - Lorsque la broche est en sortie, on peut la mettre à HIGH (sortie 5V) ou LOW (sortie 0V)