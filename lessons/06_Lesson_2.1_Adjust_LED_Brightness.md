## Les 2.1: Pas de helderheid van de LED aan

De benodigde hardware voor deze les, de configuratie van de Arduino IDE en de bedrading tussen de LED-module en de besturingskaart zijn op dezelfde manier als **Les 1.1**.

**(1).Beschrijving：**

In de vorige les hebben we de LED aan- en uitgezet en laten knipperen.

In dit project zullen we de helderheid van de LED regelen via PWM om een ademhalingseffect te simuleren. Op dezelfde manier kun je de stapgrootte en de vertragingstijd in de code wijzigen om verschillende ademhalingseffecten te demonstreren.

![](../media/d1f48d97cbe0b6a29389c20533bfc00c.png)PWM is een manier om de analoge uitgang via digitale middelen te regelen. Digitale besturing wordt gebruikt om vierkante golven met verschillende duty cycles te genereren (een signaal dat constant wisselt tussen hoge en lage niveaus) om de analoge uitgang te regelen. Over het algemeen zijn de ingangsspanningen van de poort 0V en 5V. Wat als 3V nodig is? Of wat als er geschakeld moet worden tussen 1V, 3V en 3,5V? We kunnen de weerstand niet constant veranderen. Voor deze situatie moeten we regelen met PWM.

Voor de Arduino digitale poort spanningsuitgang zijn er alleen LOW en HIGH, die overeenkomen met een uitgangsspanning van 0V en 5V. Je kunt LOW definiëren als 0 en HIGH als 1, en de Arduino vijfhonderd 0- of 1-signalen binnen 1 seconde laten uitsturen.

Als er vijfhonderd 1-en worden uitgezonden, is dat 5V; als ze allemaal 0 zijn, is dat 0V. Als er op deze manier 010101010101 wordt uitgezonden, is de uitgangspoort 2,5V, wat lijkt op het afspelen van een film. De film die we bekijken is niet volledig continu. Hij geeft eigenlijk 25 beelden per seconde weer. In dit geval kan de mens het niet onderscheiden, net zoals bij PWM. Als je een andere spanning wilt, moet je de verhouding van 0 en 1 regelen. Hoe meer 0- en 1-signalen per tijdseenheid worden uitgezonden, hoe nauwkeuriger de regeling.

![](../media/9ce4c120ad6d763102eb2544777c8536.png)

![](../media/fa2a60fcb812e3bb3a4776ac96bef1cb.png)

**(2).Code-uitleg:**

Wanneer we sommige instructies moeten herhalen, kunnen we de FOR-instructie gebruiken.

Het formaat van de FOR-instructie wordt hieronder weergegeven:

![](../media/f413519de8de75a850c98ac7695300fa.jpeg)

FOR-cyclische volgorde:

Ronde 1：1 → 2 → 3 → 4

Ronde 2：2 → 3 → 4

…

Totdat nummer 2 niet meer wordt bereikt, is de “for”-lus voorbij,

Na het begrijpen van deze volgorde, terug naar de code:

for (int value = 0; value < 255; value=value+1){

…}

for (int value = 255; value >0; value=value-1){

…}

De twee “for”-instructies laten value toenemen van 0 tot 255, daarna afnemen van 255 tot 0, dan weer toenemen tot 255, … oneindig herhalen.

Er is een nieuwe functie in het volgende —– analogWrite()

We weten dat de digitale poort slechts twee toestanden heeft, 0 en 1. Hoe stuur je dan een analoge waarde naar een digitale waarde? Hiervoor is deze functie nodig. Laten we het Arduino-bord bekijken en 6 pinnen vinden die gemarkeerd zijn met “\~” en PWM-signalen kunnen uitsturen.

Functieformaat als volgt:

analogWrite(pin,value)

analogWrite() wordt gebruikt om een analoge waarde van 0~255 te schrijven voor een PWM-poort, dus de waarde ligt in het bereik van 0~255. Let op dat je alleen de digitale pinnen met PWM-functie schrijft, zoals pin 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 44, 45, 46.

PWM is een technologie om een analoge grootheid te verkrijgen via digitale methode. Digitale besturing vormt een vierkante golf, en het vierkante golfsignaal heeft slechts twee toestanden: aan en uit (dat wil zeggen, hoge of lage niveaus). Door de verhouding van de duur van aan en uit te regelen, kan een spanning van 0 tot 5V worden gesimuleerd. De tijd dat het aan is (wetenschappelijk aangeduid als hoog niveau) wordt pulsbreedte genoemd, daarom wordt PWM ook pulsbreedtemodulatie genoemd.

Aan de hand van de volgende vijf vierkante golven leren we meer over PWM.

![](../media/7c9452d3bb97cfee514ef146045866a8.png)

In bovenstaande afbeelding stelt de groene lijn een periode voor, en de waarde van analogWrite() komt overeen met een percentage dat ook Duty Cycle wordt genoemd. Duty cycle betekent dat de duur van het hoge niveau wordt gedeeld door de duur van het lage niveau in een cyclus. Van boven naar beneden is de duty cycle van de eerste vierkante golf 0% en de bijbehorende waarde is 0. De helderheid van de LED is het laagst, dat wil zeggen uitgeschakeld. Hoe langer het hoge niveau duurt, hoe helderder de LED. Daarom is de laatste duty cycle 100%, wat overeenkomt met 255, de LED is het helderst. 25% betekent donkerder.

PWM wordt meestal gebruikt om de helderheid van LED’s of de draaisnelheid van motoren aan te passen.

Het speelt een cruciale rol bij het besturen van slimme robotauto’s.