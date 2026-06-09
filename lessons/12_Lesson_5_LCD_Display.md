## Lección 5: Módulo de Pantalla LCD 1602

**(1).Descripción：**

![](../media/28bf5a86d2265afb050e55589e145fe9.png)

Con módulo de comunicación I2C, este es un módulo de pantalla que puede mostrar 2 líneas con 16 caracteres por línea.

Muestra fondo azul y texto blanco y se conecta a la interfaz I2C del MCU, lo que ahorra muchos recursos del MCU.

En la parte trasera de la pantalla LCD, hay un potenciómetro azul para ajustar la retroiluminación. La dirección de comunicación por defecto es 0x27.

El LCD 1602 original puede iniciar y funcionar con 11 puertos IO, pero el nuestro está construido con interfaz ARDUINOIIC/I2C, ahorrando 9 puertos IO. Alternativamente, el módulo viene con 4 orificios de posicionamiento con un diámetro de 3mm, lo que facilita su fijación en otros dispositivos.

**(2).Parámetros：**

Dirección I2C: 0x27

Retroiluminación (azul, blanco)

Voltaje de alimentación: **5V**

Contraste ajustable

GND: Un pin que se conecta a tierra

VCC: Un pin que se conecta a una fuente de alimentación +5V

SDA: Un pin que se conecta al puerto analógico A4 para comunicación IIC

SCL: Un pin que se conecta al puerto analógico A5 para comunicación IIC

**(3).Necesitas preparar:**

| Placa de Control*1                                | Cable USB*1                                    | Pantalla LCD*1                                  | Cable DuPon 4P-1P F-F                            |
|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
| ![](../media/60cb7081df16f5d5169b0883a6fbf3df.png) | ![](../media/4f8d5af6dee9016b45d975adb2391d37.png) | ![](../media/28bf5a86d2265afb050e55589e145fe9.png) | ![](../media/f4df3fe85086b2896d958b1caf93a038.png) |

**(4)Diagrama de Conexión**

| Tabla de Conexión de Pines |                      |
|----------------------------|----------------------|
| Pin de la **Pantalla LCD** | Pin de la Placa de Control |
| GND                        | G(GND)                 |
| VCC                        | V(5V)                 |
| SDA                        | A4                 |
| SCL                        | A5                 |

![](../media/8c306bd1b7399f0819f4a1c435177ec3.png)

![](../media/74924d373976c4ff67719dea807a5f0d.png)

![](../media/2ab182ee1dd52f41062a95d8519d6a17.png)

![](../media/6eb2b20c59f81f11a84c57be5d8a91f4.png)![](../media/5facbfa2ab2b3bb0a6946cf0a77d263a.png)