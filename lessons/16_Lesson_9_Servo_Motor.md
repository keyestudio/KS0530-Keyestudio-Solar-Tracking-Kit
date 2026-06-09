## Lección 9: Prueba del Motor Servo

![](../media/1e72f94dd8103419a46dded6b2969706.png)

**(1)Descripción：**

El motor servo es un actuador rotativo de control de posición. Está compuesto principalmente por la carcasa, la placa de circuito, el motor sin núcleo, el engranaje y el sensor de posición. Su principio de funcionamiento es que el servo recibe la señal enviada por el MCU o receptor, y produce una señal de referencia con un período de 20 ms y un ancho de 1.5 ms, luego compara el voltaje de polarización continua adquirido con el voltaje del potenciómetro y obtiene la salida de la diferencia de voltaje.

![](../media/69be958142b773acdae33eeef12afed7.png)

Para el servo utilizado en este proyecto, el cable marrón es tierra, el rojo es el cable positivo y el naranja es el cable de señal.

El ángulo de rotación del motor servo se controla regulando el ciclo de trabajo de la señal PWM (Modulación por Ancho de Pulso). El ciclo estándar de la señal PWM es de 20 ms (50 Hz). Teóricamente, el ancho se distribuye entre 1 ms y 2 ms, pero en la práctica está entre 0.5 ms y 2.5 ms. El ancho corresponde al ángulo de rotación de 0° a 180°. Pero tenga en cuenta que para motores de diferentes marcas, la misma señal puede tener un ángulo de rotación diferente.

![](../media/84afa5e42f1badf7713edd8ff8e306e4.png)

Más detalles:

![](../media/ddc74f62dc936c925d28d70a1a9c2214.png)

**(2)Parámetros:**

Voltaje de trabajo: DC 4.8V ~ 6V

Rango de ángulo operativo: aproximadamente 180 ° (en 500 → 2500 μsec)

Rango de ancho de pulso: 500 → 2500 μsec

Velocidad sin carga: 0.12 ± 0.01 seg / 60 (DC 4.8V) 0.1 ± 0.01 seg / 60 (DC 6V)

Corriente sin carga: 200 ± 20mA (DC 4.8V) 220 ± 20mA (DC 6V)

Torque de parada: 1.3 ± 0.01kg · cm (DC 4.8V) 1.5 ± 0.1kg · cm (DC 6V)

Corriente de parada: ≦ 850mA (DC 4.8V) ≦ 1000mA (DC 6V)

Corriente en espera: 3 ± 1mA (DC 4.8V) 4 ± 1mA (DC 6V)

Longitud del cable: 250 ± 5 mm

Tamaño de apariencia: 22.9 * 12.2 * 30mm

Peso: 9 ± 1 g (sin el brazo del servo)

**(3)Necesitas preparar:**

| Placa de Control*1                                | Cable USB*1                                    | Servo*2                                               |
|-------------------------------------------------|-------------------------------------------------|--------------------------------------------------------|
| ![](../media/60cb7081df16f5d5169b0883a6fbf3df.png) | ![](../media/4f8d5af6dee9016b45d975adb2391d37.png) | ![](../media/1e72f94dd8103419a46dded6b2969706.png) |

**(4)Diagrama de Conexión**

Nota: El servo se conecta a G (GND), V (VCC), D9. El cable marrón se conecta a Gnd (G), el cable rojo se conecta a (V), y el cable naranja se conecta al pin digital D9.

![](../media/2e5505ffa429fb27b8e3e054358e9128.png)

Presentaremos dos formas de controlar los servos, una sin usar la biblioteca **<Servo.h>** y otra usando la biblioteca **<Servo.h>**.

**9.1 Controlar el servo sin usar la biblioteca <Servo.h>**

![](../media/e6468e130d096224df89724b3a28410d.png)![](../media/eed0aa6ca3a115cf693631ec17fe8966.png)

![](../media/b198b9a0d2c060709ae8305cf3b0123a.png)

**9.2 Controlar el servo usando la biblioteca <Servo.h>**

![](../media/8a0f67e5e5de4ae3354b61b23287d09f.png)![](../media/27998b4cb3006ca079896756473dc059.png)![](../media/65614db1ad96cb78b577178364ed5241.png)