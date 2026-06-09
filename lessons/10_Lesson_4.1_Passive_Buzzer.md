## Lección 4.1: Zumbador Pasivo

**(1)Descripción**

Hay muchas obras interactivas realizadas con Arduino. La más común es la exhibición de sonido y luz. Siempre usamos LED para hacer experimentos. Para esta lección, diseñamos un circuito para emitir sonido. Los componentes universales de sonido son el zumbador y los bocinas. El zumbador es más fácil de usar. Y el zumbador incluye zumbador activo y zumbador pasivo. En este experimento, utilizamos el zumbador pasivo.

Al usar el zumbador pasivo, podemos controlar diferentes sonidos ingresando ondas cuadradas con frecuencias distintas. Durante el experimento, controlamos el código para hacer sonar el zumbador, comenzando con un sonido de “tic, tic”, luego hacer que el zumbador pasivo emita “do re mi fa so la si do”, y tocar canciones específicas.

**(2)Parámetros:**

Interfaz de control: puerto digital

Voltaje de trabajo: DC 3.3-5V

**(3)Necesitas preparar:**

| Placa de Control*1                             | Cable USB*1                                   | Zumbador Pasivo*1                              | Cable 3pin F-F 26AWG                            |
|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
| ![](../media/60cb7081df16f5d5169b0883a6fbf3df.png) | ![](../media/4f8d5af6dee9016b45d975adb2391d37.png) | ![](../media/0a27e277ef5e39bc76315d74d9bfdf46.png) | ![](../media/d57e6d40ae04a5be544cb6b4833a3e98.png) |

**(4).Diagrama de Conexión：**

![](../media/427e69c5b4d8000e5aa7afaca63b8e4f.png)

Los pines G, V y S del zumbador pasivo están conectados a G, V y D6 de la placa de control.

| Tabla de Conexión de Pines |                      |
|----------------------------|----------------------|
| Pin del **Zumbador**       | Pin de la Placa de Control |
| G                          | G                    |
| V                          | V                    |
| S                          | D6                   |

![](../media/6ddc10c4079503d3636ea2588055c854.png)

![](../media/203ba6ad35615867f8d743ac0be4a2df.png)

![](../media/05e05166eac9d5ec81fe28bc637110d3.png)