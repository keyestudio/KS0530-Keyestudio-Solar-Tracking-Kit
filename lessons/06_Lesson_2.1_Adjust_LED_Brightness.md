## Lección 2.1: Ajustar el Brillo del LED

El hardware requerido para esta lección, la configuración del IDE de Arduino y el cableado entre el módulo LED y la placa de control es de la misma manera que en la **Lección 1.1**.

**(1). Descripción：**

En la lección anterior, controlamos el encendido y apagado del LED y lo hicimos parpadear.

En este proyecto, controlaremos el brillo del LED mediante PWM para simular un efecto de respiración. De manera similar, puedes cambiar la longitud del paso y el tiempo de retardo en el código para demostrar diferentes efectos de respiración.

![](../media/d1f48d97cbe0b6a29389c20533bfc00c.png)PWM es un medio para controlar la salida analógica mediante medios digitales. El control digital se utiliza para generar ondas cuadradas con diferentes ciclos de trabajo (una señal que cambia constantemente entre niveles alto y bajo) para controlar la salida analógica. En general, el voltaje de entrada del puerto es 0V y 5V. ¿Qué pasa si se requiere 3V? ¿O si se quiere cambiar entre 1V, 3V y 3.5V? No podemos cambiar la resistencia constantemente. Para esta situación, necesitamos controlar mediante PWM.

Para la salida de voltaje del puerto digital de Arduino, solo existen LOW y HIGH, que corresponden a un voltaje de salida de 0V y 5V. Puedes definir LOW como 0 y HIGH como 1, y hacer que Arduino emita quinientas señales de 0 o 1 en 1 segundo.

Si se emiten quinientas señales de 1, eso equivale a 5V; si todas son 0, eso equivale a 0V. Si se emite 010101010101 de esta manera, entonces el puerto de salida es 2.5V, lo cual es similar a mostrar una película. La película que vemos no es completamente continua. En realidad, emite 25 imágenes por segundo. En este caso, el humano no puede notarlo, ni tampoco PWM. Si se quiere un voltaje diferente, se necesita controlar la proporción de 0 y 1. Cuantas más señales 0 y 1 se emitan por unidad de tiempo, más preciso será el control.

![](../media/9ce4c120ad6d763102eb2544777c8536.png)

![](../media/fa2a60fcb812e3bb3a4776ac96bef1cb.png)

**(2). Explicación del Código:**

Cuando necesitamos repetir algunas instrucciones, podemos usar la instrucción FOR.

El formato de la instrucción FOR se muestra a continuación:

![](../media/f413519de8de75a850c98ac7695300fa.jpeg)

Secuencia cíclica FOR:

Ronda 1：1 → 2 → 3 → 4

Ronda 2：2 → 3 → 4

…

Hasta que el número 2 no se establezca, el bucle “for” termina,

Después de conocer este orden, volvemos al código:

for (int value = 0; value < 255; value=value+1){

…}

for (int value = 255; value >0; value=value-1){

…}

Las dos instrucciones “for” hacen que value aumente de 0 a 255, luego disminuya de 255 a 0, luego aumente a 255, … en un bucle infinito.

Hay una función nueva a continuación —– analogWrite()

Sabemos que el puerto digital solo tiene dos estados: 0 y 1. Entonces, ¿cómo enviar un valor analógico a un valor digital? Aquí se necesita esta función. Observemos la placa Arduino y encontremos 6 pines marcados con “\~” que pueden emitir señales PWM.

El formato de la función es el siguiente:

analogWrite(pin,value)

analogWrite() se usa para escribir un valor analógico de 0~255 para el puerto PWM, por lo que el valor está en el rango de 0~255. Atención que solo debes escribir en los pines digitales con función PWM, tales como los pines 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 44, 45, 46.

PWM es una tecnología para obtener una cantidad analógica mediante un método digital. El control digital forma una onda cuadrada, y la señal de onda cuadrada solo tiene dos estados: encendido y apagado (es decir, niveles alto o bajo). Controlando la proporción de la duración del encendido y apagado, se puede simular un voltaje que varía de 0 a 5V. El tiempo de encendido (académicamente referido como nivel alto) se llama ancho de pulso, por lo que PWM también se llama modulación por ancho de pulso.

A través de las siguientes cinco ondas cuadradas, conozcamos más sobre PWM.

![](../media/7c9452d3bb97cfee514ef146045866a8.png)

En la figura anterior, la línea verde representa un período, y el valor de analogWrite() corresponde a un porcentaje que también se llama Ciclo de Trabajo (Duty Cycle). El ciclo de trabajo implica que la duración del nivel alto se divide por la duración del nivel bajo en un ciclo. De arriba hacia abajo, el ciclo de trabajo de la primera onda cuadrada es 0% y su valor correspondiente es 0. El brillo del LED es el más bajo, es decir, apagado. Cuanto más tiempo dure el nivel alto, más brillante será el LED. Por lo tanto, el último ciclo de trabajo es 100%, que corresponde a 255, el LED está más brillante. 25% significa más oscuro.

PWM se usa principalmente para ajustar el brillo del LED o la velocidad de rotación del motor.

Juega un papel vital en el control de coches robot inteligentes.