**Kratak opis**: <br>
Igrač na početku otvara prvi nivo, i dobija šest izazova koje sve treba da uradi tačno, kako bi na kraju dobio informaciju o novo otključanom nivou i prelasku na njega.

**Akteri**: <br>
Igrač - osoba koja rešava izazove u okviru prvog nivoa

**Preduslovi**: <br>
Otvoren je i pokrenut prozor za igranje Prvog nivoa.

**Postuslovi**: <br>
Nakon što igrač završi Prvi nivo, prelazi se na Drugi nivo i podaci se ažuriraju.

**Osnovni tok**:

    1. Aplikacija daje pravo igraču da započne igranje prvog nivoa
    2. Aplikacija otvara prvi nivo i niz od šest izazova koje igrač treba da reši 
    3. Otvara se prvi izazov
     3.1 Igrač dobija sliku mozgalice koju treba da složi
      3.1.1 Ako igrač uspešno složi mozgalicu, prelazi na drugi izazov
      3.1.2 Ako igrač pogreši, dobija hint
       3.1.2.1 Ako odgovori tačno, prelazi na drugi izazov
       3.1.2.2 Ako pogrešno odgovori, prikazuje mu se rešenje i prelazi na drugi izazov
     3.2 Prikaz edukativnog sadržaja

    4. Otvara se drugi izazov
     4.1 Igrač dobija hanojske kule koje treba da složi
      4.1.1 Ako igrač uspešno složi hanojske kule, prelazi na treći izazov
      4.1.2 Ako igrač pogreši, dobija hint
       4.1.2.1 Ako odgovori tačno, prelazi na treći izazov
       4.1.2.2 Ako pogrešno odgovori, prikazuje mu se rešenje i prelazi na treći izazov
     4.2 Prikaz edukativnog sadržaja
     4.3 Dobija slicicu koja se stavlja u inventar

    5. Otvara se trći izazov
     5.1 Igrač dobija reč koju treba da speluje morzeovim slovima
      5.1.1 Ako igrač uspešno sepluje zadatu reč, prelazi na četvri izazov
      5.1.2 Ako igrač pogreši, dobija hint
       5.1.2.1 Ako uspešno da odgovor, prelazi na četvrti izazov
       5.1.2.2 Ako je pokušaj bio neuspešan, prikazuje se rešenje i prelazi na četvrti izazov
     5.2 Prikaz edukativnog sadržaja

    6. Otvara se četvrti izazov 
     6.1 Igrač dobija kviz kojeg treba da reši
      6.1.1 Ako igrač uspešno reši kviz, prelazi na peti izazov
      6.1.2 Akog igrač pogreši, dobija hint
       6.1.2.1 Ako uspešno da odgovori, prelazi na peti izazov 
       6.1.2.2 Ako je pokušaj bio bezuspešan, prikazuje se rešenje i prelazi se na peti izazov
     6.2 Prikaz edukativnog sadržaja

    7. Otvara se peti izazov
     7.1 Igrač dobija dobija slova koja treba da permutira, kako bi došao do tačnog rešenja
      7.1.1 Ako igrač uspešno ispermutuje slova, prelazi na šesti izazov
      7.1.2 Ako igrač pogreši, dobija hint 
       7.1.2.1 Ako uspešno odgovori na zadatak, prelazi na šesti nivo
       7.1.2.2 Ako je pokušaj bio bezuspešan, prikazuje se rešenje i prelazi se na šesti nivo
     7.2 Prikaz edukativnog sadržaja

    8. Otvara se šesti izazov
     8.1 Igrač dobija sliku, i pritiskom na nju dobija šifru koju treba da reši
      8.1.1 Ako igrač uspešno pogodi šifru, uspešno završava prvi nivo i prelazi na drugi
      8.1.2 Ako igrač pogreši, dobija hint
       8.1.2.1 Ako uspešno reši šifru, prelazi na drugi nivo
       8.1.2.2 Ako je pokušaj bio bezuspešan, prikazuje se rešenje i prelazi se na drugi nivo
     8.2 Prikaz edukativnog sadržaja

    9. Aplikacija ažurira trenutno postignuti rezultat
    10. Prelazak na drugi nivo

**Alternativni tok**:
 * A1: Neočekivani izlaz iz aplikacije. Ako korisnik u bilo kom trenutku isključi aplikaciju,
 	 sve zapamćene informacije se poništavaju i aplikacija završava rad.
 	 Slučaj upotrebe se završava.

**Podtokovi**: /

**Specijalni zahtevi**: /

**Dodatne informacije**: Tokom igranja prvog nivoa, aplikacija pamti rezultat koji je igrač postigao.
