#ifndef BUCH_H
#define BUCH_H

typedef struct Buch{
    char* titel;
    char* buchnummer;
} Buch;

Buch* buch_erstellen();

void buch_init(Buch* buch);

void buchliste_erweitern(Buch* nutzer_liste, Buch* neues_buch);

void titel_loeschen(Buch* nutzer_liste, Buch* rueckgabe_buch);

void finde_buch(Buch* ausleihe, int anzahl, char* titel);

#endif // BUCH_H