#ifndef BUCH_H
#define BUCH_H

typedef struct Buch{
    char* titel;
    char* buchnummer;
} Buch;

Buch* buch_erstellen();

void buch_init(Buch* buch);

void buchliste_erweitern(Buch* nutzer_liste, Buch* neues_Buch);

Buch* titel_loeschen(Buch* nutzer_liste, Buch* neues_Buch);

void finde_buch(Buch* ausleihe, int anzahl, char* titel);

#endif // BUCH_H