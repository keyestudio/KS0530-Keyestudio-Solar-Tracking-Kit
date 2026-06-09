## Lektion 2.1: Helligkeit der LED einstellen

Die für diese Lektion benötigte Hardware, die Konfiguration der Arduino IDE und die Verkabelung zwischen dem LED-Modul und dem Steuerboard sind genauso wie in **Lektion 1.1**.

**(1). Beschreibung：**

In der vorherigen Lektion haben wir die LED ein- und ausgeschaltet und zum Blinken gebracht.

In diesem Projekt steuern wir die Helligkeit der LED über PWM, um einen Atemeffekt zu simulieren. Ebenso können Sie die Schrittweite und die Verzögerungszeit im Code ändern, um verschiedene Atemeffekte zu demonstrieren.

![](../media/d1f48d97cbe0b6a29389c20533bfc00c.png)PWM ist ein Mittel, um analoge Ausgänge digital zu steuern. Die digitale Steuerung erzeugt Rechtecksignale mit unterschiedlichen Tastverhältnissen (ein Signal, das ständig zwischen hohen und niedrigen Pegeln wechselt), um den analogen Ausgang zu kontrollieren. Im Allgemeinen liegen die Eingangsspannungen des Ports bei 0V und 5V. Was ist, wenn 3V benötigt werden? Oder wenn zwischen 1V, 3V und 3,5V gewechselt werden soll? Wir können nicht ständig den Widerstand ändern. Für diese Situation benötigen wir die Steuerung mittels PWM.

Für die digitale Ausgangsspannung des Arduino-Ports gibt es nur LOW und HIGH, die 0V bzw. 5V entsprechen. Man kann LOW als 0 und HIGH als 1 definieren und den Arduino innerhalb von 1 Sekunde fünfhundert 0- oder 1-Signale ausgeben lassen.

Wenn fünfhundert 1 ausgegeben werden, entspricht das 5V; wenn alle 0 sind, entspricht das 0V. Wenn man auf diese Weise 010101010101 ausgibt, beträgt die Ausgangsspannung 2,5V, was einem Film ähnelt. Der Film, den wir sehen, ist nicht vollständig kontinuierlich. Er gibt tatsächlich 25 Bilder pro Sekunde aus. In diesem Fall kann der Mensch das nicht erkennen, ebenso wenig PWM. Wenn man unterschiedliche Spannungen möchte, muss man das Verhältnis von 0 und 1 steuern. Je mehr 0- und 1-Signale pro Zeiteinheit ausgegeben werden, desto genauer die Steuerung.

![](../media/9ce4c120ad6d763102eb2544777c8536.png)

![](../media/fa2a60fcb812e3bb3a4776ac96bef1cb.png)

**(2). Code-Erklärung:**

Wenn wir einige Anweisungen wiederholen müssen, können wir die FOR-Anweisung verwenden.

Das Format der FOR-Anweisung ist wie folgt:

![](../media/f413519de8de75a850c98ac7695300fa.jpeg)

FOR-Zyklusfolge:

Runde 1：1 → 2 → 3 → 4

Runde 2：2 → 3 → 4

…

Bis die Zahl 2 nicht mehr erfüllt ist, ist die „for“-Schleife beendet.

Nachdem wir diese Reihenfolge kennen, zurück zum Code:

for (int value = 0; value < 255; value=value+1){

…}

for (int value = 255; value >0; value=value-1){

…}

Die beiden „for“-Anweisungen lassen value von 0 auf 255 steigen, dann von 255 auf 0 sinken, dann wieder auf 255 steigen, … unendlich oft.

Es gibt eine neue Funktion im Folgenden —– analogWrite()

Wir wissen, dass der digitale Port nur zwei Zustände hat: 0 und 1. Wie sendet man also einen analogen Wert an einen digitalen Port? Hier wird diese Funktion benötigt. Schauen wir uns das Arduino-Board an und finden 6 Pins mit der Markierung „~“, die PWM-Signale ausgeben können.

Funktionsformat wie folgt:

analogWrite(pin,value)

analogWrite() wird verwendet, um einen analogen Wert von 0~255 für PWM-Ports zu schreiben, daher liegt der Wert im Bereich von 0~255. Achten Sie darauf, dass Sie nur digitale Pins mit PWM-Funktion beschreiben, wie z.B. Pin 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 44, 45, 46.

PWM ist eine Technologie, um analoge Größen durch digitale Methoden zu erhalten. Die digitale Steuerung erzeugt ein Rechtecksignal, das nur zwei Zustände hat: Ein- und Ausschalten (also hohe oder niedrige Pegel). Durch Steuerung des Verhältnisses der Ein- und Ausschaltzeit kann eine Spannung von 0 bis 5V simuliert werden. Die Einschaltzeit (fachsprachlich als High-Level bezeichnet) wird Pulsbreite genannt, daher heißt PWM auch Pulsweitenmodulation.

Anhand der folgenden fünf Rechtecksignale lernen wir PWM besser kennen.

![](../media/7c9452d3bb97cfee514ef146045866a8.png)

In der obigen Abbildung stellt die grüne Linie eine Periode dar, und der Wert von analogWrite() entspricht einem Prozentsatz, der auch als Duty Cycle bezeichnet wird. Der Duty Cycle gibt an, wie lange der High-Pegel im Verhältnis zum Low-Pegel in einem Zyklus anhält. Von oben nach unten beträgt der Duty Cycle des ersten Rechtecksignals 0% und sein entsprechender Wert ist 0. Die LED-Helligkeit ist am niedrigsten, also aus. Je länger der High-Pegel anhält, desto heller leuchtet die LED. Daher beträgt der letzte Duty Cycle 100%, was 255 entspricht, die LED ist am hellsten. 25% bedeutet dunkler.

PWM wird hauptsächlich verwendet, um die Helligkeit von LEDs oder die Drehzahl von Motoren zu steuern.

Es spielt eine wichtige Rolle bei der Steuerung von intelligenten Roboterautos.