# 5.Dispositivo Pannello Solare con Funzioni Multiple

Il dispositivo pannello solare assemblato è pronto!

Nelle lezioni precedenti, abbiamo studiato solo la funzione e il principio di funzionamento di una certa parte elettronica singolarmente, e testato se può funzionare normalmente.

Ora li abbiamo fatti lavorare insieme per costruire un dispositivo pannello solare con più funzioni.

Mantieni la batteria 18650 sufficientemente carica poiché sarà necessaria per alimentare due servomotori, un display LCD, quattro sensori di luce, un sensore DHT11 e un modulo pulsante.

![](../media/f4b78ac6371097b2e32409c226873651.png)

![](../media/94d386c19c8b95904852ee2a11a4f272.png)

Dopo che il codice è stato caricato con successo, accendi l'interruttore di alimentazione del modulo di ricarica e premi l'interruttore di alimentazione della scheda di controllo a 5V.

![](../media/edc80fe0bd7a1cce69bd760ab5d247bc.png)![](../media/67fc5cb5b7eabda71fcb2296a8def597.png)

Il servomotore ruoterà all'angolo iniziale. Quando il sensore di luce ambientale rileva variazioni nell'intensità luminosa, i servomotori ruotano il pannello solare nella posizione dove la luce è più intensa e l'LCD1602 mostra il valore dell'intensità luminosa e della temperatura e umidità rilevati rispettivamente dal BH1750 e dal DHT11.

Se ritieni che il pannello solare ruoti troppo lentamente o che il pannello solare tremi, puoi regolare la velocità di rotazione del servomotore tramite il modulo pulsante.

Ad esempio, entro il tempo specificato, il servomotore ruota di 1° ogni volta. Dopo aver premuto il pulsante, il servomotore ruoterà di 2° ogni volta nello stesso intervallo di tempo.

Premilo di nuovo e il servomotore ruoterà di 3° ogni volta nello stesso intervallo di tempo. Per analogia, il servomotore può essere regolato per ruotare fino a 5° ogni volta nello stesso intervallo di tempo.

**“byte resolution = 1”**

Puoi regolare la risoluzione per cambiare l'angolo di rotazione del servomotore. Premi il pulsante per cambiare la risoluzione da 1° a 5°. Puoi anche modificare `byte m_speed = 10` per impostare il tempo di ritardo e regolare la velocità del servomotore; più lungo è il tempo, più bassa è la velocità.

![](../media/55bbbb88c4e18c1b90ce588fa76d0e3d.png)