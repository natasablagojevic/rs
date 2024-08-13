**Kratak opis:** Pred igračom se nalazi mini-igra MATF u kome treba da se reši magični kvadrat. Magični kvadrat je kvadrat u kome je zbir svih elemenata na dijagonalama, redovima i kolonama jednak zbiru 15.

**Akteri:** Igrač - osoba koja rešava mini-igru

**Preduslovi:** Uspešno je završena prethodna mini-igra

**Postuslovi:** Nakon završenog izazova ažurira se rezultat i prikazuju se postignuti rezultati osvojeni tokom celog igranja igre

**Osnovni tok:**

```
1. Iscrtavanje polupopunjenog magičnog kvadrata
2. Popunjavanje kvadrata
 2.1 Popunjavanje prve vrste
  2.1.1 Unošenje jednocifrenog broja na poziciju [1,2]
  2.1.2 Unošenje jednocifrenog broja na poziciju [1,3]
 2.2 Popunjavanje druge vrste
  2.2.1 Unošenje jednocifrenog broja na poziciju [2,1]
 2.3 Popunjavanje treće vrste
  2.3.1 Unošenje jednocifrenog broja na poziciju [3,1]
  2.3.2 Unošenje jednocifrenog broja na poziciju [3,2]
 2.4 Ukoliko je potrebna pomoć, pritiska se dugme `Hint`
3. Proveravanje da li je dati kvadrat u ispravnom formatu, pritiskom na dugme `Provera`
 3.1 Ako je u pogrešnom formatu, prelazi se na korak 2.
 3.2 Ako je u ispravnom formatu, prelazi se na korak 4.
4. Prikazivanje edukativnog teksta
5. Aplikacija ažurira postignuti rezultat
6. Prelazak na slučaj upotrebe Prikaz rezultata
```
**Alternativni tok:**
* A1: Neočekivani izlaz iz aplikacije. Ako korisnik u bilo kom trenutku isključi aplikaciju, sve zapamćene informacije se sačuvavaju i aplikacija završava rad. Slučaj upotrebe se završava.

**Podtokovi:** /

**Specijalni zahtevi:** /

**Dodatne informacije:** Tokom igranja mini-igre, aplikacija ažurira postignute rezultate.
