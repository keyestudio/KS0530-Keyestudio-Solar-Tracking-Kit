## Lezione 6: Sensore Fotosensibile

**(1)Descrizione**

In questo kit ci sono quattro moduli sensore fotoresistore, sensori di luce ambientale, con fotoresistore come componente principale.

La resistenza di un fotoresistore varia con l'intensità della luce. Quando c'è luce intorno, la sua resistenza varia tra 5-10KΩ; mentre quando è buio, la resistenza è solo 0.2MΩ. Basandosi su questa proprietà, è possibile costruire un circuito per convertire la variazione di resistenza in variazioni di tensione.

Inoltre, il sensore è dotato di un terminale anti-inversione con passo di 2.54mm per facilitare il cablaggio. È anche compatibile con molti tipi di microcontrollori, come la serie di microcontrollori Arduino.

Qui applichiamo questo sensore con il microcontrollore Arduino. Il terminale S (segnale) del sensore deve essere collegato al pin analogico di Arduino per rilevare la variazione del valore analogico che sarà stampato sul monitor seriale. Si noti inoltre che sul sensore sono presenti due fori di posizionamento con un diametro di 4.9mm per facilitarne il fissaggio.

**(2)Parametri:**

Tensione di lavoro：3.3V-5V（DC）

Interfaccia：3PIN

Segnale di uscita：segnale analogico

Peso：2.3g

![](../media/537af5b84f09fe71a4e1f6cbeabdfc81.png)

**(3)Materiale necessario:**

| Scheda di controllo*1                           | Cavo USB*1                                    | Modulo LED Giallo*1                           | Filo DuPont 3pin*2                            | Modulo Pulsante*4                             |
|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
| ![](../media/60cb7081df16f5d5169b0883a6fbf3df.png) | ![](../media/4f8d5af6dee9016b45d975adb2391d37.png) | ![](../media/628e402ae3fc455a2812705b17d7c30d.png) | ![](../media/d57e6d40ae04a5be544cb6b4833a3e98.png) | ![](../media/537af5b84f09fe71a4e1f6cbeabdfc81.png) |

**(4).Schema di collegamento:**

| Tabella di collegamento pin |                      |
|-----------------------------|----------------------|
| Pin del **Fotoresistore**   | Pin della scheda di controllo |
| G                           | G(GND)               |
| V                           | V(5V)                |
| S                           | A0                   |

| Tabella di collegamento pin |                      |
|-----------------------------|----------------------|
| Pin del **LED**             | Pin della scheda di controllo |
| G                           | G(GND)               |
| V                           | V(5V)                |
| S                           | D3                   |



![](../media/9ad0c25387b65d7eb5ca40d933b2f84c.png)

![](../media/38ea947110ec2dd6b3ee27abd895f258.png)

![](../media/28f391156fb2aec29b24e8ce09246b4c.png)



![](../media/e08a2aa856074276ab58ab45e2652f17.png)![](../media/819aafadd69170aca8063e25a198f0ae.png)