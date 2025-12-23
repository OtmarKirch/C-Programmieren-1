#ifndef NUTZER_H
#define NUTZER_H

#include "buch.h"

static int naechste_nutzer_id = 1;

typedef struct Nutzer{
    int id;
    short int passwort_hash;
    Buch* titel_ausgeliehen;
    int anzahl_ausgeliehen;
    struct Nutzer* betreuer;
} Nutzer;

int nutzer_id_vergeben(Nutzer* nutzer);

void passwort_hash_abspeichern(Nutzer* nutzer);

Nutzer* nutzer_erstellen();

void nutzer_init(Nutzer* nutzer);

int id_lesen(Nutzer* nutzer);

void buch_ausleihen(Nutzer* nutzer, int anzahl, Buch* buch);

Buch* abfrage_buch(Nutzer* nutzer, int anzahl, char* buchtitel);

void buch_rueckgabe(Nutzer* nutzer, int anzahl, char* buchtitel);

void definiere_betreuer(Nutzer* nutzer, Nutzer* betreuer);


#endif // NUTZER_H