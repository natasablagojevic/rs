**Kratak opis**: Igrač nakon završenog prvog i drugo nivoa, igra treći nivo i dobija novih 6 lokacija. Korisniku nisu unapred poznate lokacije kojim će se kretati, poznata mu je samo početna lokacija, ostale su zaključane. 
Svaka lokacija sadrži izazov. Nakon rešenog izazova, korisnik dobija šifru koju treba da unese u odgovarajuće polje.
Ukoliko je uneta šifra dobra, korisniku se otključavaju dve stvari: edukativni tekst i slika koja predstavlja asocijaciju za sledecu lokaciju. 
Korisnik rešenje te asocijacije treba da unese u odgovarajuće polje. Tačno rešenje otključava narednu lokaciju.
Tako igrač napreduje: lokacija -> izazov -> edukativni tekst, slika -> sledeca lokacija
Ukoliko korisnik to želi, može kliknuti dugme Hint da bi mu se ukazala neka pomoć.

**Akteri**: Igrač - osoba koja rešava izazove u okviru trećeg nivoa

**Preduslovi**: Igrač je uspešno završio prvi i drugi nivo

**Postuslovi**: Nakon što igrač završi treći nivo, prelazi se na četvrti nivo i podaci se ažuriraju.

```
Osnovni tok:
 1. Otvara se prvi izazov
  1.1 Igrač dobija ključeve koje treba da, na osnovu tragova koji su mu priloženi, posloži na odgovarajuća mesta
   1.1.1 Ako igrač uspešno poslaže ključeve, pređi na korak 1.2
  1.2 Prikaz edukativnog sadržaja
  1.3 Prikaz asocijacije za sledeću lokaciju
   1.3.1. Tačno rešenje asocijacije se unosi u odgovarajuće polje i naredna lokacija se otključava.

 2. Otvara se drugi izazov
  2.1 Igraču se prikazuje prozor: slika sa skrivenim objektima i lista objekata koji treba da se nađu
   2.1.1 Kada igrač pronađe sve skrivene objekte, otkriva mu se šifra za trenutnu lokaciju. 
  2.2 Prikaz edukativnog sadržaja
  2.3 Prikaz asocijacije za sledeću lokaciju
   2.3.1. Tačno rešenje asocijacije se unosi u odgovarajuće polje i naredna lokacija se otključava.

 3. Otvara se treći izazov
  3.1 Igraču se prikazuju slike 6 svetaca, njegov zadatak je da ih imenuje. 
   3.1.1 Ako igrač uspešno pogodi imena svih svetaca, otkriva mu se šifra za trenutnu lokaciju.
  3.2 Prikaz edukativnog sadržaja
  3.3 Prikaz asocijacije za sledeću lokaciju
   3.3.1. Tačno rešenje asocijacije se unosi u odgovarajuće polje i naredna lokacija se otključava.

 4. Otvara se četvri izazov
  4.1 Igraču se prikazuje slika sa notnom lestvicom i 6 dugmadi. Svako dugme odgovara jednoj noti. Na osnovu tragova koji su mu dati, korisnik treba da pritisne odgovarajuće dugmiće.
   4.1.1 Ako igrač pogodi redosled dugmića, otkriva mu se šifra za trenutnu lokaciju.
  4.2 Prikaz edukativnog sadržaja
  4.3 Prikaz asocijacije za sledeću lokaciju
   4.3.1. Tačno rešenje asocijacije se unosi u odgovarajuće polje i naredna lokacija se otključava.

 5. Otvara se peti izazov
  5.1 Igrač dobija anagram. Rešenje anagrama je šifra za trenutnu lokaciju.
   5.1.1 Kada igrač reši anagram, unosi šifru. 
  5.2 Prikaz edukativnog sadržaja
  5.3 Prikaz asocijacije za sledeću lokaciju
   5.3.1. Tačno rešenje asocijacije se unosi u odgovarajuće polje i naredna lokacija se otključava.

 6. Otvara se šesti izazov
  6.1 Igrač dobija cvetove u određenim bojama. Zadatak mu je da te cvetove poređa u određenom redosledu na osnovu dosadašnjih i datih tragova.
   6.1.1 Kada igrač ispravno poređa cvetove, prikazuje mu se šifra za trenutnu lokaciju.
  6.2 Prikaz edukativnog sadržaja

 7. Aplikacija ažurira postignuti rezultat
 8. Prelazak na slučaj upotrebe Treći nivo
```
**Alternativni tok**:
 * A1: Neočekivani izlaz iz aplikacije. Ako korisnik u bilo kom trenutku isključi aplikaciju, sve zapamćene informacije se sačuvavaju i aplikacija završava rad. Slučaj
     upotrebe se završava.
     
**Podtokovi**: /

**Specijalni zahtevi**: /

**Dodatne informacije**: Tokom igranja trećeg nivoa, aplikacija pamti rezultat koji je igrač postigao.
