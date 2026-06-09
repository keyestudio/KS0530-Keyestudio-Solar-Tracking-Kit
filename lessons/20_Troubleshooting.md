# 6.Resolución de problemas

Aquí hay algunas soluciones a problemas comunes que pueden ayudarte.

Si no encuentras la respuesta que buscas aquí, por favor contacta a nuestro soporte técnico:

Amazon: [service@keyestudio.com](mailto:service@keyestudio.com)

AliExpress: [tivon@keyestudio.com](mailto:tivon@keyestudio.com)

Otros canales: [sunny@keyestudio.com](mailto:sunny@keyestudio.com)

Para una resolución más rápida y profesional de tu problema, por favor incluye esta información cuando nos envíes un correo electrónico:

Tu número de pedido o dónde adquiriste este producto

Los problemas que encuentras, intenta incluir descripciones detalladas, fotos o videos.

Necesitamos más información que "No funciona." Por favor danos detalles claros sobre lo que quieres lograr y lo que has intentado.

¡Gracias!

**(1) La placa de control no es reconocida por la computadora.**

-Por favor verifica si el cable USB está en buen estado y si el puerto USB de tu computadora está disponible.

**(2) El puerto USB no es reconocido por la computadora.**

-Verifica si has instalado el controlador USB.

**(3) Problemas con el código/Fallo al cargar/Error en el código.**

Estas razones pueden causar problemas con tu código:

1) El controlador no está instalado.

2) El tipo de placa y el puerto COM no están seleccionados correctamente en el Arduino IDE.

3) El archivo de la librería no está instalado.

(Por favor sigue **2.Getting Started with Arduino** para solucionar los problemas anteriores)

![](../media/224c21b5aa737f11de351dbd9868e317.png)

**(4) Mala conexión USB**

Si no tienes los problemas mencionados en 1-3, verifica que la conexión del cable USB sea buena, intenta desconectarlo y volverlo a conectar, y luego carga el código nuevamente.

**(5) El kit ensamblado de seguimiento solar no responde.**

1) Estas razones pueden causar que el robot no funcione:

1) cableado incorrecto

2) No subiste el código

3) Fallo al cargar/Error en el código

4) No encendiste el interruptor de 5V en la placa de control ni el interruptor de encendido en el módulo de carga.

![](../media/67fc5cb5b7eabda71fcb2296a8def597.png)![](../media/edc80fe0bd7a1cce69bd760ab5d247bc.png)

5) Batería con carga insuficiente

Necesitas mantener la batería 18650 suficientemente cargada ya que se requiere para alimentar dos servos, una pantalla LCD, cuatro sensores de luz, un sensor DHT11 y el módulo de botones.

**(6) Servo atascado/servo caliente**

Necesitarás ajustar el ángulo inicial del servo antes de ensamblarlos y no cambiar el ángulo hasta que el ensamblaje esté completo para asegurar que el servo funcione correctamente en el kit de seguimiento solar.

**(7) El panel solar no sigue el movimiento de la fuente de luz o del sol**

Cuando el sensor de luz ambiental detecta cambios en la intensidad de la luz, los servos giran el panel solar hacia la posición donde la luz es más fuerte.

En un ambiente con iluminación uniforme, el panel solar puede no seguir el movimiento de la fuente de luz. Puede que necesites aplicar una fuente de luz muy fuerte, o aplicar una fuente de luz en un área con poca luz para que el panel solar se mueva con la fuente de luz. El panel solar puede no moverse hacia el sol porque la diferencia en la intensidad de luz detectada por cada sensor de luz ambiental puede no ser grande.

1.  **El panel solar se mueve muy lentamente, da tirones o se queda atascado.**
2.  Verifica que el cableado del servo esté organizado y no esté atascado para que el servo tenga suficiente espacio para moverse.
3.  La batería 18650 debe estar completamente cargada.
4.  Puedes presionar el módulo de botones para ajustar la cantidad de rotación del servo.