#include <stdio.h>
#include "passwort.h"

int create_passwort(){
    /* Erstelle ein Abfrage für den Nutzer um das Passwort zu erstellen. Fordere ihn
    mit Hilfe von printf auf eine Zahl zwischen 1000 und 9999 einzugeben. Lies die Zahl
    mit Hilfe von scanf ein. Ist das Passwort korrekt gib es zurück. Ist es nicht korrekt,
    fordere ihn solange auf ein Passwort einzugeben, bis es korrekt ist. (Gehe davon aus,
    dass der Nutzer nur Zahlen, eingibt. Andere Fälle kannst du ignorieren.) */
    int eingabe;
    printf("Gib ein Passwort zwischen 1000 und 9999 ein:\n");
    scanf("%d", &eingabe);
    while ( eingabe >= 9999 || eingabe <= 1000){
        printf("Bedingungen nicht erfüllt. Gib ein Passwort zwischen 1000 und 9999 ein:\n");
        scanf("%d", &eingabe);
    }
    return eingabe;
};

short int create_hash(int passwort){
    /* Gültige Passwörter sind Zahlen mit vier Ziffern, die als int dieser
    Funktion übergeben werden. Abgespeichert wird ein Hashwert, der durch diese
    Funktion erstell wird. Erstell den Hashwert:
    Quersumme der ersten beiden Ziffern multipliziert mit dem Rest der letzten
    beiden Ziffern für Modulo 13. Zuletzt addiere 17 geteil durch die letzte Ziffer.
    Alle Brüche werden immer abgerundet.
    Bsp für das Passwort 2589:
    (2 + 5) / 2 * (89 mod 13) + (17 / 9) = 34
    Gib diesen Wert zurück.
    TIP: Der Rückgabewert ist ein anderer Typ. Nutze einen Typecast dafür.
    */
    int ziffer1 = passwort  % 10;
    int ziffer2 = (passwort / 10) % 10;
    int ziffer3 = (passwort / 100) % 10;
    int ziffer4 = (passwort / 1000) % 10;
    
    int hash = (ziffer1 + ziffer2) / 2 * ((ziffer3 * 10 + ziffer4) % 13) + (17 / ziffer4);

    return (short int)hash;
};

int ueberpruefe_passwort(int passwort, short int hash){
    /* Nutze die Funktion create_hash um zu überprüfen, ob der übergebene
    Hashwert korrekt ist. Ist er korrekt gib 1 zurück, ist er nicht korrekt
    gib 0 zurück.*/
    short int pruef_hash = create_hash(passwort);
    if (pruef_hash == hash){
        return 1;
    }
    return 0;
};