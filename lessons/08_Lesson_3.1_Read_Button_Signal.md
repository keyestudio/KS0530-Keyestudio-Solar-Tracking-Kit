## Lezione 3.1: Leggere il Segnale Digitale del Modulo Pulsante

**(1)Descrizione**

In questo progetto, intendiamo utilizzare il modulo pulsante per controllare il LED.

**(2)Parametri:**

Tensione di lavoro：DC 3.3-5V

Segnale di controllo：segnale digitale

Dimensione：34mm

Peso：3.8g

**(3)Materiale necessario:**

| Scheda di Controllo*1                           | Cavo USB*1                                     | Modulo LED Giallo*1                            | Cavo 3pin F-F 26AWG*2                          | Modulo Pulsante*1                              |
|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
| ![](../media/60cb7081df16f5d5169b0883a6fbf3df.png) | ![](../media/4f8d5af6dee9016b45d975adb2391d37.png) | ![](../media/628e402ae3fc455a2812705b17d7c30d.png) | ![](../media/d57e6d40ae04a5be544cb6b4833a3e98.png) | ![](../media/6ba7e34f89af660ac90bb2552907ef3f.png) |

**(4)Schema di Collegamento**

| Tabella di Collegamento Pin |                      |
|-----------------------------|----------------------|
| Pin del **Pulsante**        | Pin della Scheda di Controllo |
| G                           | G(GND)               |
| V                           | V(5V)                |
| S                           | D2                   |

| Tabella di Collegamento Pin |                      |
|-----------------------------|----------------------|
| Pin del **LED**             | Pin della Scheda di Controllo |
| G                           | G(GND)               |
| V                           | V(5V)                |
| S                           | D3                   |

![](../media/024ba0bbd683bf28f7783c8645f488be.png)

![](../media/32bb1f78caa01e562a769a0afe64da74.png)

![](../media/cb4d53c7c2057f85eb4255c453e31001.png)

![](../media/9688c560b185edabcf17838af3353b36.png)

**(5)Spiegazione del Codice:**

Serial.begin(9600) - inizializza la comunicazione seriale e imposta la velocità di trasmissione a 9600

pinMode(pin, INPUT) - usa la funzione pinMode() per indicare ad Arduino se il pin è di output o di input

digitalRead(pin) - legge il livello digitale dei pin, può essere HIGH o LOW