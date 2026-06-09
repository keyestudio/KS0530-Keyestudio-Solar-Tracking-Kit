## Lección 6: Sensor Fotosensible

**(1)Descripción**

Hay cuatro módulos de sensor fotoresistor en este kit, sensores de luz ambiental, con fotoresistor como componente principal.

La resistencia de un fotoresistor varía con la intensidad de la luz. Cuando hay luz alrededor, su resistencia oscila entre 5-10KΩ; mientras que cuando está oscuro, la resistencia es solo 0.2MΩ. Basado en esta propiedad, se puede construir un circuito para convertir el cambio en resistencia en cambios de voltaje.

Además, el sensor viene con un terminal de inserción anti-reversa con un paso de 2.54mm para facilitar el cableado. También es compatible con muchos tipos de microcontroladores, como la serie de microcontroladores Arduino.

Aquí, aplicamos este sensor con el microcontrolador Arduino. El extremo S (señal) del sensor debe conectarse al pin analógico de Arduino para detectar la variación en el valor analógico que se imprimirá en el monitor serial. Y por favor, tenga en cuenta que hay dos orificios de posicionamiento con un diámetro de 4.9mm incorporados en el sensor para ayudar a fijarlo.

**(2)Parámetros:**

Voltaje de trabajo：3.3V-5V（DC）

Interfaz：3PIN

Señal de salida：señal analógica

Peso：2.3g

![](../media/537af5b84f09fe71a4e1f6cbeabdfc81.png)

**(3)Necesitas preparar:**

| Placa de Control*1                             | Cable USB*1                                   | Módulo LED Amarillo*1                         | Cable DuPont 3pin*2                            | Módulo de Botón Pulsador*4                     |
|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
| ![](../media/60cb7081df16f5d5169b0883a6fbf3df.png) | ![](../media/4f8d5af6dee9016b45d975adb2391d37.png) | ![](../media/628e402ae3fc455a2812705b17d7c30d.png) | ![](../media/d57e6d40ae04a5be544cb6b4833a3e98.png) | ![](../media/537af5b84f09fe71a4e1f6cbeabdfc81.png) |

**(4).Diagrama de Conexión:**

| Tabla de Conexión de Pines |                      |
|----------------------------|----------------------|
| Pin del **Fotoresistor**   | Pin de la Placa de Control |
| G                          | G(GND)               |
| V                          | V(5V)                |
| S                          | A0                   |

| Tabla de Conexión de Pines |                      |
|----------------------------|----------------------|
| Pin del **LED**            | Pin de la Placa de Control |
| G                          | G(GND)               |
| V                          | V(5V)                |
| S                          | D3                   |



![](../media/9ad0c25387b65d7eb5ca40d933b2f84c.png)

![](../media/38ea947110ec2dd6b3ee27abd895f258.png)

![](../media/28f391156fb2aec29b24e8ce09246b4c.png)



![](../media/e08a2aa856074276ab58ab45e2652f17.png)![](../media/819aafadd69170aca8063e25a198f0ae.png)