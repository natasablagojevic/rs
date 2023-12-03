**Kratak opis**: Igrač nakon završenog prvog nivoa, dobija mogućnost da pređe na drugi nivo i da mu se time otvore novih šest izazova koje treba sve da uradi tačno, kako bi na
kraju dobio informaciju o novo otključanom nivou i prelasku na njega.

**Akteri**: Igrač - osoba koja rešava izazove u okviru drugog nivoa

**Preduslovi**: Igrač je uspešno završio prvi nivo

**Postuslovi**: Nakon što igrač završi drugi nivo, prelazi se na treći nivo i podaci se ažuriraju.

**Osnovni tok**:
    
     1. Otvara se prvi izazov
      1.1 Igrač dobija anagram KTAORMNIA, kojom treba napisati reč u tačnom redosledu
       1.1.1 Ako igrač uspešno složi reč, prelazi na korak 1.2
      1.2 Prikaz edukativnog sadržaja
      1.3 Prikaz asocijacije za sledeću lokaciju
       1.3.1 Unošenje tačnog rešenja i otključavanje naredne lokacije
    
     2. Otvara se drugi izazov
      2.1 Igrač dobija igricu "Lost in migration" koju mora da reši u što kraćem vremenu
       2.1.1 Ako igrač uspe da reši igricu, prelazi na korak 2.2.
      2.2 Prikaz edukativnog sadržaja
      2.3 Prikaz asocijacije za sledeću lokaciju
       2.3.1 Unošenje tačnog rešenja i otključavanje naredne lokacije
    
     3. Otvara se trći izazov
      3.1 Igrač dobija namernice čije cene treba da pogodi pre inflacije
       3.1.1 Ako igrač uspešno pogodi cene, prlazi na korak 3.2.
      3.2 Prikaz edukativnog sadržaja
      3.3 Prikaz asocijacije za sledeću lokaciju
       3.3.1 Unošenje tačnog rešenja i otključavanje naredne lokacije
    
     4. Otvara se četvri izazov
      4.1 Igrač dobija knjige koje treba da složi u odgovarajućem redosledu
       4.1.1 Ako igrač uspešno složi knjige, prelazi na korak 4.2.
      4.2 Prikaz edukativnog sadržaja
      4.3 Prikaz asocijacije za sledeću lokaciju
       4.3.1 Unošenje tačnog rešenja i otključavanje naredne lokacije
    
     5. Otvara se peti izazov
      5.1 Igrač dobija igru memorije
       5.1.1 Ako igrač uspešno odigra igru memorije, prelazi na korak 5.2.
      5.2 Prikaz edukativnog sadržaja
      5.3. Prikaz asocijacije za sledeću lokaciju 
       5.3.1 Unošenje tačnog rešenja i otključavane naredne lokacije
    
     6. Otvara se šesti izazov
      6.1 Igrač dobija reč koju treba napisati binarno
       6.1.1 Ako igrač uspešno napiše reč, uspešno završava drugi nivo i prelazi na korak 6.2.
      6.2 Prikaz edukativnog sadržaja
    
     7. Aplikacija ažurira postignuti rezultat
     8. Prelazak na slučaj upotrebe Treći nivo

**Alternativni tok**:
* A1: Neočekivani izlaz iz aplikacije. Ako korisnik u bilo kom trenutku isključi aplikaciju, sve zapamćene informacije se sačuvavaju i aplikacija završava rad. Slučaj
 	upotrebe se završava.
	 
**Podtokovi**: /

**Specijalni zahtevi**: /

**Dodatne informacije**: Tokom igranja drugog nivoa, aplikacija pamti rezultat koji je igrač postigao.
