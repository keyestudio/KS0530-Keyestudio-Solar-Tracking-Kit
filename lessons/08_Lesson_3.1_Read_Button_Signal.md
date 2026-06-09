## Lección 3.1: Leer la Señal Digital del Módulo de Botón

**(1)Descripción**

En este proyecto, pretendemos usar el módulo de botón pulsador para controlar el LED.

**(2)Parámetros:**

Voltaje de trabajo：DC 3.3-5V

Señal de control：señal digital

Tamaño：34mm

Peso：3.8g

**(3)Necesitas preparar:**

| Placa de Control*1                             | Cable USB*1                                   | Módulo LED Amarillo*1                         | Cable 3pin F-F 26AWG*2                         | Módulo de Botón Pulsador*1                     |
|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
| ![](../media/60cb7081df16f5d5169b0883a6fbf3df.png) | ![](../media/4f8d5af6dee9016b45d975adb2391d37.png) | ![](../media/628e402ae3fc455a2812705b17d7c30d.png) | ![](../media/d57e6d40ae04a5be544cb6b4833a3e98.png) | ![](../media/6ba7e34f89af660ac90bb2552907ef3f.png) |

**(4)Diagrama de Conexión**

| Tabla de Conexión de Pines |                      |
|----------------------------|----------------------|
| Pin del **Botón**          | Pin de la Placa de Control |
| G                          | G(GND)               |
| V                          | V(5V)                |
| S                          | D2                   |

| Tabla de Conexión de Pines |                      |
|----------------------------|----------------------|
| Pin del **LED**            | Pin de la Placa de Control |
| G                          | G(GND)               |
| V                          | V(5V)                |
| S                          | D3                   |

![](../media/024ba0bbd683bf28f7783c8645f488be.png)

![](../media/32bb1f78caa01e562a769a0afe64da74.png)

![](../media/cb4d53c7c2057f85eb4255c453e31001.png)

![](../media/9688c560b185edabcf17838af3353b36.png)

**(5)Explicación del Código:**

Serial.begin(9600)-inicializa la comunicación serial y establece la velocidad en baudios a 9600

pinMode(pin, INPUT)-usa la función pinMode() para indicarle a Arduino si es un pin de salida o un pin de entrada

digitalRead(pin)-lee el nivel digital de los pines, puede ser ALTO o BAJO