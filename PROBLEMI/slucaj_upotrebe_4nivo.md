**Kratak opis:** Igrač nakon završenog trećeg nivoa, dobija mogućnost da pređe na četvrti nivo tj. završni i time kompletira celu sliku o Beogradu. Unutar četvrtog nivoa nalaze se izazovi, koje trebaš rešiti kako bi dobio titulu najboljeg poznavatelja grada.

**Akteri:** Igrač - osoba koja rešava izazove u okviru četvrtog nivoa

**Preduslovi:** Igrač je uspešno završio četvrti nivo

**Postuslovi:** Nakon završenog četvrtog nivoa, podaci se ažuriraju i prikazuju se ostvareni rezultati

**Osnovni tok:**

```
1. Otvara se prvi izazov
 1.1 Igrač dobija ...
  1.1.1 Ako igrač uspešno reši, prelazi na korak 1.2
 1.2 Prikaz edukativnog sadržaja
 1.3 Prikaz asocijacije za sledeću lokaciju
  1.3.1 Unošenje tačnog rešenja i otključavanje naredne lokacije

2. Otvara se drugi izazov
 2.1 Igrač dobija ...
  2.1.1 Ako igrač uspešno reši, prelazi na korak 2.2
 2.2 Prikaz edukativnog sadržaja
 2.3 Prikaz asocijacije za sledeću lokaciju
  2.3.1 Unošenje tačnog rešenja i otključavanje naredne lokacije

3. Otvara se treći izazov
 3.1 Igrač dobija ...
  3.1.1 Ako igrač uspešno reši, prelazi na korak 3.2
 3.2 Prikaz edukativnog sadržaja
 3.3 Prikaz asocijacije za sledeću lokaciju
  3.1 Unošenje tačnog rešenja i otklučavanje naredne lokacije

4. Otvara se četvrti izazov
  4.1 Igrač dobija delimično popunjen magični kvadrat, kojeg treba popuniti
    4.1.1 Ako igrač uspešno popuni magični kvadrat, prelazi se na korak 4.2
  4.2 Prikaz edukativnog sadržajaž

5. Aplikacija ažurira postignuti rezultat
6. Prelazak na slučaj upotrebe Prikaz Rezultata

```
**Alternativni tokovi:**
* A1: Neočekivani izlaz iz aplikacije. Ako korisnik u bilo kom trenutku isključi aplikaciju, sve zapamćene informacije se sačuvavaju i aplikacija završava rad. Slučaj upotrebe se završava.

**Dodatne informacije:** Tokom igranja četvrtog nivoa, aplikacija pamti rezultat koji je igrač postigao.



