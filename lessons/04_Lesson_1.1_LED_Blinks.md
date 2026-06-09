## Lezione 1.1: Lampeggio LED

**(1).Descrizione：**

![](../media/90f495d6deb8516c95dea36fb1efa019.jpeg)![](../media/2aeeeb61ad2a3110303b3108f4ba31e1.png)

LED, abbreviazione di diodi a emissione luminosa, è composto da composti chimici come Ga, As, P, N, e così via. Il LED può lampeggiare in diversi colori modificando il tempo di ritardo nel codice di prova. Quando è sotto controllo, alimentando GND e VCC, il LED si accenderà se il terminale S è a livello alto; altrimenti si spegnerà.

![](../media/628e402ae3fc455a2812705b17d7c30d.png)
**(2).Parametri：**

Interfaccia di controllo: porta digitale

Tensione di lavoro: DC 3.3-5V

Spaziatura pin: 2.54mm

Colore di visualizzazione LED: giallo

**(3).Materiale necessario:**

| Scheda di controllo*1                                | Cavo USB*1                                    | Modulo LED giallo*1                            | Cavo 3pin F-F 26AWG                             |
|-----------------------------------------------------|------------------------------------------------|------------------------------------------------|-------------------------------------------------|
| ![](../media/60cb7081df16f5d5169b0883a6fbf3df.png) | ![](../media/4f8d5af6dee9016b45d975adb2391d37.png) | ![](../media/628e402ae3fc455a2812705b17d7c30d.png) | ![](../media/d57e6d40ae04a5be544cb6b4833a3e98.png) |

**(4).Schema di collegamento del modulo led：**

I pin -, + e S del modulo LED sono collegati rispettivamente ai pin G, 5V e D3 della scheda di controllo.

![](../media/045af155ff7b448adf0e819200ccef57.png)

![](../media/a883125f029dffe6ce7c7d79645aa16d.png)

![](../media/188b0bea1512ccc6a9b3e20ff8a9265d.png)

**(5).Risultati del test:** Il LED lampeggia con un intervallo di 1s

![](../media/351380ab56f691b54869160828bc56d0.png)

**(6).Spiegazione del codice:**

pinMode(LED，OUTPUT) - Questa funzione indica che il pin è configurato come INPUT o OUTPUT

digitalWrite(LED，HIGH) - Quando il pin è OUTPUT, possiamo impostarlo su HIGH (uscita 5V) o LOW (uscita 0V)