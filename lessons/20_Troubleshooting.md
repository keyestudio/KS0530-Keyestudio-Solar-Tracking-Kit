# 6.Dépannage

Voici quelques solutions aux problèmes courants qui pourraient vous aider.

Si vous ne trouvez pas la réponse que vous cherchez ici, veuillez contacter notre support technique :

Amazon : [service@keyestudio.com](mailto:service@keyestudio.com)

AliExpress : [tivon@keyestudio.com](mailto:tivon@keyestudio.com)

Autres canaux : [sunny@keyestudio.com](mailto:sunny@keyestudio.com)

Pour une résolution plus rapide et professionnelle de votre problème, veuillez inclure ces informations lors de l'envoi de votre e-mail :

Votre numéro de commande ou l'endroit où vous avez acheté ce produit

Les problèmes rencontrés, essayez d'inclure des descriptions détaillées, des photos ou des vidéos.

Nous avons besoin de plus d'informations que "Ça ne marche pas." Merci de nous donner des détails précis sur ce que vous souhaitez accomplir et ce que vous avez essayé.

Merci !

**(1) La carte de contrôle n'est pas reconnue par l'ordinateur.**

-Veuillez vérifier si le câble USB est en bon état et si le port USB de votre ordinateur est disponible.

**(2) Le port USB n’est pas reconnu par l’ordinateur.**

-Vérifiez si vous avez installé le pilote USB.

**(3) Problèmes de code / Échec de téléchargement / Erreur de code.**

Ces raisons peuvent causer des problèmes avec votre code :

1) Le pilote n'est pas installé.

2) Le type de carte et le port COM ne sont pas correctement sélectionnés dans l'IDE Arduino.

3) Le fichier de la bibliothèque n'est pas installé.

(Veuillez suivre **2.Getting Started with Arduino** pour résoudre les problèmes ci-dessus)

![](../media/224c21b5aa737f11de351dbd9868e317.png)

**(4) Mauvais contact USB**

Si vous n'avez pas les problèmes mentionnés en 1-3, vérifiez que la connexion du câble USB est bonne, essayez de le rebrancher, puis téléchargez à nouveau le code.

**(5) Le kit de suivi solaire assemblé ne répond pas.**

1) Ces raisons peuvent empêcher le robot de fonctionner :

1) mauvais câblage

2) Vous n'avez pas téléchargé le code

3) Échec de téléchargement / Erreur de code

4) Vous n'avez pas activé l'interrupteur 5V sur la carte de contrôle ni l'interrupteur d'alimentation sur le module de charge.

![](../media/67fc5cb5b7eabda71fcb2296a8def597.png)![](../media/edc80fe0bd7a1cce69bd760ab5d247bc.png)

5) Batterie insuffisamment chargée

Vous devez maintenir la batterie 18650 suffisamment chargée car elle alimentera deux servomoteurs, un écran LCD, quatre capteurs de lumière, un capteur DHT11 et un module bouton.

**(6) Servomoteur bloqué / servomoteur chaud**

Vous devrez ajuster l'angle initial du servomoteur avant de les assembler et ne pas changer l'angle jusqu'à ce que l'assemblage soit terminé pour garantir que le servomoteur fonctionne correctement pour le kit de suivi solaire.

**(7) Le panneau solaire ne suit pas le mouvement de la source lumineuse ou du soleil**

Lorsque le capteur de lumière ambiante détecte des changements d'intensité lumineuse, les servomoteurs font pivoter le panneau solaire vers la position où la lumière est la plus forte.

Dans un environnement à éclairage uniforme, le panneau solaire peut ne pas suivre le mouvement de la source lumineuse. Vous devrez peut-être appliquer une source lumineuse très forte, ou appliquer une source lumineuse dans une zone peu éclairée pour que le panneau solaire se déplace avec la source lumineuse. Le panneau solaire peut ne pas se diriger vers le soleil car la différence d'intensité lumineuse détectée par chaque capteur de lumière ambiante peut ne pas être importante.

1.  **Le panneau solaire se déplace très lentement, fait des à-coups ou se bloque.**
2.  Vérifiez que le câblage du servomoteur est organisé et non coincé afin que le servomoteur ait suffisamment d'espace pour bouger.
3.  La batterie 18650 doit être complètement chargée.
4.  Vous pouvez appuyer sur le module bouton pour ajuster la quantité de rotation du servomoteur.