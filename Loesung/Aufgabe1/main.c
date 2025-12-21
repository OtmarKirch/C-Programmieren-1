#include <stdio.h>
#include <stdlib.h>

#include "nutzer.h"
#include "buch.h"

int main(){
    Nutzer* nutzer1 = nutzer_erstellen();
    Nutzer* nutzer2 = nutzer_erstellen();

    Buch* buch1 = buch_erstellen();
    Buch* buch2 = buch_erstellen();


    id_lesen(nutzer1);
    buch_ausleihen(nutzer1, buch1, nutzer1->anzahl_ausgeliehen);
    abfrage_buch(nutzer1, buch1, nutzer1->anzahl_ausgeliehen);
    buch_rueckgabe(nutzer1, buch1, nutzer1->anzahl_ausgeliehen);
    ausleihe_ausgeben(nutzer1);
    definiere_betreuer(nutzer1, nutzer2);


    /* Dein Code: Rufe die Funktionen auf, die du testen möchtest. */


    return 0;
}
