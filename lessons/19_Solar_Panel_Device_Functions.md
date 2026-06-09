# 5.Solarzellen-Gerät mit mehreren Funktionen

Das zusammengebaute Solarzellen-Gerät ist einsatzbereit!

In den vorherigen Lektionen haben wir nur die Funktion und das Funktionsprinzip eines bestimmten elektronischen Bauteils einzeln untersucht und getestet, ob es normal funktioniert.

Jetzt lassen wir sie zusammenarbeiten, um ein Solarzellen-Gerät mit mehreren Funktionen zu bauen.

Halten Sie die 18650-Batterie ausreichend geladen, da sie benötigt wird, um zwei Servos, ein LCD-Display, vier Lichtsensoren, einen DHT11-Sensor und ein Tastenmodul mit Strom zu versorgen.

![](../media/f4b78ac6371097b2e32409c226873651.png)

![](../media/94d386c19c8b95904852ee2a11a4f272.png)

Nachdem der Code erfolgreich hochgeladen wurde, schalten Sie den Netzschalter des Ladermoduls ein und drücken Sie den Netzschalter der Steuerplatine auf 5V.

![](../media/edc80fe0bd7a1cce69bd760ab5d247bc.png)![](../media/67fc5cb5b7eabda71fcb2296a8def597.png)

Das Servo dreht sich auf den Anfangswinkel. Wenn der Umgebungslichtsensor Änderungen der Lichtintensität erkennt, drehen die Servos das Solarzellen-Panel in die Position, in der das Licht am stärksten ist, und das LCD1602 zeigt den Wert der Lichtintensität sowie die von BH1750 und DHT11 jeweils erfasste Temperatur und Luftfeuchtigkeit an.

Wenn Sie das Gefühl haben, dass sich das Solarzellen-Panel zu langsam dreht oder das Panel wackelt, können Sie die Drehgeschwindigkeit des Servos über das Tastenmodul einstellen.

Zum Beispiel dreht sich das Servo innerhalb der vorgegebenen Zeit jedes Mal um 1°. Nach dem Drücken der Taste dreht sich das Servo innerhalb derselben Zeit jedes Mal um 2°.

Drücken Sie erneut, und das Servo dreht sich jedes Mal um 3° innerhalb derselben Zeit. Analog kann das Servo so eingestellt werden, dass es sich bis zu 5° jedes Mal innerhalb derselben Zeit dreht.

**„byte resolution = 1“**

Sie können die Auflösung anpassen, um den Drehwinkel des Servos zu ändern. Drücken Sie die Taste, um die Auflösung von 1° auf 5° zu ändern. Sie können auch `byte m_speed = 10` ändern, um die Verzögerungszeit einzustellen und so die Geschwindigkeit des Servos zu regulieren; je länger die Zeit, desto kleiner die Geschwindigkeit.

![](../media/55bbbb88c4e18c1b90ce588fa76d0e3d.png)