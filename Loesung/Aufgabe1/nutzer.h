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


Nutzer* nutzer_erstellen();

void nutzer_init(Nutzer* nutzer);

int nutzer_id_vergeben();

void passwort_hash_abspeichern(Nutzer* nutzer);

int id_lesen(Nutzer* nutzer);

void buch_ausleihen(Nutzer* nutzer, int anzahl, Buch* buch);

Buch* abfrage_buch(Nutzer* nutzer, char* buchtitel);

int buch_rueckgabe(Nutzer* nutzer, char* buchtitel);

void definiere_betreuer(Nutzer* nutzer, Nutzer* betreuer);


#endif // NUTZER_H