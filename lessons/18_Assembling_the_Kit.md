# 4. Het Solar Tracking Kit in elkaar zetten

Aandachtspunten vóór de montage:

1. Verwijder vóór de montage de beschermfolie van de acrylplaten.

![](../media/15aad64ba3edebe3004541446eacc823.png)

2. Je moet zelf een 18650 batterij en een batterijoplader voorbereiden.

De volgende specificaties zijn beschikbaar voor aankoop：

| Specificaties             |                                                           |
|---------------------------|-----------------------------------------------------------|
| Afmeting                  | 18650                                                     |
| Positieve pool：          | ![](../media/a073b35e565bb6f3c29ec114dc467e6b.png)Met een bovenkant |
| Capaciteit                | >2200mAh                                                 |
| Nominale spanning         | 3.7V                                                      |
| Maximale spanning         | 4.2V                                                      |
| Ontlaad afsnijspanning    | 2.5V                                                      |
| Oplaadbaar                | Ja                                                        |
| Ongeveer afmetingen       | 18.5mm x 65.2mm                                           |



**Deel 1**

Benodigde componenten

![](../media/5b08f5dd3cc6a24979d83addfba135e3.png)

Montage van het 1602 display en de batterijhouder

![](../media/f8aabfb9c14e1d0072298f751a2f114f.png)

![](../media/d9156cedcf4e898026c92001597b0c8a.png)

**Deel 2**

Benodigde componenten

![](../media/f74712c21427762025bdb9b44cd4d748.png)

Montage van de besturingskaart

![](../media/081d0d21d1bd9f964723c8f323a3f177.png)

![](../media/ec727ba8f455586f2120e984ba181e03.png)

**Deel 3**

Benodigde componenten

![](../media/cde397ed998ff584eceec0d4e5904531.png)

Montage van de Lithium Batterij Voedingsmodule en Oplaadmodule

![](../media/29ccce1d21aefa84a68b8aeacf40f964.png)

![](../media/98b5873c9dd038506b3d5c92d88741fe.png)

**Deel 4**

Benodigde componenten

![](../media/4dfed35fb3b9411520d379b76b55e2e5.png)

Montage van de M3*45MM Koperen Kolommen

![](../media/284424ec29729ad222977eaff93489c1.png)

![](../media/d63b4374373005a015d39bd6720642c6.png)

**Bekabeling van het onderste deel van de kit**

Gebruik de 20cm M naar F DuPont draad om de Solar USB Oplaadmodule te verbinden met de uno besturingskaart. De G pin van de module wordt verbonden met de GND van UNO, de V pin van de module wordt verbonden met de Vin van UNO.

![](../media/fc355889b96c325ccac72e887b379b16.png)

![](../media/5c2fcdb796c2da6a41ba70061a49710b.png)

Verbind het LCD display met de UNO kaart

| Pin Verbindings Tabel     |                      |
|---------------------------|----------------------|
| Pin van het **LCD Display** | Pin van de Besturingskaart |
| GND (zwarte draad)        | G (GND)               |
| VCC (rode draad)          | V (5V)                |
| SDA (blauwe draad)        | A4                    |
| SCL (groene draad)        | A5                    |

![](../media/ca85a47344a459c91d3a20079f9687a1.png)![](../media/f912e3561a5fdb4f7004149f5a53f828.png)

Let op: De werkspanning van het LCD Display is 5V, zorg ervoor dat de 3.3-5V schakelaar op de besturingskaart op 5V staat.

![](../media/62285b96cb0ec086bc79a72f776aba8f.png)

Plaats een 18650 batterij in de batterijhouder, zorg ervoor dat de positieve en negatieve polen van de batterij overeenkomen met de positieve en negatieve polen van de batterijhouder.

Verbind de batterijhouder met de solar usb oplaadmodule en de mobiele telefoon oplaadmodule.

![](../media/4fae5606d8a89cf3d64cad13fac2df19.png)


**Deel 5**

Benodigde componenten

![](../media/d267f4fefc6c90283e57c0b9db9cc2fd.png)

![](../media/14a35fc0cc7372a856fc09880a885b78.png)

Montage van de sensoren en modules

![](../media/e776075a7ae1c43745cfeeb837a1c738.png)

**Deel 6**

Benodigde componenten

![](../media/5e270635b02e1c4a7c1be9f2353da395.png)

![](../media/bfb641e5e42d2f84142ffcc673894e77.png)

![](../media/5975368bb162a843736b912b1c172e95.png)

**Deel 7**

Benodigde componenten

![](../media/211500037f52144a3aa4b18bd39c1870.png)

![](../media/c90ed1203ee35f25e00fb3974b6082f1.png)

Let op de oriëntatie van het bovenste gedeelte, de buzzer module en het LCD display hieronder hebben dezelfde oriëntatie.

![](../media/2e04abbf3613d39afb2cdcff86e1932c.png)

**Deel 8**

Benodigde componenten

![](../media/af21087f2c4fc3ce4b51107b3258caa4.png)

![](../media/8289ff55eb2e2acdd9f3425aaaa936d3.png)

![](../media/be529a21c1ca16d114c73475fb6c0c58.png)

**Deel 9**

Benodigde componenten

![](../media/459a9081531592d6dfa2b09ec0096488.png)

![](../media/b6329bbd1ea9fba2fbc79e6897141b71.png)

Installatie diagram (let op de installatierichting van de servo)

![](../media/a9b2e2050d9a0b207c7afb00fe0522ca.png)

**Deel 10**

Benodigde componenten

![](../media/14fab09683530ffb01429f381608d3f7.png)

![](../media/b28eb76d7b5d5d25f807b15b91349f03.png)

**Deel 11**

Benodigde componenten

![](../media/98be19dcc673e5efe24a759b0a54b7dd.png)

![](../media/81c82980c0d3ccac09a316e2fa35e99e.png)

Voordat je ze samenvoegt, moet je de hoek van de **servo ②** aanpassen. Stel de beginhoek in op **10 graden** om het zonnepaneel waterpas te houden.

**Verbindingsdiagram**

Let op: De servo is verbonden met G (GND), V (VCC), D10. De bruine draad is verbonden met Gnd (G), de rode draad is verbonden met (V), en de oranje draad is verbonden met digitale pin D10.

![](../media/b36a6b47705944879c4200ab1a56b75e.jpeg)

![](../media/6d2a91b6d38e208bec80b10ac6faa08d.png)![](../media/26b8abdd5862d20ced793e36668ac9cf.png)

Installatie diagram (let op de hoek van de servo, zoals afgebeeld)![](../media/15f493110d37113d992fd9e5a76450f5.png)![](../media/fc8e14e930751266c581a1685afbcf97.png)

**Let op:** Je mag de servo-as niet draaien totdat je deze bevestigingsstap hebt voltooid, anders moet je hem opnieuw instellen op 10 graden met de bovenstaande code.

**Deel 12**

Benodigde componenten

![](../media/459a9081531592d6dfa2b09ec0096488.png)

![](../media/480994b79ba58d1c8c57b8464249f347.png)

![](../media/eafd29872cf5e70d337f270365d35eef.png)

![](../media/3fb558672b4f1ef52b40b5cb60a93882.png)

**Deel 13**

Benodigde componenten

![](../media/459a9081531592d6dfa2b09ec0096488.png)

![](../media/7b46133b504120d53fb653671b6352b9.png)

![](../media/d33a267034b2906f56efec5a67019458.png)

![](../media/27efd1be66e14cfacc161c620e513c1c.png)

**Deel 14**

Benodigde componenten

![](../media/98be19dcc673e5efe24a759b0a54b7dd.png)

![](../media/a2bc82e4973fde85b2c549a0da860400.png)

Voordat je ze samenvoegt, moet je de hoek van de **servo ①** aanpassen. Stel de beginhoek in op **90 graden**.

**Verbindingsdiagram**

Let op: De servo is verbonden met G (GND), V (VCC), D9. De bruine draad is verbonden met Gnd (G), de rode draad is verbonden met (V), en de oranje draad is verbonden met digitale pin D9.

![](../media/2e5505ffa429fb27b8e3e054358e9128.png)

![](../media/e539bcb920b0b1b1420b388c01003e4c.png)

![](../media/f1ffd660bc1faab0118f50ed08794c3d.png)

Installatie diagram

**Let op:** Je mag de servo-as niet draaien totdat je deze bevestigingsstap hebt voltooid, anders moet je hem opnieuw instellen op 90 graden met de bovenstaande code.

![](../media/da31eb334e0c1e9d7d81060359ecba73.png)

![](../media/e52f51035e537315152c7498cf9bd6eb.png)

**Deel 15**

Benodigde componenten

![](../media/170390970615486d961355a328e60a86.png)

![](../media/0525cb77644ddb9b9c5c355785b0e897.png)

![](../media/cd803e2e6709d1633a22cc6f57de88ea.png)

**Deel 16**

Benodigde componenten

![](../media/3b52ffb52dae7c7c450af6fe3d3d9402.png)

![](../media/9991f2d956f33da3078438e1dfe37000.png)

![](../media/b56cc707cebe05c8e98b6f6afc795423.png)

**Deel 17**

Benodigde componenten

![](../media/2d22837fabdcc1c8c34a9927129ddcb5.png)

![](../media/f21718a60ac270bf9bb88a8b2b2c05ab.png)

![](../media/4a5cc2caf5c79ef0538cf1861fa73298.png)

**Deel 18**

Benodigde componenten

![](../media/f0a1f87a34e18a1c1f22ffb93fc98c2c.png)

![](../media/342f6b93cbaca41ee062352702267c95.png)

![](../media/77b94d52457f9104fc85ae91d3c18027.png)

**Deel 19**

Benodigde componenten

![](../media/7a023d5f4e9a13cf7d2141ab4700d811.png)

![](../media/6bf49abc10882b8ead3d3aede99198c7.png)

![](../media/db89b632a149b4431d9e01a2a373851d.png)

**Bekabeling van het bovenste deel van de kit**

1)![](../media/469d80ec804ed66cc813071e3cf56aa8.png)Verbind de onderste servo met D9 van de UNO besturingskaart, en de bovenste servo met D10 op de UNO besturingskaart. Verbind de bruine draad van de servo met G, de rode draad met V, en de gele draad met S.

2)Steek de stekker van het zonnepaneel in het SOLAR4.8-6.0V uiteinde van de solar USB oplaadmodule.

![](../media/56b3303300870f07a6cf4e38ab1fa998.png)

3)Vervolgens gebruiken we de zeven 3P 26AWG 200mm F-F DuPont draden om de fotosensoren, buzzer module, drukknop module en de DHT11 temperatuur- en vochtigheidssensor te verbinden met de uno kaart.

![](../media/ffb7fb703ade99a7d7a932da7c781d81.png)

De fotosensor links is verbonden met de A0 pin van de UNO kaart.

De fotosensor rechts is verbonden met de A1 pin van de UNO kaart.

De fotosensor achter is verbonden met de A2 pin van de UNO kaart.

De fotosensor voor is verbonden met de A3 pin van de UNO kaart.

De knopmodule is verbonden met de D2 pin van de UNO kaart.

De buzzer module is verbonden met de D6 pin van de UNO kaart.

De dht11 temperatuur- en vochtigheidssensor is verbonden met de D7 pin van de UNO kaart.

![](../media/9822f50f9d1906833347175a42ff3fea.png)

**Let op: Om omgekeerde aansluiting te voorkomen, raden we aan om volgens de volgende methode te bedraden：**

- De G pin van de module is verbonden met de G pin van UNO met een zwarte draad;

- De V pin van de module is verbonden met de V pin van UNO met een rode draad;

- De S pin van de module is verbonden met de S pin van UNO met een oranje draad.

Zoals te zien is bij de aansluiting van de dht11 temperatuur- en vochtigheidssensor op de UNO kaart.

![](../media/8beddf04e8c9ee1c94c91b225328036e.png)

4)Tot slot, verbind de bh1750 digitale lichtintensiteitsmodule met de UNO kaart.

![](../media/d7fccd89d5bed291ccce34babfbf5c91.png)