## Lezione 9: Test del Servo Motor

![](../media/1e72f94dd8103419a46dded6b2969706.png)

**(1)Descrizione：**

Il servo motor è un attuatore rotativo a controllo di posizione. È composto principalmente da involucro, scheda circuito, motore core-less, ingranaggi e sensore di posizione. Il suo principio di funzionamento è che il servo riceve il segnale inviato da MCU o ricevitore, e produce un segnale di riferimento con un periodo di 20ms e una larghezza di 1,5ms, quindi confronta la tensione di polarizzazione continua acquisita con la tensione del potenziometro e ottiene l'uscita della differenza di tensione.

![](../media/69be958142b773acdae33eeef12afed7.png)

Per il servo utilizzato in questo progetto, il filo marrone è la massa, quello rosso è il filo positivo, e quello arancione è il filo del segnale.

L'angolo di rotazione del servo motor è controllato regolando il duty cycle del segnale PWM (Pulse-Width Modulation). Il ciclo standard del segnale PWM è di 20ms (50Hz). Teoricamente, la larghezza è distribuita tra 1ms e 2ms, ma in realtà è tra 0,5ms e 2,5ms. La larghezza corrisponde all'angolo di rotazione da 0° a 180°. Ma si noti che per motori di marche diverse, lo stesso segnale può avere angoli di rotazione differenti.

![](../media/84afa5e42f1badf7713edd8ff8e306e4.png)

Ulteriori dettagli:

![](../media/ddc74f62dc936c925d28d70a1a9c2214.png)

**(2)Parametri:**

Tensione di lavoro: DC 4.8V ~ 6V

Intervallo angolo operativo: circa 180 ° (a 500 → 2500 μsec)

Intervallo larghezza impulso: 500 → 2500 μsec

Velocità a vuoto: 0.12 ± 0.01 sec / 60 (DC 4.8V) 0.1 ± 0.01 sec / 60 (DC 6V)

Corrente a vuoto: 200 ± 20mA (DC 4.8V) 220 ± 20mA (DC 6V)

Coppia di arresto: 1.3 ± 0.01kg · cm (DC 4.8V) 1.5 ± 0.1kg · cm (DC 6V)

Corrente di arresto: ≦ 850mA (DC 4.8V) ≦ 1000mA (DC 6V)

Corrente in standby: 3 ± 1mA (DC 4.8V) 4 ± 1mA (DC 6V)

Lunghezza del cavo: 250 ± 5 mm

Dimensioni esterne: 22.9 * 12.2 * 30mm

Peso: 9 ± 1 g (senza leva del servo)

**(3)Occorrente:**

| Scheda di controllo*1                                | Cavo USB*1                                    | Servo*2                                               |
|-------------------------------------------------|-------------------------------------------------|--------------------------------------------------------|
| ![](../media/60cb7081df16f5d5169b0883a6fbf3df.png) | ![](../media/4f8d5af6dee9016b45d975adb2391d37.png) | ![](../media/1e72f94dd8103419a46dded6b2969706.png) |

**(4)Schema di collegamento**

Nota: Il servo è collegato a G (GND), V (VCC), D9. Il filo marrone è collegato a Gnd (G), il filo rosso è collegato a (V), e il filo arancione è collegato al pin digitale D9.

![](../media/2e5505ffa429fb27b8e3e054358e9128.png)

Presenteremo due modi per controllare i servo, uno senza usare il file di libreria **<Servo.h>** e uno con il file di libreria **<Servo.h>**.

**9.1 Controllare il servo senza usare la libreria <Servo.h>**

![](../media/e6468e130d096224df89724b3a28410d.png)![](../media/eed0aa6ca3a115cf693631ec17fe8966.png)

![](../media/b198b9a0d2c060709ae8305cf3b0123a.png)

**9.2 Controllare il servo usando la libreria <Servo.h>**

![](../media/8a0f67e5e5de4ae3354b61b23287d09f.png)![](../media/27998b4cb3006ca079896756473dc059.png)![](../media/65614db1ad96cb78b577178364ed5241.png)