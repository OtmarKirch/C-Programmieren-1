#ifndef BUCH_H
#define BUCH_H

typedef struct Buch{
    char* titel;
    char* buchnummer;
} Buch;

Buch* buch_erstellen();

void buch_init(Buch* buch);

void buchliste_erweitern(Buch* nutzer_liste, int anzahl, Buch* neues_buch);

int titel_loeschen(Buch* nutzer_liste, int anzahl, char* titel);

Buch* finde_buch(Buch* nutzer_liste, int anzahl, char* titel);

#endif // BUCH_H