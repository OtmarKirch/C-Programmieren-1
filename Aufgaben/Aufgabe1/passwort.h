#ifndef PASSWORT_H
#define PASSWORT_H

int create_passwort();

short int create_hash(int passwort);

int ueberpruefe_passwort(int passwort, short int hash);

#endif