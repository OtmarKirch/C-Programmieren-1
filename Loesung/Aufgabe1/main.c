#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "nutzer.h"
#include "buch.h"

int main(){
    Nutzer* nutzer1 = nutzer_erstellen();
    Nutzer* nutzer2 = nutzer_erstellen();

    Buch* buch1 = buch_erstellen();
    Buch* buch2 = buch_erstellen();


    id_lesen(nutzer1);
    // buch_ausleihen(nutzer1, nutzer1->anzahl_ausgeliehen, buch1);
    // Buch* buch_ausgeliehen = abfrage_buch(nutzer1, nutzer1->anzahl_ausgeliehen, "Titel 1");
    // buch_rueckgabe(nutzer1, nutzer1->anzahl_ausgeliehen, "Titel 1");
    // definiere_betreuer(nutzer1, nutzer2);


    /* Dein Code: Rufe die Funktionen auf, die du testen möchtest. */


    return 0;
}
