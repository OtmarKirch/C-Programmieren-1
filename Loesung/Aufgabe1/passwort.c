#include "passwort.h"

int create_passwort(){
    /* Erstelle ein Abfrage für den Nutzer um das Passwort zu erstellen. Fordere ihn
    mit Hilfe von printf auf eine Zahl mit genau vier Ziffern einzugeben. Lies die Zahl
    mit Hilfe von scanf ein. Ist das Passwort korrekt gib es zurück. Ist es nicht korrekt,
    fordere ihn solange auf ein Passwort einzugeben, bis es korrekt ist. (Gehe davon aus,
    dass der Nutzer nur Zahlen eingibt. Andere Fälle kannst du ignorieren.) */
};

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