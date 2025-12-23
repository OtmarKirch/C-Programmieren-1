# C-Programmierübung

Dies sind von mir selbst erstellte Übungen, die die Erfahrungen aus der Veranstaltung C-Programmieren 1 an der TH Augsburg im Wintersemester 25/26 widergeben.

**Disclaimer:** Ich bin in keiner Weise mit dem Dozenten oder dem Lehrstuhl assoziiert. Ich besuche lediglich die Veranstaltung und werde die Prüfung ablegen. Die vorliegenden Aufgaben sind mit bester Absicht erstellt, spiegeln aber lediglich meine persönliche Erfahrung aus der Veranstaltung wieder und erheben keinerlei Anspruch auf Richtigkeit oder Vollständigkeit. Jeder Nutzer ist für seine Prüfungsvorbereitung selbst verantwortlich.

## Deutsch?

In der Welt des Programmieren ist alles auf Englisch. Was soll also deutscher Text? Der praktische Grund ist, dass Prüfungen (immer noch) auf Deutsch gestellt werden, so auch die Veranstaltung, die mich dazu gebracht hat diese Aufgabensammlung zu erstellen. Daher habe ich mich entschlossen, die Aufgaben in diesem Stil zu erstellen, auch wenn ich das gerne anders halten würde.

## Ausführung des Codes
Der Code ist so angelegt, dass es möglich sein sollte die Aufgaben fast Zeile für Zeile zu bearbeiten und immer kompilierbaren Code zu haben. Kompiliere oft um dich selbst zu überprüfen.

Für die Prüfung wird die IDE Eclipse genutzt. Kompiliere den Code dort am besten über Strg + B (nutze das oft! s. auch [Lernen und Üben](#lernen-und-üben)). 
Der kompilierte Code sollte sogar ausführbar sein. In Eclipse ist das eher unkomfortabel, da das interne Terminal nicht automatisch für die Ausgabe genutzt wird. Ein externes Terminal muss eingerichtet werden auf das ich an dieser Stelle nicht eingehen möchte.
Um den Code auszuführen öffne ein Terminal (extern oder in Eclipse) und stelle sicher, dass du dich im Ordner der Aufgabe befindest. Führe dort den Compiler mit allen .c files aus. 
Auf einem macOS oder Linux System funktioniert dieser Befehl für die erst Aufgabe:

```bash
gcc main.c nutzer.c buch.c passwort.c -o main
```

Ist dein Syntax korrekt wird der Compiler eine Datei `main` erstellen, die du dann auch ausführen kannst:

```bash
./main
```

## Wie nutze ich diese Aufgaben am besten?

Schreibe Code ausschließlich in die dafür vorgesehenen Felder. Diese sind immer markiert:

```C
/* Dein Code */
```

Ändere keine weiteren Vorgaben!

Je nachdem ob du übst oder dich einer Prüfungssituation stellen möchtest kannst du anders herangehen.

### Lernen und Üben

Nutze die Aufgaben, wie eine Übung.
Kompiliere den Code oft und überprüfe somit, ob das was du programmierst funktionieren kann. Der Compiler ist dein Freund, auch wenn es der nervt (was übrings seinen Lieblingsaktivität ist). Nutze die Warnungen und Fehler des Compilers um zu verstehen was du tust. Zeit, die du hier investierst ist in der Prüfung Gold wert. Kompilierst du in der Prüfung und kannst den Fehlercode richtig interpretieren weißt du sofort was nicht stimmt. Dazu musst du dir aber beim Üben genügend Zeit dafür nehmen.

### Prüfungssituation

Die Aufgaben sind so erstellt, dass sich damit auch eine Prüfungssituation simulieren lässt. Ideal wäre wenn du eine Aufgabe innerhalb von 45 Minuten vollständig bearbeiten kannst. Kompilieren auch hier immer wieder und nutze den Compiler um korrekten Code zu schreiben. Wenn der Code jedoch nicht mehr compiled und du den Fehler nicht zügig beheben kannst, bleib nicht hängen. Versuch weiter zu kommen. Auch spätere Fehler können mit Hilfe des Compilers behoben werden. Die dort ausgegebenen Fehler werden zwar mehr und dadurch unübersichtlicher, sind aber trotzdem nützlich. 

## Must have

Folgende Keywords und Funktionen solltest du bis zur Prüfung *auswendig* können. Während du die Aufgaben bearbeitest sollte dir klar sein was diese Konzepte bedeuten, wie man sie einsetzt, und -- ganz wichtig -- solltest ud den Syntax auswendig kennen. Auch wenn es immer heißt, programmieren sei nicht auswendig lernen und man kann ja alles nachschlagen. Wenn du in einer Prüfung schnell genug sein möchtest, lohnt es sich ein paar Sachen im Schlaf auswendig zu können. Wenn es sein muss, schreibe simple Funktionen immer und immer wieder und variiere sie leicht. Auch wenn es so stumpf ist, wie das kleine Einmaleins auswenidg zu lernen!

### Keywords

char, int, float, struct, void, NULL, return, break, if, else if, else, for, while, do 

### Operatoren

*, &, ->, =, ==, >=, <=, %, ++, --, -=, +=,

### Funktionen

malloc
free
strcpy
printf
scanf
rand
srand

### Konzepte

null terminator
pointer
Funktionen definieren


## Anmerkungen, Ergänzungen, Fehlermeldung etc.

Hast du Anmerkungen, hast Fehler gesehen, oder möchtest gerne mithelfen die Aufgabensammlung zu erweitern, melde dich gerne bei mir. Nutze auch gerne die Möglichkeiten in GitHub, wie PullRequests oder Issues.