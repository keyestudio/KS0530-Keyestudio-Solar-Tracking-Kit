# 6. Fehlerbehebung

Hier sind einige Lösungen für häufige Probleme, die Ihnen helfen können.

Wenn Sie hier nicht die Antwort finden, die Sie suchen, kontaktieren Sie bitte unseren technischen Support:

Amazon: [service@keyestudio.com](mailto:service@keyestudio.com)

AliExpress: [tivon@keyestudio.com](mailto:tivon@keyestudio.com)

Andere Kanäle: [sunny@keyestudio.com](mailto:sunny@keyestudio.com)

Für eine schnellere und professionellere Lösung Ihres Problems geben Sie bitte beim Senden einer E-Mail folgende Informationen an:

Ihre Bestellnummer oder wo Sie dieses Produkt gekauft haben

Die aufgetretenen Probleme, versuchen Sie detaillierte Beschreibungen, Bilder oder Videos beizufügen.

Wir benötigen mehr Informationen als „Es funktioniert nicht.“ Bitte geben Sie uns genaue Details darüber, was Sie erreichen möchten und was Sie bereits versucht haben.

Vielen Dank!

**(1) Das Steuerboard wird vom Computer nicht erkannt.**

-Bitte überprüfen Sie, ob das USB-Kabel in Ordnung ist und der USB-Anschluss Ihres Computers verfügbar ist.

**(2) USB-Anschluss wird vom Computer nicht erkannt.**

-Prüfen Sie, ob Sie den USB-Treiber installiert haben.

**(3) Code-Probleme/Fehler beim Hochladen/Code-Fehler.**

Diese Gründe können Probleme mit Ihrem Code verursachen:

1) Der Treiber ist nicht installiert.

2) Der Boardtyp und der COM-Port sind in der Arduino IDE nicht korrekt ausgewählt.

3) Die Bibliotheksdatei ist nicht installiert.

(Bitte folgen Sie **2.Getting Started with Arduino**, um die oben genannten Probleme zu beheben)

![](../media/224c21b5aa737f11de351dbd9868e317.png)

**(4) Schlechter USB-Kontakt**

Wenn Sie die Probleme 1-3 nicht haben, überprüfen Sie, ob die USB-Kabelverbindung gut ist, versuchen Sie, es erneut einzustecken, und laden Sie den Code dann erneut hoch.

**(5) Das zusammengebaute Solar-Tracking-Kit reagiert nicht.**

1) Diese Gründe können dazu führen, dass der Roboter nicht funktioniert:

1) Falsche Verkabelung

2) Sie haben den Code nicht hochgeladen

3) Fehler beim Hochladen/Code-Fehler

4) Sie haben den 5V-Schalter auf dem Steuerboard und den Netzschalter am Ladermodul nicht eingeschaltet.

![](../media/67fc5cb5b7eabda71fcb2296a8def597.png)![](../media/edc80fe0bd7a1cce69bd760ab5d247bc.png)

5) Unzureichende Batterieleistung

Sie müssen die 18650-Batterie ausreichend aufgeladen halten, da sie benötigt wird, um zwei Servos, ein LCD-Display, vier Lichtsensoren, einen DHT11-Sensor und ein Tastenmodul mit Strom zu versorgen.

**(6) Servo klemmt/Servo wird heiß**

Sie müssen den Anfangswinkel des Servos vor der Montage einstellen und den Winkel bis zum Abschluss der Montage nicht ändern, um sicherzustellen, dass der Servo für das Solar-Tracking-Kit ordnungsgemäß funktioniert.

**(7) Das Solarpanel folgt nicht der Bewegung der Lichtquelle oder der Sonne**

Wenn der Umgebungslichtsensor Änderungen der Lichtintensität erkennt, drehen die Servos das Solarpanel in die Position, in der das Licht am stärksten ist.

In einer Umgebung mit gleichmäßiger Beleuchtung kann das Solarpanel der Bewegung der Lichtquelle möglicherweise nicht folgen. Sie müssen möglicherweise eine sehr starke Lichtquelle anwenden oder eine Lichtquelle in einem schwach beleuchteten Bereich einsetzen, damit sich das Solarpanel mit der Lichtquelle bewegt. Das Solarpanel bewegt sich möglicherweise nicht zur Sonne, weil der Unterschied in der Lichtintensität, den jeder Umgebungslichtsensor erkennt, nicht groß genug ist.

1.  **Das Solarpanel bewegt sich sehr langsam, ruckelt oder bleibt stecken.**
2.  Prüfen Sie, ob die Servo-Verkabelung ordentlich ist und nicht blockiert, damit der Servo genügend Bewegungsfreiheit hat.
3.  Die 18650-Batterie muss vollständig aufgeladen sein.
4.  Sie können das Tastenmodul drücken, um die Menge der Servodrehung einzustellen.