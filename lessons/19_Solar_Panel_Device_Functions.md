# 5. Dispositif de panneau solaire avec fonctions multiples

Le dispositif de panneau solaire assemblé est prêt !

Dans les leçons précédentes, nous avons uniquement étudié la fonction et le principe de fonctionnement d'une certaine pièce électronique individuellement, et testé si elle pouvait fonctionner normalement.

Maintenant, nous les faisons fonctionner ensemble pour construire un dispositif de panneau solaire avec plusieurs fonctions.

Gardez la batterie 18650 suffisamment chargée car elle sera nécessaire pour alimenter deux servomoteurs, un écran LCD, quatre capteurs de lumière, un capteur DHT11 et un module bouton.

![](../media/f4b78ac6371097b2e32409c226873651.png)

![](../media/94d386c19c8b95904852ee2a11a4f272.png)

Après le téléchargement réussi du code, allumez l'interrupteur d'alimentation du module de charge et appuyez sur l'interrupteur d'alimentation de la carte de contrôle sur 5V.

![](../media/edc80fe0bd7a1cce69bd760ab5d247bc.png)![](../media/67fc5cb5b7eabda71fcb2296a8def597.png)

Le servomoteur tournera vers l'angle initial. Lorsque le capteur de lumière ambiante détecte des changements d'intensité lumineuse, les servomoteurs orientent le panneau solaire vers la position où la lumière est la plus forte et l'écran LCD1602 affiche la valeur de l'intensité lumineuse ainsi que la température et l'humidité détectées respectivement par le BH1750 et le DHT11.

Si vous trouvez que le panneau solaire tourne trop lentement ou que le panneau solaire tremble, vous pouvez ajuster la vitesse de rotation du servomoteur via le module bouton.

Par exemple, dans le temps spécifié, le servomoteur tourne de 1° à chaque fois. Après avoir appuyé sur le bouton, le servomoteur tournera de 2° à chaque fois dans le même temps.

Appuyez de nouveau et le servomoteur tournera de 3° à chaque fois dans le même temps. Par analogie, le servomoteur peut être réglé pour tourner jusqu'à 5° à chaque fois dans le même temps.

**“byte resolution = 1”**

Vous pouvez ajuster la résolution pour changer l'angle de rotation du servomoteur. Appuyez sur le bouton pour changer la résolution de 1° à 5°. Vous pouvez également modifier `byte m_speed = 10` pour régler le temps de délai afin d'ajuster la vitesse du servomoteur ; plus le temps est long, plus la vitesse est faible.

![](../media/55bbbb88c4e18c1b90ce588fa76d0e3d.png)