## Lezione 8: Modulo Digitale di Intensità Luminosa BH1750

**(1)Descrizione:**

![](../media/53ab41d84e93814e57076a8cc25e1aa7.png)

Il componente principale di questo sensore è il chip BH1750FVI, che è un chip integrato per l'intensità luminosa digitale.

Come mostrato nell'immagine sottostante, BH1750 è composto da un fotodiodo, un amplificatore operazionale, un acquisitore ADC, un oscillatore al quarzo, ecc. Il fotodiodo converte il segnale ottico in ingresso in un segnale elettrico tramite l'effetto fotovoltaico. Dopo essere stato amplificato dal circuito amplificatore operazionale, la tensione viene acquisita dall'ADC, quindi convertita in un numero binario a 16 bit tramite il circuito logico e memorizzata nel registro interno (Nota: più forte è la luce, maggiore è la fotocorrente e maggiore è la tensione, quindi l'intensità della luce può essere giudicata dal valore della tensione.

Tuttavia, va notato che la tensione e l'intensità luminosa sono in corrispondenza uno a uno, ma non proporzionali. Per questo motivo viene effettuata una elaborazione lineare su questo chip ed è per questo che si utilizza direttamente il circuito integrato invece dei fotodiodi). BH1750 porta fuori la linea di clock e la linea dati. Il microcontrollore può comunicare con il modulo BH1750 tramite il protocollo I2C. È possibile scegliere la modalità di funzionamento del BH1750 oppure estrarre i dati di illuminamento dal registro BH1750.

**(2)Parametri:**

Interfaccia digitale I2C, supporta una velocità massima di 400Kbps

L'uscita è Illuminamento

Gamma di misura da 1 a 65535 lux, la risoluzione minima è 1 lux

Basso consumo energetico (funzione Power down)

Filtra le interferenze dovute ai cambiamenti di luce causati dalla frequenza di rete a 50/60Hz

Supporta due indirizzi I2C, selezionati dal pin ADDR

Piccola deviazione di misura (errore massimo di precisione +/-20%)

GND massa di alimentazione

SDA pin dati bus I2C

SCL pin clock bus I2C

VCC tensione di alimentazione 3-5V

**(3)Occorrente:**

| Scheda di Controllo*1                          | Cavo USB*1                                    | Sensore BH1750FVI*1                            | Cavo 4pin F-F 350mm                            |
|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
| ![](../media/60cb7081df16f5d5169b0883a6fbf3df.png) | ![](../media/4f8d5af6dee9016b45d975adb2391d37.png) | ![](../media/53ab41d84e93814e57076a8cc25e1aa7.png) | ![](../media/626e88c46a8a1385bd0558610a17ca9f.png) |

**(4)Schema di Collegamento:**

![](../media/d7fccd89d5bed291ccce34babfbf5c91.png)

![](../media/e3b43d6080bdd3dcf111f5d594529d3a.png)![](../media/f232b12906eb5a6819c933c79183fc58.png)



![](../media/92857c7b8c368330acb6630e39bd462c.png)

(**Nota**: poiché il bus I2C può avere più dispositivi con indirizzi diversi, quando il modulo digitale di intensità luminosa viene usato insieme al modulo I2C LCD1602, non c'è conflitto perché hanno indirizzi differenti.)