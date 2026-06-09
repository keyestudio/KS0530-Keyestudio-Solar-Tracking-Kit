# 5. Dispositivo de Panel Solar con Múltiples Funciones

¡El dispositivo de panel solar ensamblado está listo!

En las lecciones anteriores, solo estudiamos la función y el principio de funcionamiento de una determinada parte electrónica de forma individual, y probamos si puede funcionar normalmente.

Ahora los tenemos trabajando juntos para construir un dispositivo de panel solar con múltiples funciones.

Mantén la batería 18650 suficientemente cargada ya que se necesitará para alimentar dos servos, una pantalla LCD, cuatro sensores de luz, un sensor DHT11 y un módulo de botón.

![](../media/f4b78ac6371097b2e32409c226873651.png)

![](../media/94d386c19c8b95904852ee2a11a4f272.png)

Después de que el código se cargue correctamente, enciende el interruptor de alimentación del módulo de carga y presiona el interruptor de alimentación de la placa de control a 5V.

![](../media/edc80fe0bd7a1cce69bd760ab5d247bc.png)![](../media/67fc5cb5b7eabda71fcb2296a8def597.png)

El servo girará al ángulo inicial. Cuando el sensor de luz ambiental detecta cambios en la intensidad de la luz, los servos giran el panel solar hacia la posición donde la luz es más fuerte y el LCD1602 muestra el valor de la intensidad de luz y la temperatura y humedad detectadas por el BH1750 y DHT11 respectivamente.

Si sientes que el panel solar gira demasiado lento o que el panel solar tiembla, puedes ajustar la velocidad de rotación del servo a través del módulo de botón.

Por ejemplo, dentro del tiempo especificado, el servo gira 1° cada vez. Después de presionar el botón, el servo girará 2° cada vez dentro del mismo tiempo.

Presiónalo de nuevo y el servo girará 3° cada vez en el mismo tiempo. Por analogía, el servo puede ajustarse para girar hasta 5° cada vez en el mismo tiempo.

**“byte resolution = 1”**

Puedes ajustar la resolución para cambiar el ángulo de rotación del servo. Presiona el botón para cambiar la resolución de 1° a 5°. También puedes cambiar `byte m_speed = 10` para establecer el tiempo de retardo y ajustar la velocidad del servo; cuanto más largo sea el tiempo, menor será la velocidad.

![](../media/55bbbb88c4e18c1b90ce588fa76d0e3d.png)