# 4.Montaggio del Kit di Tracciamento Solare

Cose da notare prima del montaggio:

1. Prima del montaggio, si prega di rimuovere la pellicola protettiva sulle schede acriliche.

![](../media/15aad64ba3edebe3004541446eacc823.png)

2. Dovrai procurarti una batteria 18650 e un caricabatterie.

I seguenti parametri sono disponibili per l'acquisto：

| Specifiche                |                                                           |
|---------------------------|-----------------------------------------------------------|
| Dimensione                | 18650                                                     |
| Terminale positivo：      | ![](../media/a073b35e565bb6f3c29ec114dc467e6b.png)Con la parte superiore |
| Capacità                  | >2200mAh                                                 |
| Tensione nominale         | 3.7V                                                      |
| Tensione massima          | 4.2V                                                      |
| Tensione di cutoff scarica| 2.5V                                                      |
| Ricaricabile              | Sì                                                        |
| Dimensioni approssimative | 18.5mm x 65.2mm                                           |



**Parte 1**

Componenti necessari

![](../media/5b08f5dd3cc6a24979d83addfba135e3.png)

Montaggio del display 1602 e della scatola batteria

![](../media/f8aabfb9c14e1d0072298f751a2f114f.png)

![](../media/d9156cedcf4e898026c92001597b0c8a.png)

**Parte 2**

Componenti necessari

![](../media/f74712c21427762025bdb9b44cd4d748.png)

Montaggio della scheda di controllo

![](../media/081d0d21d1bd9f964723c8f323a3f177.png)

![](../media/ec727ba8f455586f2120e984ba181e03.png)

**Parte 3**

Componenti necessari

![](../media/cde397ed998ff584eceec0d4e5904531.png)

Montaggio del modulo di alimentazione a batteria al litio e del modulo di ricarica

![](../media/29ccce1d21aefa84a68b8aeacf40f964.png)

![](../media/98b5873c9dd038506b3d5c92d88741fe.png)

**Parte 4**

Componenti necessari

![](../media/4dfed35fb3b9411520d379b76b55e2e5.png)

Montaggio delle colonne di rame M3*45MM

![](../media/284424ec29729ad222977eaff93489c1.png)

![](../media/d63b4374373005a015d39bd6720642c6.png)

**Collegamento della parte inferiore del kit**

Usa il cavo DuPont M a F da 20cm per collegare il modulo di ricarica solare USB alla scheda di controllo uno. Il pin G del modulo è collegato al GND di UNO, il pin V del modulo è collegato al Vin di UNO

![](../media/fc355889b96c325ccac72e887b379b16.png)

![](../media/5c2fcdb796c2da6a41ba70061a49710b.png)

Collega il display LCD alla scheda UNO

| Tabella di collegamento pin |                      |
|-----------------------------|----------------------|
| Pin del **display LCD**      | Pin della scheda di controllo |
| GND (filo nero)              | G (GND)               |
| VCC (filo rosso)             | V (5V)                |
| SDA (filo blu)               | A4                   |
| SCL (filo verde)             | A5                   |

![](../media/ca85a47344a459c91d3a20079f9687a1.png)![](../media/f912e3561a5fdb4f7004149f5a53f828.png)

Nota: La tensione di lavoro del display LCD è 5V, assicurati che l'interruttore 3.3-5V sulla scheda di controllo sia impostato su 5V.

![](../media/62285b96cb0ec086bc79a72f776aba8f.png)

Installa una batteria 18650 all'interno del contenitore batteria, facendo attenzione che i terminali positivo e negativo della batteria corrispondano ai terminali positivo e negativo del contenitore.

Collega il contenitore batteria al modulo di ricarica solare USB e al modulo di ricarica per telefono.

![](../media/4fae5606d8a89cf3d64cad13fac2df19.png)


**Parte 5**

Componenti necessari

![](../media/d267f4fefc6c90283e57c0b9db9cc2fd.png)

![](../media/14a35fc0cc7372a856fc09880a885b78.png)

Montaggio dei sensori e moduli

![](../media/e776075a7ae1c43745cfeeb837a1c738.png)

**Parte 6**

Componenti necessari

![](../media/5e270635b02e1c4a7c1be9f2353da395.png)

![](../media/bfb641e5e42d2f84142ffcc673894e77.png)

![](../media/5975368bb162a843736b912b1c172e95.png)

**Parte 7**

Componenti necessari

![](../media/211500037f52144a3aa4b18bd39c1870.png)

![](../media/c90ed1203ee35f25e00fb3974b6082f1.png)

Nota l'orientamento della sezione superiore, il modulo buzzer e il display LCD sottostante sono nella stessa direzione.

![](../media/2e04abbf3613d39afb2cdcff86e1932c.png)

**Parte 8**

Componenti necessari

![](../media/af21087f2c4fc3ce4b51107b3258caa4.png)

![](../media/8289ff55eb2e2acdd9f3425aaaa936d3.png)

![](../media/be529a21c1ca16d114c73475fb6c0c58.png)

**Parte 9**

Componenti necessari

![](../media/459a9081531592d6dfa2b09ec0096488.png)

![](../media/b6329bbd1ea9fba2fbc79e6897141b71.png)

Diagramma di installazione (fai attenzione alla direzione di installazione del servo)

![](../media/a9b2e2050d9a0b207c7afb00fe0522ca.png)

**Parte 10**

Componenti necessari

![](../media/14fab09683530ffb01429f381608d3f7.png)

![](../media/b28eb76d7b5d5d25f807b15b91349f03.png)

**Parte 11**

Componenti necessari

![](../media/98be19dcc673e5efe24a759b0a54b7dd.png)

![](../media/81c82980c0d3ccac09a316e2fa35e99e.png)

Prima di assemblarli, devi regolare l'angolo del **servo ②**. Imposta il suo angolo iniziale a **10 gradi** per mantenere il pannello solare livellato.

**Diagramma di collegamento**

Nota: Il servo è collegato a G (GND), V (VCC), D10. Il filo marrone è collegato a Gnd (G), il filo rosso è collegato a (V), e il filo arancione è collegato al pin digitale D10.

![](../media/b36a6b47705944879c4200ab1a56b75e.jpeg)

![](../media/6d2a91b6d38e208bec80b10ac6faa08d.png)![](../media/26b8abdd5862d20ced793e36668ac9cf.png)

Diagramma di installazione (fai attenzione all'angolo del servo, come mostrato in figura)![](../media/15f493110d37113d992fd9e5a76450f5.png)![](../media/fc8e14e930751266c581a1685afbcf97.png)

**Nota:** Non puoi ruotare l'albero del servo finché non hai completato questo passaggio di fissaggio, altrimenti dovrai reimpostarlo a 10 gradi usando il codice sopra.

**Parte 12**

Componenti necessari

![](../media/459a9081531592d6dfa2b09ec0096488.png)

![](../media/480994b79ba58d1c8c57b8464249f347.png)

![](../media/eafd29872cf5e70d337f270365d35eef.png)

![](../media/3fb558672b4f1ef52b40b5cb60a93882.png)

**Parte 13**

Componenti necessari

![](../media/459a9081531592d6dfa2b09ec0096488.png)

![](../media/7b46133b504120d53fb653671b6352b9.png)

![](../media/d33a267034b2906f56efec5a67019458.png)

![](../media/27efd1be66e14cfacc161c620e513c1c.png)

**Parte 14**

Componenti necessari

![](../media/98be19dcc673e5efe24a759b0a54b7dd.png)

![](../media/a2bc82e4973fde85b2c549a0da860400.png)

Prima di assemblarli, devi regolare l'angolo del **servo ①**. Imposta il suo angolo iniziale a **90 gradi**.

**Diagramma di collegamento**

Nota: Il servo è collegato a G (GND), V (VCC), D9. Il filo marrone è collegato a Gnd (G), il filo rosso è collegato a (V), e il filo arancione è collegato al pin digitale D9.

![](../media/2e5505ffa429fb27b8e3e054358e9128.png)

![](../media/e539bcb920b0b1b1420b388c01003e4c.png)

![](../media/f1ffd660bc1faab0118f50ed08794c3d.png)

Diagramma di installazione

**Nota:** Non puoi ruotare l'albero del servo finché non hai completato questo passaggio di fissaggio, altrimenti dovrai reimpostarlo a 90 gradi usando il codice sopra.

![](../media/da31eb334e0c1e9d7d81060359ecba73.png)

![](../media/e52f51035e537315152c7498cf9bd6eb.png)

**Parte 15**

Componenti necessari

![](../media/170390970615486d961355a328e60a86.png)

![](../media/0525cb77644ddb9b9c5c355785b0e897.png)

![](../media/cd803e2e6709d1633a22cc6f57de88ea.png)

**Parte 16**

Componenti necessari

![](../media/3b52ffb52dae7c7c450af6fe3d3d9402.png)

![](../media/9991f2d956f33da3078438e1dfe37000.png)

![](../media/b56cc707cebe05c8e98b6f6afc795423.png)

**Parte 17**

Componenti necessari

![](../media/2d22837fabdcc1c8c34a9927129ddcb5.png)

![](../media/f21718a60ac270bf9bb88a8b2b2c05ab.png)

![](../media/4a5cc2caf5c79ef0538cf1861fa73298.png)

**Parte 18**

Componenti necessari

![](../media/f0a1f87a34e18a1c1f22ffb93fc98c2c.png)

![](../media/342f6b93cbaca41ee062352702267c95.png)

![](../media/77b94d52457f9104fc85ae91d3c18027.png)

**Parte 19**

Componenti necessari

![](../media/7a023d5f4e9a13cf7d2141ab4700d811.png)

![](../media/6bf49abc10882b8ead3d3aede99198c7.png)

![](../media/db89b632a149b4431d9e01a2a373851d.png)

**Collegamento della parte superiore del kit**

1)![](../media/469d80ec804ed66cc813071e3cf56aa8.png)Collega il servo inferiore al pin D9 della scheda di controllo UNO, e il servo superiore al pin D10 della scheda di controllo UNO. Collega il filo marrone del servo a G, il filo rosso a V, e il filo giallo a S.

2)Inserisci il jack del pannello solare all'estremità SOLAR4.8-6.0V del modulo di ricarica solare USB.

![](../media/56b3303300870f07a6cf4e38ab1fa998.png)

3)Successivamente, useremo sette cavi DuPont 3P 26AWG 200mm F-F per collegare i fotosensori, il modulo buzzer, il modulo pulsante e il sensore di temperatura e umidità DHT11 alla scheda uno.

![](../media/ffb7fb703ade99a7d7a932da7c781d81.png)

Il sensore fotosensibile a sinistra è collegato al pin A0 della scheda UNO.

Il sensore fotosensibile a destra è collegato al pin A1 della scheda UNO.

Il sensore fotosensibile sul retro è collegato al pin A2 della scheda UNO.

Il sensore fotosensibile sul davanti è collegato al pin A3 della scheda UNO.

Il modulo pulsante è collegato al pin D2 della scheda UNO.

Il modulo buzzer è collegato al pin D6 della scheda UNO.

Il sensore di temperatura e umidità dht11 è collegato al pin D7 della scheda UNO.

![](../media/9822f50f9d1906833347175a42ff3fea.png)

**Nota: Per evitare collegamenti invertiti, consigliamo di cablare secondo il seguente metodo：**

- Il pin G del modulo è collegato al pin G di UNO con un filo nero;

- Il pin V del modulo è collegato al pin V di UNO con un filo rosso;

- Il pin S del modulo è collegato al pin S di UNO con un filo arancione.

Come mostrato nel modo in cui il sensore di temperatura e umidità dht11 è collegato alla scheda UNO.

![](../media/8beddf04e8c9ee1c94c91b225328036e.png)

4)Infine, collega il modulo digitale di intensità luminosa bh1750 alla scheda UNO.

![](../media/d7fccd89d5bed291ccce34babfbf5c91.png)