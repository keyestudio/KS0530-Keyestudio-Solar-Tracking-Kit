## Lección 8: Módulo Digital de Intensidad de Luz BH1750

**(1)Descripción:**

![](../media/53ab41d84e93814e57076a8cc25e1aa7.png)

El componente principal de este sensor es el chip BH1750FVI, que es un chip integrado para la intensidad de luz digital.

Como se muestra en la imagen a continuación, BH1750 está compuesto por un fotodiodo, un amplificador operacional, una adquisición ADC, un oscilador de cristal, etc. El fotodiodo convierte la señal óptica de entrada en una señal eléctrica mediante el efecto fotovoltaico. Después de ser amplificada por el circuito amplificador operacional, el voltaje es recogido por el ADC, y luego convertido en un número binario de 16 bits a través del circuito lógico y almacenado en el registro interno (Nota: Cuanto más fuerte es la luz, mayor es la fotocorriente, y mayor es el voltaje, por lo que la intensidad de la luz puede juzgarse por el valor del voltaje.

Sin embargo, debe notarse que el voltaje y la intensidad de la luz tienen una correspondencia uno a uno, pero no son proporcionales. Por eso este chip realiza un procesamiento lineal y por qué se usa directamente el CI integrado en lugar de fotodiodos). BH1750 saca la línea de reloj y la línea de datos. El microcontrolador puede comunicarse con el módulo BH1750 a través del protocolo I2C. Puede elegir el modo de trabajo del BH1750, o puede extraer los datos de iluminancia del registro BH1750.

**(2)Parámetros:**

Interfaz digital I2C, soporta una tasa máxima de 400Kbps

La salida es iluminancia

Rango de medición de 1 a 65535 lux, la resolución mínima es 1 lux

Bajo consumo de energía (función Power down)

Protege contra interferencias de cambios de luz causados por la frecuencia de la red eléctrica de 50/60Hz

Soporta dos direcciones I2C, seleccionadas por el pin ADDR

Pequeña desviación de medición (error máximo de precisión +/-20%)

GND tierra de alimentación

SDA pin de datos del bus I2C

SCL pin de reloj del bus I2C

VCC voltaje de alimentación 3-5V

**(3)Necesitas preparar:**

| Placa de Control*1                                | Cable USB*1                                    | Sensor BH1750FVI*1                             | Cable 4 pines F-F de 350mm                      |
|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
| ![](../media/60cb7081df16f5d5169b0883a6fbf3df.png) | ![](../media/4f8d5af6dee9016b45d975adb2391d37.png) | ![](../media/53ab41d84e93814e57076a8cc25e1aa7.png) | ![](../media/626e88c46a8a1385bd0558610a17ca9f.png) |

**(4)Diagrama de Conexión:**

![](../media/d7fccd89d5bed291ccce34babfbf5c91.png)

![](../media/e3b43d6080bdd3dcf111f5d594529d3a.png)![](../media/f232b12906eb5a6819c933c79183fc58.png)



![](../media/92857c7b8c368330acb6630e39bd462c.png)

(**Nota**: dado que el bus I2C puede tener múltiples dispositivos con diferentes direcciones, cuando el módulo digital de intensidad de luz se usa junto con el módulo I2C LCD1602, no hay conflicto porque tienen direcciones diferentes.)