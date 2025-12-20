#ifndef BUCH_H
#define BUCH_H

typedef struct Buch{
    char* titel;
    char* buchnummer;
} Buch;

Buch* buch_erstellen();

void buch_init(Buch* buch);

#endif // BUCH_H