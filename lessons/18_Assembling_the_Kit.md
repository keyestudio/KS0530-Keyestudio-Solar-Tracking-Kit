# 4. Montaje del Kit de Seguimiento Solar

Cosas a tener en cuenta antes del montaje:

1. Antes del montaje, por favor retire la película protectora de las placas acrílicas.

![](../media/15aad64ba3edebe3004541446eacc823.png)

2. Necesitará preparar una batería 18650 así como un cargador de baterías.

Los siguientes parámetros están disponibles para su compra：

| Especificaciones          |                                                           |
|--------------------------|-----------------------------------------------------------|
| Tamaño                   | 18650                                                     |
| Terminal positivo：       | ![](../media/a073b35e565bb6f3c29ec114dc467e6b.png)Con parte superior |
| Capacidad                | >2200mAh                                                 |
| Voltaje nominal          | 3.7V                                                      |
| Voltaje máximo           | 4.2V                                                      |
| Voltaje de corte de descarga | 2.5V                                                      |
| Recargable               | Sí                                                        |
| Dimensiones aproximadas  | 18.5mm x 65.2mm                                           |



**Parte 1**

Componentes necesarios

![](../media/5b08f5dd3cc6a24979d83addfba135e3.png)

Montaje de la pantalla 1602 y la caja de la batería

![](../media/f8aabfb9c14e1d0072298f751a2f114f.png)

![](../media/d9156cedcf4e898026c92001597b0c8a.png)

**Parte 2**

Componentes necesarios

![](../media/f74712c21427762025bdb9b44cd4d748.png)

Montaje de la placa de control

![](../media/081d0d21d1bd9f964723c8f323a3f177.png)

![](../media/ec727ba8f455586f2120e984ba181e03.png)

**Parte 3**

Componentes necesarios

![](../media/cde397ed998ff584eceec0d4e5904531.png)

Montaje del módulo de alimentación de batería de litio y módulo de carga

![](../media/29ccce1d21aefa84a68b8aeacf40f964.png)

![](../media/98b5873c9dd038506b3d5c92d88741fe.png)

**Parte 4**

Componentes necesarios

![](../media/4dfed35fb3b9411520d379b76b55e2e5.png)

Montaje de las columnas de cobre M3*45MM

![](../media/284424ec29729ad222977eaff93489c1.png)

![](../media/d63b4374373005a015d39bd6720642c6.png)

**Cableado de la parte inferior del kit**

Use el cable DuPont M a F de 20cm para conectar el módulo de carga solar USB a la placa de control uno. El pin G del módulo se conecta al GND del UNO, el pin V del módulo se conecta al Vin del UNO.

![](../media/fc355889b96c325ccac72e887b379b16.png)

![](../media/5c2fcdb796c2da6a41ba70061a49710b.png)

Conecte la pantalla LCD a la placa UNO

| Tabla de conexión de pines |                      |
|----------------------------|----------------------|
| Pin de la **pantalla LCD** | Pin de la placa de control |
| GND (cable negro)           | G (GND)               |
| VCC (cable rojo)            | V (5V)                |
| SDA (cable azul)            | A4                   |
| SCL (cable verde)           | A5                   |

![](../media/ca85a47344a459c91d3a20079f9687a1.png)![](../media/f912e3561a5fdb4f7004149f5a53f828.png)

Nota: El voltaje de trabajo de la pantalla LCD es 5V, por favor asegúrese de que el interruptor 3.3-5V en la placa de control esté configurado a 5V.

![](../media/62285b96cb0ec086bc79a72f776aba8f.png)

Instale una batería 18650 dentro de la caja de la batería, cuidando que los terminales positivo y negativo de la batería coincidan con los terminales positivo y negativo de la caja.

Conecte la caja de la batería al módulo de carga solar USB y al módulo de carga para teléfono móvil.

![](../media/4fae5606d8a89cf3d64cad13fac2df19.png)


**Parte 5**

Componentes necesarios

![](../media/d267f4fefc6c90283e57c0b9db9cc2fd.png)

![](../media/14a35fc0cc7372a856fc09880a885b78.png)

Montaje de los sensores y módulos

![](../media/e776075a7ae1c43745cfeeb837a1c738.png)

**Parte 6**

Componentes necesarios

![](../media/5e270635b02e1c4a7c1be9f2353da395.png)

![](../media/bfb641e5e42d2f84142ffcc673894e77.png)

![](../media/5975368bb162a843736b912b1c172e95.png)

**Parte 7**

Componentes necesarios

![](../media/211500037f52144a3aa4b18bd39c1870.png)

![](../media/c90ed1203ee35f25e00fb3974b6082f1.png)

Tenga en cuenta la orientación de la sección superior, el módulo del zumbador y la pantalla LCD debajo están en la misma orientación.

![](../media/2e04abbf3613d39afb2cdcff86e1932c.png)

**Parte 8**

Componentes necesarios

![](../media/af21087f2c4fc3ce4b51107b3258caa4.png)

![](../media/8289ff55eb2e2acdd9f3425aaaa936d3.png)

![](../media/be529a21c1ca16d114c73475fb6c0c58.png)

**Parte 9**

Componentes necesarios

![](../media/459a9081531592d6dfa2b09ec0096488.png)

![](../media/b6329bbd1ea9fba2fbc79e6897141b71.png)

Diagrama de instalación (preste atención a la dirección de instalación del servo)

![](../media/a9b2e2050d9a0b207c7afb00fe0522ca.png)

**Parte 10**

Componentes necesarios

![](../media/14fab09683530ffb01429f381608d3f7.png)

![](../media/b28eb76d7b5d5d25f807b15b91349f03.png)

**Parte 11**

Componentes necesarios

![](../media/98be19dcc673e5efe24a759b0a54b7dd.png)

![](../media/81c82980c0d3ccac09a316e2fa35e99e.png)

Antes de ensamblarlos, necesita ajustar el ángulo del **servo ②**. Configure su ángulo inicial a **10 grados** para mantener el panel solar nivelado.

**Diagrama de conexión**

Nota: El servo está conectado a G (GND), V (VCC), D10. El cable marrón está conectado a Gnd (G), el cable rojo está conectado a (V), y el cable naranja está conectado al pin digital D10.

![](../media/b36a6b47705944879c4200ab1a56b75e.jpeg)

![](../media/6d2a91b6d38e208bec80b10ac6faa08d.png)![](../media/26b8abdd5862d20ced793e36668ac9cf.png)

Diagrama de instalación (preste atención al ángulo del servo, como se muestra en la imagen)![](../media/15f493110d37113d992fd9e5a76450f5.png)![](../media/fc8e14e930751266c581a1685afbcf97.png)

**Nota:** No puede girar el eje del servo hasta que haya completado este paso de fijación, de lo contrario tendrá que reajustarlo a 10 grados usando el código anterior.

**Parte 12**

Componentes necesarios

![](../media/459a9081531592d6dfa2b09ec0096488.png)

![](../media/480994b79ba58d1c8c57b8464249f347.png)

![](../media/eafd29872cf5e70d337f270365d35eef.png)

![](../media/3fb558672b4f1ef52b40b5cb60a93882.png)

**Parte 13**

Componentes necesarios

![](../media/459a9081531592d6dfa2b09ec0096488.png)

![](../media/7b46133b504120d53fb653671b6352b9.png)

![](../media/d33a267034b2906f56efec5a67019458.png)

![](../media/27efd1be66e14cfacc161c620e513c1c.png)

**Parte 14**

Componentes necesarios

![](../media/98be19dcc673e5efe24a759b0a54b7dd.png)

![](../media/a2bc82e4973fde85b2c549a0da860400.png)

Antes de ensamblarlos, necesita ajustar el ángulo del **servo ①**. Configure su ángulo inicial a **90 grados**.

**Diagrama de conexión**

Nota: El servo está conectado a G (GND), V (VCC), D9. El cable marrón está conectado a Gnd (G), el cable rojo está conectado a (V), y el cable naranja está conectado al pin digital D9.

![](../media/2e5505ffa429fb27b8e3e054358e9128.png)

![](../media/e539bcb920b0b1b1420b388c01003e4c.png)

![](../media/f1ffd660bc1faab0118f50ed08794c3d.png)

Diagrama de instalación

**Nota:** No puede girar el eje del servo hasta que haya completado este paso de fijación, de lo contrario tendrá que reajustarlo a 90 grados usando el código anterior.

![](../media/da31eb334e0c1e9d7d81060359ecba73.png)

![](../media/e52f51035e537315152c7498cf9bd6eb.png)

**Parte 15**

Componentes necesarios

![](../media/170390970615486d961355a328e60a86.png)

![](../media/0525cb77644ddb9b9c5c355785b0e897.png)

![](../media/cd803e2e6709d1633a22cc6f57de88ea.png)

**Parte 16**

Componentes necesarios

![](../media/3b52ffb52dae7c7c450af6fe3d3d9402.png)

![](../media/9991f2d956f33da3078438e1dfe37000.png)

![](../media/b56cc707cebe05c8e98b6f6afc795423.png)

**Parte 17**

Componentes necesarios

![](../media/2d22837fabdcc1c8c34a9927129ddcb5.png)

![](../media/f21718a60ac270bf9bb88a8b2b2c05ab.png)

![](../media/4a5cc2caf5c79ef0538cf1861fa73298.png)

**Parte 18**

Componentes necesarios

![](../media/f0a1f87a34e18a1c1f22ffb93fc98c2c.png)

![](../media/342f6b93cbaca41ee062352702267c95.png)

![](../media/77b94d52457f9104fc85ae91d3c18027.png)

**Parte 19**

Componentes necesarios

![](../media/7a023d5f4e9a13cf7d2141ab4700d811.png)

![](../media/6bf49abc10882b8ead3d3aede99198c7.png)

![](../media/db89b632a149b4431d9e01a2a373851d.png)

**Cableado de la parte superior del kit**

1)![](../media/469d80ec804ed66cc813071e3cf56aa8.png)Conecte el servo inferior al D9 de la placa de control UNO, y el servo superior al D10 de la placa de control UNO. Conecte el cable marrón del servo a G, el cable rojo a V, y el cable amarillo a S.

2) Enchufe el conector del panel solar al extremo SOLAR4.8-6.0V del módulo de carga solar USB.

![](../media/56b3303300870f07a6cf4e38ab1fa998.png)

3) A continuación, usaremos los siete cables DuPont 3P 26AWG 200mm F-F para conectar los fotosensores, el módulo zumbador, el módulo de botón pulsador y el sensor de temperatura y humedad DHT11 a la placa uno.

![](../media/ffb7fb703ade99a7d7a932da7c781d81.png)

El sensor fotosensible de la izquierda está conectado al pin A0 de la placa UNO.

El sensor fotosensible de la derecha está conectado al pin A1 de la placa UNO.

El sensor fotosensible trasero está conectado al pin A2 de la placa UNO.

El sensor fotosensible delantero está conectado al pin A3 de la placa UNO.

El módulo de botón está conectado al pin D2 de la placa UNO.

El módulo zumbador está conectado al pin D6 de la placa UNO.

El sensor de temperatura y humedad dht11 está conectado al pin D7 de la placa UNO.

![](../media/9822f50f9d1906833347175a42ff3fea.png)

**Nota: Para evitar conexiones inversas, recomendamos cablear según el siguiente método：**

- El pin G del módulo se conecta al pin G del UNO con un cable negro;

- El pin V del módulo se conecta al pin V del UNO con un cable rojo;

- El pin S del módulo se conecta al pin S del UNO con un cable naranja.

Como se muestra en la forma en que el sensor de temperatura y humedad dht11 está conectado a la placa UNO.

![](../media/8beddf04e8c9ee1c94c91b225328036e.png)

4) Finalmente, conecte el módulo digital de intensidad de luz bh1750 a la placa UNO.

![](../media/d7fccd89d5bed291ccce34babfbf5c91.png)