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
