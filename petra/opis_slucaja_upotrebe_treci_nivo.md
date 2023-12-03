**Kratak opis**: Igrač nakon završenog prvog, drugog i trećeg nivoa, igra četvrti nivo i dobija novih 6 lokacija. Korisniku nisu unapred poznate lokacije kojim će se kretati, poznata mu je samo početna lokacija, ostale su zaključane. 
Svaka lokacija sadrži izazov. Nakon rešenog izazova, korisnik dobija šifru koju treba da unese u odgovarajuće polje.
Ukoliko je uneta šifra dobra, korisniku se otključavaju dve stvari: edukativni tekst i slika koja predstavlja asocijaciju za sledecu lokaciju. 
Korisnik rešenje te asocijacije treba da unese u odgovarajuće polje. Tačno rešenje otključava narednu lokaciju.
Tako igrač napreduje: lokacija -> izazov -> edukativni tekst, slika -> sledeca lokacija
Ukoliko korisnik to želi, može kliknuti dugme Hint da bi mu se ukazala neka pomoć.


**Akteri**: Igrač - osoba koja rešava izazove u okviru četvrtog nivoa

**Preduslovi**: Igrač je uspešno završio prvi, drugi i treći nivo

**Postuslovi**: Nakon što igrač završi treći nivo, prelazi se na četvrti nivo i podaci se ažuriraju.

**Osnovni tok**:

     1. Otvara se prvi izazov
      1.1 Igrač dobija 4 slike. Zadatak je da klikne na uljeza.
       1.1.1 Ako igrač uspešno nađe uljeza, pređi na korak 1.2
      1.2 Prikaz edukativnog sadržaja
      1.3 Prikaz asocijacije za sledeću lokaciju
       1.3.1. Tačno rešenje asocijacije se unosi u odgovarajuće polje i naredna lokacija se otključava.
    
     2. Otvara se drugi izazov
      2.1 Igraču se prikazuju dve kolone. Zadatak je spojiti pojmove iz kolone A sa pojmovima iz kolone B.
       2.1.1 Kada igrač uspešno poveže sve pojmove, otkriva mu se šifra za trenutnu lokaciju. 
      2.2 Prikaz edukativnog sadržaja
      2.3 Prikaz asocijacije za sledeću lokaciju
       2.3.1. Tačno rešenje asocijacije se unosi u odgovarajuće polje i naredna lokacija se otključava.
    
     3. Otvara se treći izazov
      3.1 Igraču se
       3.1.1 Ako igrač uspešno pogodi imena svih svetaca, otkriva mu se šifra za trenutnu lokaciju.
      3.2 Prikaz edukativnog sadržaja
      3.3 Prikaz asocijacije za sledeću lokaciju
       3.3.1. Tačno rešenje asocijacije se unosi u odgovarajuće polje i naredna lokacija se otključava.
    
     4. Otvara se četvri izazov
      4.1 Igraču se 
       4.1.1 Ako igrač pogodi redosled dugmića, otkriva mu se šifra za trenutnu lokaciju.
      4.2 Prikaz edukativnog sadržaja
      4.3 Prikaz asocijacije za sledeću lokaciju
       4.3.1. Tačno rešenje asocijacije se unosi u odgovarajuće polje i naredna lokacija se otključava.
    
     5. Otvara se peti izazov
      5.1 Igrač dobija 
       5.1.1 Kada igrač reši anagram, unosi šifru. 
      5.2 Prikaz edukativnog sadržaja
      5.3 Prikaz asocijacije za sledeću lokaciju
       5.3.1. Tačno rešenje asocijacije se unosi u odgovarajuće polje i naredna lokacija se otključava.
    
     6. Otvara se šesti izazov
      6.1 Ovaj 'izazov' je više simboličan, jer je igrač došao do kraja. Na ekranu se samo pokazuje šifra za konačnu lokaciju.
       6.1.1 Igrač unosi zadatu šifru.
      6.2 KRAJ
    
     7. Aplikacija ažurira postignuti rezultat
     8. Prelazak na glavni meni

**Alternativni tok**:
* A1: Neočekivani izlaz iz aplikacije. Ako korisnik u bilo kom trenutku isključi aplikaciju, sve zapamćene informacije se sačuvavaju i aplikacija završava rad. Slučaj
     upotrebe se završava.
     
**Podtokovi**: /

**Specijalni zahtevi**: /

**Dodatne informacije**: Tokom igranja trećeg nivoa, aplikacija pamti rezultat koji je igrač postigao.
