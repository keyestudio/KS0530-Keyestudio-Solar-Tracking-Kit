## Leçon 9 : Tester le moteur servo

![](../media/1e72f94dd8103419a46dded6b2969706.png)

**(1) Description :**

Le moteur servo est un actionneur rotatif à contrôle de position. Il se compose principalement d’un boîtier, d’une carte électronique, d’un moteur sans noyau, d’un engrenage et d’un capteur de position. Son principe de fonctionnement est que le servo reçoit le signal envoyé par le MCU ou le récepteur, produit un signal de référence avec une période de 20 ms et une largeur de 1,5 ms, puis compare la tension continue acquise avec la tension du potentiomètre et obtient la sortie de la différence de tension.

![](../media/69be958142b773acdae33eeef12afed7.png)

Pour le servo utilisé dans ce projet, le fil marron est la masse, le rouge est le fil positif, et l’orange est le fil de signal.

L’angle de rotation du moteur servo est contrôlé en régulant le rapport cyclique du signal PWM (modulation de largeur d’impulsion). Le cycle standard du signal PWM est de 20 ms (50 Hz). Théoriquement, la largeur est comprise entre 1 ms et 2 ms, mais en pratique, elle est comprise entre 0,5 ms et 2,5 ms. La largeur correspond à l’angle de rotation de 0° à 180°. Mais notez que pour des moteurs de marques différentes, le même signal peut correspondre à un angle de rotation différent.

![](../media/84afa5e42f1badf7713edd8ff8e306e4.png)

Plus de détails :

![](../media/ddc74f62dc936c925d28d70a1a9c2214.png)

**(2) Paramètres :**

Tension de fonctionnement : DC 4,8 V ~ 6 V

Plage d’angle de fonctionnement : environ 180 ° (à 500 → 2500 μsec)

Plage de largeur d’impulsion : 500 → 2500 μsec

Vitesse à vide : 0,12 ± 0,01 s / 60 (DC 4,8 V) 0,1 ± 0,01 s / 60 (DC 6 V)

Courant à vide : 200 ± 20 mA (DC 4,8 V) 220 ± 20 mA (DC 6 V)

Couple d’arrêt : 1,3 ± 0,01 kg·cm (DC 4,8 V) 1,5 ± 0,1 kg·cm (DC 6 V)

Courant d’arrêt : ≤ 850 mA (DC 4,8 V) ≤ 1000 mA (DC 6 V)

Courant en veille : 3 ± 1 mA (DC 4,8 V) 4 ± 1 mA (DC 6 V)

Longueur des fils : 250 ± 5 mm

Dimensions extérieures : 22,9 * 12,2 * 30 mm

Poids : 9 ± 1 g (sans bras servo)

**(3) Ce dont vous avez besoin :**

| Carte de contrôle*1                                | Câble USB*1                                    | Servo*2                                               |
|---------------------------------------------------|------------------------------------------------|-------------------------------------------------------|
| ![](../media/60cb7081df16f5d5169b0883a6fbf3df.png) | ![](../media/4f8d5af6dee9016b45d975adb2391d37.png) | ![](../media/1e72f94dd8103419a46dded6b2969706.png) |

**(4) Schéma de connexion**

Note : Le servo est connecté à G (GND), V (VCC), D9. Le fil marron est connecté à Gnd (G), le fil rouge est connecté à (V), et le fil orange est connecté à la broche numérique D9.

![](../media/2e5505ffa429fb27b8e3e054358e9128.png)

Nous allons présenter deux façons de contrôler les servos, une sans utiliser la bibliothèque **<Servo.h>** et une avec la bibliothèque **<Servo.h>**.

**9.1 Contrôle du servo sans utiliser la bibliothèque <Servo.h>**

![](../media/e6468e130d096224df89724b3a28410d.png)![](../media/eed0aa6ca3a115cf693631ec17fe8966.png)

![](../media/b198b9a0d2c060709ae8305cf3b0123a.png)

**9.2 Contrôle du servo en utilisant la bibliothèque <Servo.h>**

![](../media/8a0f67e5e5de4ae3354b61b23287d09f.png)![](../media/27998b4cb3006ca079896756473dc059.png)![](../media/65614db1ad96cb78b577178364ed5241.png)