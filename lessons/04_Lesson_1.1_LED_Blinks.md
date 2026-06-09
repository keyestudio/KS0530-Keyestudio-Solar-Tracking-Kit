## Lección 1.1: Parpadeo del LED

**(1).Descripción：**

![](../media/90f495d6deb8516c95dea36fb1efa019.jpeg)![](../media/2aeeeb61ad2a3110303b3108f4ba31e1.png)

LED, la abreviatura de diodos emisores de luz, está compuesto por compuestos químicos como Ga, As, P, N, entre otros. El LED puede parpadear en diversos colores al alterar el tiempo de retardo en el código de prueba. Cuando está en control, al alimentar GND y VCC, el LED se encenderá si el extremo S está en un nivel alto; de lo contrario, se apagará.

![](../media/628e402ae3fc455a2812705b17d7c30d.png)
**(2).Parámetros：**

Interfaz de control: puerto digital

Voltaje de trabajo: DC 3.3-5V

Espaciado de pines: 2.54mm

Color de visualización del LED: amarillo

**(3).Necesitas preparar:**

| Placa de control*1                             | Cable USB*1                                   | Módulo LED amarillo*1                         | Cable 3pin F-F 26AWG                            |
|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
| ![](../media/60cb7081df16f5d5169b0883a6fbf3df.png) | ![](../media/4f8d5af6dee9016b45d975adb2391d37.png) | ![](../media/628e402ae3fc455a2812705b17d7c30d.png) | ![](../media/d57e6d40ae04a5be544cb6b4833a3e98.png) |

**(4).Diagrama de conexión del módulo led：**

Los pines -, + y S del módulo LED se conectan a los pines G, 5V y D3 del puerto de la placa de control.

![](../media/045af155ff7b448adf0e819200ccef57.png)

![](../media/a883125f029dffe6ce7c7d79645aa16d.png)

![](../media/188b0bea1512ccc6a9b3e20ff8a9265d.png)

**(5).Resultados de la prueba:** El LED parpadea con un intervalo de 1s

![](../media/351380ab56f691b54869160828bc56d0.png)

**(6).Explicaciones del código:**

pinMode(LED，OUTPUT) - Esta función puede indicar que el pin es INPUT o OUTPUT

digitalWrite(LED，HIGH) - Cuando el pin es OUTPUT, podemos configurarlo en HIGH (salida 5V) o LOW (salida 0V)