## Lektion 10: Ladeprinzip des Solar-Tracking-Kits

**(1) Solar- und USB-Lademodul:**

![](../media/35ee9ecf293719fbe6b09fa7d79673db.png)

Dieses Modul integriert einen Lade- und Entladechip, der über die PH2.0MM-Schnittstellen mit einer externen wiederaufladbaren Batterie und einem Solarpanel verbunden werden kann.

In diesem Kit stellen wir ein Batteriefach zur Verfügung, das eine 18650-Batterie aufnehmen kann, daher müssen Sie eine wiederaufladbare 18650-Batterie selbst vorbereiten.

Das Modul verfügt über einen Micro-USB-Anschluss, über den Sie die 18650-Batterie mit einem Computer aufladen können.

Außerdem besitzt es ein Boost-Modul, das die Batteriespannung auf 6,6 V erhöhen kann. Der DIP-Schalter auf dem Modul ist der OUTPUT-Schalter für 6,6 V. Der Pin G und V dieses Moduls können 6,6 V ausgeben und der Pin S kann die Batteriespannung nach dem Widerstand mit halber Spannung messen.

**Parameter:**

| Ladeanschluss                                | Micro USB HP2.0MM Schnittstelle für Solarpanel |
|----------------------------------------------|------------------------------------------------|
| Eingangsspannung der Solarpanel-Schnittstelle | 4,4-6 V                                        |
| Konstantspannungsladewert der Batterie       | 4,15-4,24 V                                    |
| Maximaler Ladestrom                          | 800 mA                                         |
| Ausgangsschnittstelle                        | 3 P 2,54 mm gebogene Nadel                      |
| Eingangsspannung                            | 6,6 V                                          |
| Maximaler Ausgangsstrom                      | 1 A                                            |
| Externe Batterie                            | 18650 Batterie                                 |
| Umweltattribute                             | ROHS                                           |

**Schaltplan**

![](../media/de5fe1122f8eac68785a2894a8312194.png)

**Eigenschaften**

![](../media/aff5ac4262adb20b7af065a4599f8b91.png)


![](../media/8cc32ae4cc95d353f08354f4746ee047.jpeg)

**(2) PET-Solarpanel**

![](../media/9634ce5e4e9d603a21f5e83caafbd6f4.jpeg)

Die Hauptfaktoren, die die Ausgangsleistung von Solarpanels beeinflussen, sind:

(1) Lastimpedanz

(2) Sonnenlichtintensität

(3) Temperatur

(4) Beleuchtungswinkel und Beleuchtungsfläche

Sie können mit einem Multimeter den Ausgangsstrom des Solarpanels messen, stellen Sie das Multimeter auf Gleichstromstromstärke und großen Messbereich ein, verbinden Sie die rote Messleitung des Multimeters mit dem Pluspol des Solarpanels und die schwarze Messleitung mit dem Minuspol des Solarpanels und messen Sie.

Können Solarpanels Strom speichern?

Nein, normalerweise müssen sie mit einer Batterie kombiniert werden, um Strom zu speichern.

Können Solarpanels an bewölkten Tagen Strom erzeugen?

Nein, die von Solarpanels an bewölkten Tagen erzeugte Leistung ist sehr gering. In diesem Fall haben sie Spannung, aber keinen Strom.

Können Solarpanels unter Innenbeleuchtung Strom erzeugen?

Nein, Solarpanels können unter Innenbeleuchtung keinen Strom erzeugen.

**(3) Batterie mit dem Solarpanel aufladen**

In diesem Kit stellen wir ein Batteriefach zur Verfügung, das mit einer 18650-Batterie kompatibel ist und mit zwei Schnittstellen ausgestattet ist, sodass Sie die Batterie aufladen oder als Stromquelle verwenden können.

![](../media/0b1a78bcd390a4a21c6079f86dbb00ca.png)

Sie müssen selbst eine 18650-Batterie sowie ein Ladegerät vorbereiten.

Die folgenden Parameter sind für Ihren Kauf verfügbar:

| Spezifikationen          |                                                           |
|--------------------------|-----------------------------------------------------------|
| Größe                    | 18650                                                     |
| Pluspol：                | ![](../media/a073b35e565bb6f3c29ec114dc467e6b.png) mit oben |
| Kapazität                | >2200 mAh                                                 |
| Nennspannung             | 3,7 V                                                     |
| Maximale Spannung        | 4,2 V                                                     |
| Entladeschlussspannung   | 2,5 V                                                     |
| Wiederaufladbar          | Ja                                                        |
| Ca. Abmessungen          | 18,5 mm x 65,2 mm                                         |

Wir können das Solarpanel mit dem Lademodul und einem 18650 Lithium-Batteriefach verbinden, sodass das Solarpanel die Batterie auflädt.

![](../media/901cdf76ced95e24e2dc2a43441bb76f.png)

Solarpanels sind keine Batterien und haben keine Funktion zur Stromspeicherung. Der Strom kann in der Batterie gespeichert werden.

Die Ausgangsleistung von Solarpanels ist in Umgebungen ohne Sonnenlicht, bei Innenbeleuchtung und geringem Winterlicht schwach. Die von diesen Lichtquellen getragene Energie ist sehr gering, selbst wenn es heller ist.

**Hinweis:**

Das Solarpanel benötigt möglicherweise lange Zeiten direkter Sonneneinstrahlung, um die Batterien ausreichend zu laden. 18650-Batterien sollten nicht direktem Sonnenlicht ausgesetzt werden und hohe Temperaturen in der Umgebung sollten vermieden werden, um ein Durchbrennen zu verhindern.

![](../media/741dcf23d13ba6e94e4910ac0baccf90.png)
**(4) Smartphone-Lademodul**

Das Handy-Lademodul ist ein Lithium-Batterie-Boost-Modul mit 3,7 V, das über den PH2.0-Anschluss und den USB-Anschluss 5 V, 1 A ausgeben kann.

Parameter:

| Eigenschaft            | nicht isoliertes Boost-Modul (BOOST)                                                              |
|-----------------------|--------------------------------------------------------------------------------------------------|
| Eingangsspannung      | 1-5 V                                                                                            |
| Ausgangsspannung      | 5 ± 0,1 V                                                                                       |
| Ausgangsstrom:        | Nennstrom 1-1,5 A (Eingang Einzellithiumbatterie), maximal 1,5 A (Eingang Einzellithiumbatterie) |
| Wirkungsgrad          | Bis zu 96 %                                                                                     |
| Schaltfrequenz        | 500 kHz                                                                                        |
| Betriebstemperatur    | Industriequalität (-40 °C bis +85 °C)                                                           |
| Volllast-Erwärmung   | 30 °C                                                                                           |
| Ruhestrom             | 130 µA                                                                                         |

Der PH2.0-Anschluss des Handy-Lademoduls kann mit dem Batteriefach verbunden werden.

Der USB-Anschluss kann mit einem Android-Handy verbunden und aufgeladen werden.

Beachten Sie, dass die Leistung der 18650-Batterie ausreichend sein muss (Spannung bis zu 3,2-4,2 V), um ein Android-Handy zu laden. Andernfalls funktioniert es nicht, auch wenn das Handy anzeigt, dass es lädt.

![](../media/ac10bacad797ef9104c98f1c2735cea4.png)

**(5) Ladeprinzip des Solar-Tracking-Kits**

1. Maximaler Ladestrom des Micro-USB-Anschlusses 1 A

2. Maximaler Ladestrom des Solarpanels 80 mA

3. Maximale Ausgangsspannung des USB-A-Buchsenhalters: 5 V/1,5 A (kann zum Laden von Handys verwendet werden)

![](../media/406f0b8202788f1214fddca0970bd688.png)

4. Batterietyp: 18650 Lithium-Batterie mit obenliegendem Pluspol, empfohlen wird eine Kapazität von mehr als 2200 mAh

**Hinweis:**

1). Das Ladeprotokoll des Handy-Lademoduls unterstützt nur Android, nicht iOS.

2). Das Solarpanel kann Handys nicht direkt laden; es muss Strom in einer Batterie speichern und die Batterie lädt das Handy.

3). Die Spannung der 18650-Batterie muss im Bereich von 3,2–4,2 V liegen, um das Handy zu laden. Wenn die Batteriespannung unter 3,2 V liegt, lädt das Handy trotz Anzeige nicht tatsächlich.

4). Das Solarpanel benötigt möglicherweise lange Zeiten direkter Sonneneinstrahlung, um die Batterien ausreichend zu laden. 18650-Batterien sollten nicht direktem Sonnenlicht ausgesetzt werden und hohe Temperaturen in der Umgebung sollten vermieden werden, um ein Durchbrennen zu verhindern.

5). Wenn Sie Ihre 18650-Batterie schnell laden möchten, können Sie die Batterie mit einem speziellen 18650-Ladegerät laden. Oder verwenden Sie ein USB-2.0-zu-Micro-USB-Kabel, um das Lademodul anzuschließen und die Batterie mit einem Computer oder Netzteil zu laden. (USB-2.0-zu-Micro-USB-Kabel ist nicht im Kit enthalten)

6). Dies ist nur ein Simulationsversuch und wird Ihren täglichen Strombedarf nicht decken, verwenden Sie es nicht als reguläre Stromquelle für Ihr Handy.