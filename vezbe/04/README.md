# Notes  - 6 Nedelja

- ne fajl editori, fajl menadzeri,..
- NE: File Manager, stvari vezane za kompilaciju, 

- DA: Slagalica
- Server (ne treba gui)

- <a href="https://www.qt.io/download-qt-installer-oss?hsCtaTracking=99d9dd4f-5681-48d2-b096-470725510d34%7C074ddad0-fdef-4e53-8aa8-5e8a876d6ab4" target="_blank"> Link ka Qt </a>

- QDialog, QWidgets -> za projekte QMainWindow

- not git u QD


- za graficki interfejs: Forms -> MainWindowGUI
- Layout: FormLayout 
- Grid; (Push)Buttons;

- **NE DIRATI XML**

- **C++20**

- Koristiti Qt promenljive: QSharePtr, QString, QMap, QVector, ...
- pametni pokazivaci ne rade sa Qt jer je prastar

- Svaki objekat priprada nekome, nekom roditelju; Hijerarhijska odgovornost o oslobadjanju memorije

- Prosledjuju se pokazivaci za objekte; na kraju bloka se pozove destruktor i on ubije prethodne, tj. svu svoju decu...

- Signal - emitujemo da se neki dogadjaj desio
- Slot - ako se neki dogadjaj desi, ja cu pozvati tu i tu funkciju i to i to ce se desiti     (*slots*)

- *signals:* definisemo potpise (samo u Qt) samo deklaracija bez definicije, kazemo samo da postoji.
- da bi klasa radila, svaka klasa mora da pocinje sa: **Q_OBJECT** obaveznooo!!!
  - metod *connect* -> najavimo EventLoop-u da treba nesto da se radi; uvedemo konkretne insatnce, sa drugim konkretnim instancama koje rade nesto
  - *emit* -> Emitujem neki signal 
  - Na osnovu potpita zakljucujemo neke stvari
  - Slot moze biti manji od Signala, nikada ne moze biti veci
  - 

- Na ispitu radimo u MainWindow


- Na projektu se ocekuje da ima odgovornosi o enkapsulaciji, itd..

- Zaduzenje roditelja jeste da vodi racuna kolika su bu deca, i gde su.