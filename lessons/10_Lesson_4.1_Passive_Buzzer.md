## Lezione 4.1: Buzzer Passivo

**(1)Descrizione**

Ci sono molte opere interattive realizzate con Arduino. La più comune è la visualizzazione di suoni e luci. Usiamo sempre LED per fare esperimenti. Per questa lezione, progettiamo un circuito per emettere suoni. I componenti sonori universali sono buzzer e trombe. Il buzzer è più facile da usare. E il buzzer si divide in buzzer attivo e buzzer passivo. In questo esperimento, adottiamo il buzzer passivo.

Utilizzando il buzzer passivo, possiamo controllare suoni diversi immettendo onde quadre con frequenze distinte. Durante l’esperimento, controlliamo il codice per far suonare il buzzer, iniziando con un suono “tick, tick”, poi facciamo emettere al buzzer passivo “do re mi fa so la si do” e suonare brani specifici.

**(2)Parametri:**

Interfaccia di controllo: porta digitale

Tensione di lavoro: DC 3.3-5V

**(3)Materiale necessario:**

| Scheda di controllo*1                          | Cavo USB*1                                    | Buzzer Passivo*1                              | Cavo 3pin F-F 26AWG                            |
|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
| ![](../media/60cb7081df16f5d5169b0883a6fbf3df.png) | ![](../media/4f8d5af6dee9016b45d975adb2391d37.png) | ![](../media/0a27e277ef5e39bc76315d74d9bfdf46.png) | ![](../media/d57e6d40ae04a5be544cb6b4833a3e98.png) |

**(4).Schema di Collegamento：**

![](../media/427e69c5b4d8000e5aa7afaca63b8e4f.png)

I pin G, V e S del buzzer passivo sono collegati rispettivamente a G, V e D6 della scheda di controllo.

| Tabella di Collegamento Pin |                      |
|-----------------------------|----------------------|
| Pin del **Buzzer**          | Pin della Scheda di Controllo |
| G                           | G                    |
| V                           | V                    |
| S                           | D6                   |

![](../media/6ddc10c4079503d3636ea2588055c854.png)

![](../media/203ba6ad35615867f8d743ac0be4a2df.png)

![](../media/05e05166eac9d5ec81fe28bc637110d3.png)