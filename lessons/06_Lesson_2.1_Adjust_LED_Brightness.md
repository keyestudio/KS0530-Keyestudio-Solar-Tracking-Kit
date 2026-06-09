## Lezione 2.1: Regolare la Luminosità del LED

L'hardware richiesto per questa lezione, la configurazione dell'IDE Arduino e il cablaggio tra il modulo LED e la scheda di controllo sono gli stessi della **Lezione 1.1**.

**(1).Descrizione：**

Nella lezione precedente, abbiamo controllato l'accensione e lo spegnimento del LED e lo abbiamo fatto lampeggiare.

In questo progetto, controlleremo la luminosità del LED tramite PWM per simulare un effetto di respiro. Analogamente, è possibile modificare la lunghezza del passo e il tempo di ritardo nel codice per mostrare diversi effetti di respiro.

![](../media/d1f48d97cbe0b6a29389c20533bfc00c.png)PWM è un metodo per controllare l'uscita analogica tramite mezzi digitali. Il controllo digitale viene utilizzato per generare onde quadre con diversi cicli di lavoro (un segnale che passa costantemente tra livelli alti e bassi) per controllare l'uscita analogica. In generale, la tensione di ingresso della porta è 0V e 5V. Cosa succede se è richiesta una tensione di 3V? O se si vuole commutare tra 1V, 3V e 3,5V? Non possiamo cambiare continuamente la resistenza. In questa situazione, è necessario controllare tramite PWM.

Per l'uscita di tensione della porta digitale di Arduino, ci sono solo LOW e HIGH, che corrispondono a 0V e 5V. Puoi definire LOW come 0 e HIGH come 1, e far uscire ad Arduino cinquecento segnali 0 o 1 in un secondo.

Se escono cinquecento 1, sono 5V; se sono tutti 0, sono 0V. Se si esce in modo alternato 010101010101, allora la porta di uscita è a 2,5V, che è simile a mostrare un film. Il film che guardiamo non è completamente continuo. In realtà mostra 25 immagini al secondo. In questo caso, l'uomo non riesce a percepirlo, né il PWM. Se si vuole una tensione diversa, è necessario controllare il rapporto tra 0 e 1. Più segnali 0 e 1 vengono emessi per unità di tempo, più preciso è il controllo.

![](../media/9ce4c120ad6d763102eb2544777c8536.png)

![](../media/fa2a60fcb812e3bb3a4776ac96bef1cb.png)

**(2).Spiegazione del Codice:**

Quando dobbiamo ripetere alcune istruzioni, possiamo usare l'istruzione FOR.

Il formato dell'istruzione FOR è mostrato di seguito:

![](../media/f413519de8de75a850c98ac7695300fa.jpeg)

Sequenza ciclica FOR:

Giro 1：1 → 2 → 3 → 4

Giro 2：2 → 3 → 4

…

Fino a quando il numero 2 non è più valido, il ciclo "for" termina.

Dopo aver compreso questo ordine, torniamo al codice:

for (int value = 0; value < 255; value=value+1){

…}

for (int value = 255; value >0; value=value-1){

…}

Le due istruzioni “for” fanno aumentare value da 0 a 255, poi diminuirlo da 255 a 0, poi aumentare a 255, … in un ciclo infinito.

C'è una nuova funzione nel seguito —– analogWrite()

Sappiamo che la porta digitale ha solo due stati, 0 e 1. Quindi come inviare un valore analogico a una porta digitale? Qui serve questa funzione. Osserviamo la scheda Arduino e troviamo 6 pin contrassegnati con “\~” che possono emettere segnali PWM.

Il formato della funzione è il seguente:

analogWrite(pin,value)

analogWrite() viene usata per scrivere un valore analogico da 0 a 255 per la porta PWM, quindi il valore è nell'intervallo 0~255. Attenzione a scrivere solo sui pin digitali con funzione PWM, come i pin 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 44, 45, 46.

PWM è una tecnologia per ottenere quantità analogiche tramite metodo digitale. Il controllo digitale forma un'onda quadra, e il segnale a onda quadra ha solo due stati, acceso e spento (cioè livelli alto o basso). Controllando il rapporto tra la durata dell'accensione e dello spegnimento, si può simulare una tensione variabile da 0 a 5V. Il tempo di accensione (accademicamente chiamato livello alto) è chiamato larghezza dell'impulso, quindi PWM è anche chiamato modulazione della larghezza dell'impulso.

Attraverso le seguenti cinque onde quadre, approfondiamo il PWM.

![](../media/7c9452d3bb97cfee514ef146045866a8.png)

Nella figura sopra, la linea verde rappresenta un periodo, e il valore di analogWrite() corrisponde a una percentuale chiamata anche Duty Cycle. Il duty cycle indica che la durata del livello alto è divisa per la durata del livello basso in un ciclo. Dall'alto verso il basso, il duty cycle della prima onda quadra è 0% e il suo valore corrispondente è 0. La luminosità del LED è minima, cioè spento. Più dura il livello alto, più il LED è luminoso. Pertanto, l'ultimo duty cycle è 100%, che corrisponde a 255, il LED è al massimo della luminosità. Il 25% significa più scuro.

Il PWM è usato principalmente per regolare la luminosità del LED o la velocità di rotazione del motore.

Ha un ruolo fondamentale nel controllo delle auto robotiche intelligenti.