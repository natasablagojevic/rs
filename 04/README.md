### Signali i Slotovi

- kada pokrenemo **main** funkciju, tada se poziva **exec** funkcija koja <br>
  zapocinje izvrsavanje **petlje dogadjaja** 

- dogadjaji su sta god u nasem projektu

- koritimo sokete ako nam treba neka komunikacija izmedju nekih korisnika

- korisnik je kliknuo na dugme, i to je neka vrsta dogadjaja

- okini, prihvati

- signali =
	- svaka klasa mora da ima **Q_OBJECT** makro
	- **signals** modifikator pristupa, i tu navodimo samo deklaracije funkcija
	- moze da ima 0, 1, ili vise vrednosti
	- objekat koji implementira signal, mora u nekom momentu da kaze **emit mySignal(7)**
 
- slotovi = 
	- metodi u nekim klasama
	- svaka klasa mora da ima **Q_OBJECT** makro
	- **slots** modifikator 
	- tu implementiramo metode iz signala
	- **QObject::connect(&a, &A::mySignal, &b, &B::mySlot);**

- kada radimo sa grafickim scenom, da preferiramo da koristimo QtConection

### Scena

- GraphicsWiew
	- pogled = instanca klase QGraphicsView (prikazi elemente koje hocemo da se iscrtavaju)
	- scena = instanca klase QGraphicsScene (logickog kraktera; sluzi nam samo da nam kaze da imamo te i te elemente koji su na tim i tim pozicijama)
	- elementi = vise instanci klase QGrahicsItem ()

	- mozemo da definisemo da pogled bude na samo odredjenom delu scene 
		- korisno je ako hocemo da implementiramo neke platforme
		- **GraphicsView framework** ce da izrenderuje samo one elemente koji se nalaz u pogledu
		- 
	- svi elementi na sceni moraju da naslede klasu **QGraphicsItem**
		- postoje dva metoda koja se moraju implementirati cim nasledimo ovu klasu (ovderride)
			- boundingRect (za definisanje pravougaonika na nasoj sceni u okviru kojeg mora da se iscrta taj nas element kog zelimo da prikazemo)
			- paint (za definisanje nacina na koji se element iscrtava)

		- artefakti  = kada pomeramo element, a on iscrtava cudne linije po crtezu (proveriti da li crtamo izvan okvira ogranicenog **boundigRect-om**)
		- koordinatni sistemi:
			- **x** raste na desno
			- **y** raste na dole

		- scena je vlasnik tog elementa (tj. elementa kog mi dodamo) i kada se scena unisti, unistice se i taj objekat
			- POSLEDICA: kada skinemo neki element sa scene, tada scena vise nije njegov vlasnik i taj objekat se nece obrisati => kada pozovemo **clear** ili **remove** moramo da pozovemo samo **delete**
			- kako ne bismo imali curenje memorije

	- da razdvajamo sam prikaz od modela (koja implementira logiku) 
	- odvajanje modela od reprezentacije
	

	- umesto switch-a koristiti polimorfizam!
			
	- tablu moramo da povezemo sa pogledom
		- to se radi u mainwindow (cuvam kao: **QGraphicsScene`*` tabela**)

	- povezivanje scene i pogleda vrsimo preko:
		- **ui->gvTabela->setSene(m_tabela);**

	- 
