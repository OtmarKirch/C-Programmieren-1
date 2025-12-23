#include "passwort.h"

short int create_hash(int passwort){
    /* Gültige Passwörter sind Zahlen mit vier Ziffern, die als int dieser
    Funktion übergeben werden. Abgespeichert wird ein Hashwert, der durch diese
    Funktion erstell wird. Erstell den Hashwert:
    Quersumme der ersten beiden Ziffern multipliziert mit dem Rest der letzten
    beiden Ziffern für Modulo 13. Zuletzt addiere 17 geteil durch die letzte Ziffer.
    Bsp für das Passwort 2589:
    (2 + 5) / 2 * (89 mod 13) + 17 / 9 = 34
    Gib diesen Wert zurück.
    TIP: Der Rückgabewert ist ein anderer Typ. Nutze einen Typecast dafür.
    */

    return 0;
};

int ueberpruefe_passwort(int passwort, short int hash){
    /* Nutze die Funktion create_hash um zu überprüfen, ob der übergebene
    Hashwert korrekt ist. Ist er korrekt gib 1 zurück, ist er nicht korrekt
    gib 0 zurück.*/
    return 0;
};