# 6.Risoluzione dei problemi

Ecco alcune soluzioni ai problemi comuni che potrebbero aiutarti.

Se non trovi la risposta che cerchi qui, contatta il nostro supporto tecnico:

Amazon: [service@keyestudio.com](mailto:service@keyestudio.com)

AliExpress: [tivon@keyestudio.com](mailto:tivon@keyestudio.com)

Altri canali: [sunny@keyestudio.com](mailto:sunny@keyestudio.com)

Per una risoluzione più rapida e professionale del tuo problema, includi queste informazioni quando ci invii un'email:

Il numero dell'ordine o da dove hai acquistato questo prodotto

I problemi che incontri, cerca di includere descrizioni dettagliate, foto o video.

Abbiamo bisogno di più informazioni di "Non funziona." Per favore, fornisci dettagli su cosa vuoi ottenere e cosa hai provato.

Grazie!

**(1) La scheda di controllo non viene riconosciuta dal computer.**

-Per favore verifica che il cavo USB sia in buone condizioni e che la porta USB del tuo computer sia disponibile.

**(2) La porta USB non viene riconosciuta dal computer.**

-Verifica se hai installato il driver USB

**(3) Problemi di codice/Fallimento caricamento/Errore di codice.**

Queste ragioni possono causare problemi con il tuo codice:

1) Il driver non è installato.

2) Il tipo di scheda e la porta COM non sono selezionati correttamente nell'Arduino IDE.

3) Il file della libreria non è installato.

(Per favore segui **2.Getting Started with Arduino** per risolvere i problemi sopra indicati)

![](../media/224c21b5aa737f11de351dbd9868e317.png)

**(4) Scarso contatto USB**

Se non hai i problemi indicati nei punti 1-3, verifica che la connessione del cavo USB sia buona, prova a scollegarlo e ricollegarlo, quindi carica di nuovo il codice.

**(5) Il kit di tracciamento solare assemblato non risponde.**

1) Queste ragioni possono causare il mancato funzionamento del robot:

1) cablaggio errato

2) Non hai caricato il codice

3) Fallimento caricamento/Errore di codice

4) Non hai acceso l'interruttore 5V sulla scheda di controllo e l'interruttore di alimentazione sul modulo di ricarica.

![](../media/67fc5cb5b7eabda71fcb2296a8def597.png)![](../media/edc80fe0bd7a1cce69bd760ab5d247bc.png)

5) Batteria insufficiente

Devi mantenere la batteria 18650 sufficientemente carica poiché sarà necessaria per alimentare due servomotori, un display LCD, quattro sensori di luce, un sensore DHT11 e il modulo pulsante.

**(6) Servo bloccato/servo caldo**

Dovrai regolare l'angolo iniziale del servo prima di assemblarli e non modificare l'angolo fino al completamento dell'assemblaggio per assicurarti che il servo funzioni correttamente per il kit di tracciamento solare.

**(7) Il pannello solare non segue il movimento della fonte luminosa o del sole**

Quando il sensore di luce ambientale rileva variazioni nell'intensità luminosa, i servomotori ruotano il pannello solare nella posizione in cui la luce è più forte.

In un ambiente con illuminazione uniforme, il pannello solare potrebbe non seguire il movimento della fonte luminosa. Potresti dover applicare una fonte luminosa molto intensa, oppure applicare una fonte luminosa in un'area con luce debole per far muovere il pannello solare con la fonte luminosa. Il pannello solare potrebbe non muoversi verso il sole perché la differenza di intensità luminosa rilevata da ciascun sensore di luce ambientale potrebbe non essere significativa.

1.  **Il pannello solare si muove molto lentamente, a scatti o si blocca.**
2.  Verifica che il cablaggio del servo sia organizzato e non bloccato in modo che il servo abbia abbastanza spazio per muoversi.
3.  La batteria 18650 deve essere completamente carica
4.  Puoi premere il modulo pulsante per regolare la quantità di rotazione del servo.