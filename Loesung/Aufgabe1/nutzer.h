#ifndef NUTZER_H
#define NUTZER_H

#include "buch.h"

static int naechste_nutzer_id = 1;

typedef struct Nutzer{
    int id;
    char password;
    Buch* titel_ausgeliehen;
    struct Nutzer* betreuer;
} Nutzer;

void nutzer_id_erhoehen();

Nutzer* nutzer_erstellen();

void nutzer_init(Nutzer* nutzer);

int id_lesen(Nutzer* nutzer);

void buch_ausleihen(Nutzer* nutzer, Buch* buch);

void abfrage_buch(Nutzer* nutzer, Buch* buch);

void buch_rueckgabe(Nutzer* nutzer, Buch* buch);

void ausleihe_ausgeben(Nutzer* nutzer);

void definiere_betreuer(Nutzer* nutzer, Nutzer* betreuer);


#endif // NUTZER_H