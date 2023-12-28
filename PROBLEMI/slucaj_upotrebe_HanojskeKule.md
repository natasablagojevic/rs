**Kratak opis:**

**Akteri:** Igrač - osoba koja rešava mini-igru

**Preduslovi:** Igrač je uspešno rešio prethodni izazov

**Postuslovi:** Nakon završene mini-igre, ažurira se rezultat i prelazi se na sledeću mini-igru

**Osnovni tok:**

```
1. Prikazivanje početnog stanja mini-igre
2. Premestanje diskova tako da poslednji stupic izgleda kao prvi
 2.1 Premeštanje najmanjeg diska na drugi stubić
 2.2 Premeštanje srednjeg diska na treći stubić
 2.3 Premeštanje najmanjeg diska na treći stubić
 2.4 Premeštanje najvećeg diska na drugi stubić
 2.5 Premeštanje najmanjeg diska na drugi stubić
 2.6 Premeštanje srednjeg diska na prvi stubić
 2.7 Premeštanje najmanjeg diska na prvi stubić
 2.8 Premeštanje najvećeg diska na treći stubić
 2.9 Premeštanje najmanjeg diska na drugi stubić
 2.10 Premeštanje srednjeg diska na treći stubić
 2.11 Premeštanje najmanjeg diska na treći stubić
3. Prikaz edukativnog teksta
4. Prikaz asocijacije za sledeću lokaciju
 4.1 Unošenje tačnog rešenja i otključavanje naredne lokacije
5. Prelazak na sledeću mini-igru

```

**Alternativni tok:**
* A1: Neočekivani izlaz iz aplikacije. Ako korisnik u bilo kom trenutku isključi aplikaciju, sve zapamćene informacije se sačuvavaju i aplikacija završava rad. Slučaj upotrebe se završava.

**Podtokovi:** / 

**Specijalni zahtevi:** /

**Dodatne informacije:** Tokom igranja mini-igre, aplikacija ažurira postignute rezultate.
