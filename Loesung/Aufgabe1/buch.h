#ifndef BUCH_H
#define BUCH_H

typedef struct Buch{
    char* titel;
    short int buchnummer;
} Buch;

Buch* buch_erstellen();

void buch_init(Buch* buch);

void titel_definieren(Buch* buch, char* titel);

void buchnummer_definieren(Buch* buch, int nummer);

void buchliste_erweitern(Buch* nutzer_liste, int anzahl, Buch* neues_buch);

int titel_loeschen(Buch* nutzer_liste, int anzahl, char* titel);

Buch* finde_buch(Buch* nutzer_liste, int anzahl, char* titel);

#endif // BUCH_H