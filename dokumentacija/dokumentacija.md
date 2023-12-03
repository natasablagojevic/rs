# Dokumentacija

### Igranje igre

#### Kratak opis: 
Igrač započinje novu igru unutar glavnog menija aplikacije. Upisuje svoje ime i aplikacija započinje igru. Nakon prelaska igrice, pokazuje se rezultat igrača.

#### Akteri:
Igrač

#### Preduslovi:
Aplikacija je otvorena i prikazuje glavni meni.

#### Postuslovi:
Igrač je uspešno završio igru. Aplikacija prikazuje rezultate i omogućava korisniku dalje akcije (npr. ponovno igranje).

#### Osnovni tok događaja:
```
1. Igrač bira dugme "Započni igru" iz glavnog menija.
2. Aplikacija prikazuje igraču tekst za unos imena.
3. Igrač konfiguriše postavke prema svojim željama.
4. Aplikacija inicira novu igru i prikazuje početno stanje igre.
5. Čuva se inicijalno stanje igre i ime igrača.
6. Prelazi se na slučaj upotrebe "Prvi nivo". Po završetku prelazi se na korak 7.
7. Prelazi se na slučaj upotrebe "Drugi nivo". Po završetku prelazi se na korak 8.
8. Prelazi se na slučaj upotrebe "Treći nivo". Po završetku prelazi se na korak 9.
9. Prelazi se na slučaj upotrebe "Četvrti nivo". Po završetku prelazi se na korak 10.
10. Nakon prelaska cele igrice prikazuje se konačni rezultat.
11. Prelazi se na slučaj upotrebe "Čuvanje rezultata".  Po završetku prelazi se na korak 12
12. Aplikacija se vraća u glavni meni.
```

#### Alternativni tokovi:
```
A1: Neočekivani izlaz igrača iz aplikacije. Ukoliko u bilo kojem trenutku dođe do prekida rada aplikacije, 
sve do tada sačuvane informacije se trajno čuvaju, a ostalo se poništava. Slučaj upotrebe se završava.
```

#### Podtokovi: /
#### Specijalni zahtevi: /
#### Dodatne informacije: /

<hr>

### Prvi nivo
**Kratak opis**: Igrač na početku otvara prvi nivo, i dobija šest izazova koje sve treba da uradi tačno, kako bi na kraju dobio informaciju o novo otključanom nivou i prelasku na njega.

**Akteri**: Igrač - osoba koja rešava izazove u okviru prvog nivoa

**Preduslovi**: Otvoren je i pokrenut prozor za igranje Prvog nivoa.

**Postuslovi**: Nakon što igrač završi Prvi nivo, prelazi se na Drugi nivo i podaci se ažuriraju.

**Osnovni tok**:

     1. Aplikacija daje pravo igraču da započne igranje prvog nivoa
     2. Aplikacija otvara prvi nivo i niz od šest izazova koje igrač treba da reši
     3. Otvara se prvi izazov
      3.1 Igrač dobija sliku mozgalice koju treba da složi
       3.1.1 Ako igrač uspešno složi mozgalicu, prelazi na korak 3.2
      3.2 Prikaz edukativnog sadržaja
      3.3 Prikaz asocijacije za sledeću lokaciju
       3.3.1 Unošenje tačnog rešenja i otključavanje naredne lokacije
    
     4. Otvara se drugi izazov
      4.1 Igrač dobija hanojske kule koje treba da složi
       4.1.1 Ako igrač uspešno složi hanojske kule, prelazi na korak 4.2
      4.2 Prikaz edukativnog sadržaja
      4.3 Prikaz asocijacije za sledeću lokaciju
       4.3.1 Unošenje tačnog rešenja i otključavanje naredne lokacije
    
     5. Otvara se trći izazov
      5.1 Igrač dobija reč koju treba da speluje morzeovim slovima
       5.1.1 Ako igrač uspešno sepluje zadatu reč, prelazi na korak 5.2
      5.2 Prikaz edukativnog sadržaja
      5.3 Prikaz asocijacije za sledeću lokaciju
       5.3.1 Unošenje tačnog rešenja i otključavanje naredne lokacije
    
     6. Otvara se četvrti izazov
      6.1 Igrač dobija kviz kojeg treba da reši
       6.1.1 Ako igrač uspešno reši kviz, prelazi na korak 6.2
      6.2 Prikaz edukativnog sadržaja
      6.3 Prikaz asocijacije za sledeću lokaciju
       6.3.1 Unošenje tačnog rezultata i otključavanje naredne lokacije
    
     7. Otvara se peti izazov
      7.1 Igrač dobija dobija slova koja treba da permutira, kako bi došao do tačnog rešenja
       7.1.1 Ako igrač uspešno ispermutuje slova, prelazi na korak 7.2
      7.2 Prikaz edukativnog sadržaja
      7.3 Prikaz asocijacije za sledeću lokaciju
        7.3.1 Unošenje tačnog rezultata i otključavanje naredne lokacije
    
     8. Otvara se šesti izazov
      8.1 Igrač dobija sliku, i pritiskom na nju dobija šifru koju treba da reši
       8.1.1 Ako igrač uspešno pogodi šifru, uspešno završava prvi nivo i prelazi na korak 8.2
      8.2 Prikaz edukativnog sadržaja
    
     9. Aplikacija ažurira trenutno postignuti rezultat
     10. Prelazak na slučaj upotrebe Drugi nivo

**Alternativni tok**:
* A1: Neočekivani izlaz iz aplikacije. Ako korisnik u bilo kom trenutku isključi aplikaciju, sve zapamćene informacije se sačuvavaju i aplikacija završava rad. Slučaj upotrebe se završava.

**Podtokovi**: /

**Specijalni zahtevi**: /

**Dodatne informacije**: Tokom igranja prvog nivoa, aplikacija pamti rezultat koji je igrač postigao.

<hr>

### Drugi nivo

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

<hr>

### Treći nivo

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

<hr>

### Čuvanje rezultata

**Kratak opis**: Prilikom kompletiranja igrice ili uspešno savladanog _Challenge_-a, čuvaju se informacije o rezultatima igrača.

**Akteri**: /

**Preduslovi**: Igrač je uspešno savladao sve nivoe igrice, ili je uspešno završio jedan _Challenge_.

**Postuslovi**: Podaci o trenutnom stanju igre za datog igrača su trajno sačuvani.

**Osnovni tok**:
```
1. Aplikacija serijalizatoru podataka šalje informacije o igraču i trenutnom stanju igrice
2. Podaci se serijalizuju
3. Serijalizovani podaci se skladište u fajl sistemu
4. Nastavlja se tok Igranje igre
```
**Aletarnativni tokovi**:
```
A1: Neočekivani zlaz iz aplikacije. Ukoliko u bilo kojem koraku dođe do prekida rada aplikacije, zapamćeni rezultati neće biti sačuvani. Slučaj upotrebe se završava.
A2: Igrač je kompletirao igricu. Ako je igrač savladao sve nivoe, u koraku 4. se prikazuje Tabela sa rezultatima. Slučaj upotrbe se završava.
```
**Podtokovi**: /

**Specijalni zahtevi**: /

**Dodatne informacije**: Tokom igranja drugog nivoa, aplikacija pamti rezultat koji je igrač postigao.

<hr>

### Nastavljanje igre

#### Kratak opis: 
Igrač nastavlja prethodno sačuvanu igru.

#### Akteri:
Igrač

#### Preduslovi:
Postoji prethodno sačuvana igra.

#### Postuslovi:
Igrač uspesno nastavlja igru.

#### Osnovni tok događaja:
```
1. Igrač bira opciju "Nastavi igru" iz glavnog menija.
2. Aplikacija prikazuje listu sačuvanih igara.
3. Igrač bira željenu sačuvanu igru.
4. Aplikacija učitava prethodno sačuvano stanje igre i učitava staru mapu.
5. Igrica se nastavlja iz tog stanja.
```

#### Alternativni tokovi:
```
A1: Neočekivani izlaz igrača iz aplikacije. Ukoliko u bilo kojem trenutku dođe do prekida rada aplikacije, 
sve do tada sačuvane informacije se trajno čuvaju, a ostalo se poništava. Slučaj upotrebe se završava.
```

#### Podtokovi: /
#### Specijalni zahtevi: /
#### Dodatne informacije: /

<hr>

### Prikaz rezultata

**Kratak opis**: Aplikacija prikazuje poene igrača koje je ostvario u partiji.

**Akteri**: Igrač

**Preduslovi**: Završeni su svi nivoi.

**Postuslovi**: Aplikacija prikazuje glavni meni.

**Osnovni tok**:  

      1. Igrač pritiska dugme iz glavnog menija kako bi se prikazali rezultati.  
      2. Aplikacija prikazuje prozor na kome se u obliku tabele prikazuju rezultati.  
      3. Igrač pritiska dugme koje ga vraća na glavni meni. 
      4. Aplikacija prikazuje glavni meni. 

**Alternativni tokovi**: 
* A1: Neočekivani izlaz iz aplikacije: Ako u bilo kom koraku korisnik prekine aplikaciju, sve zapamćene informacije o nivoima se sačuvavaju i aplikacija završava rad. Slučaj upotrebe je završen.

**Podtokovi**: /

**Specijalni zahtevi**: /

**Dodatne informacije**: /	

<hr>

#### Slučaj upotrebe: Podešavanje

#### Kratak opis:
Igrac bira opciju Podešavanje iz glavnog menija aplikacije. Izborom te opcije
otvara se prozor u kome se mogu podesiti zvuk I ton klika.


#### Akteri:
- Igrač
#### Preduslovi:
- Aplikacija je pokrenuta I prikazan je glavni meni.

#### Osnovni tok:
    1. Igrac bira dugme "Podešavanje" iz glavnog menija.
    2. Aplikacija prikazuje prozor sa opcijama koje se mogu izmeniti.
    3. Ako je igrač izabrao opciju podešavanje jačine zvuka
       3.1. Ako je izabrao odredjenu opciju
          3.1.1. Izabrana opcija se primenjuje do kraja igre
       3.2. Inače se primenjuju podrazumevana podešavanja za jačinu zvuka
    4. Ako je igrač izabrao opciju podešavanje tona klika
       4.1. Ako je izabrao odredjenu opciju
          4.1.1. Izabrana opcija se primenjuje do kraja igre
       4.2. Inače se primenjuju podrazumevana podesavanja za ton klika
    5. Igrac bira dugme "Nazad" za povratak u glavni meni

#### Alternativni tokovi:
- A1: Neočekivani izlaz iz aplikacije. Ako prilikom podešavanja igre,
korisnik iskljuci aplikaciju, sve izabrane opcije podešavanja se brisu I
aplikacija završava rad. Slučaj upotrebe se zavrsava.

#### Podtokovi: /
#### Specijalni zahtevi: /
#### Dodatne informacije:/

