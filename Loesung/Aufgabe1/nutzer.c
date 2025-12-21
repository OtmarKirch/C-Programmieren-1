#include <stdlib.h>
#include "nutzer.h"
#include "buch.h"

int nutzer_id_vergeben(Nutzer* nutzer){
    /* Gib den Wert der globalen Variablen naechste_nutzer_id.
    Inkrementiere die globale Variable. Bedenke, dass Code nach 
    dem return statement nicht mehr ausgeführt wird.*/

    return 0;
}

Nutzer* nutzer_erstellen(){
    /* Weise mit der Funktion malloc einem Pointer angemessenen 
    Speicherplatz zu. Initialisiere die Werte mit Hilfe der Funktion 
    nutzer_init. Weise dann mit der Funktion nutzer_id_vergeben die 
    ID zu. Gib den Nutzer Pointer zurück.*/
    //Nutzer* nutzer_p = malloc(sizeof(Nutzer));
    return NULL;
}

void nutzer_init(Nutzer* nutzer){
    /* Initialisiere die Werte des Nutzers. Setze die ID und Anzahl der ausgeliehenen Titel auf 0,
    das Passwort auf ein Leerzeichen, und die Pointer auf den 
    ausgeliehenen Titel und Betreuer auf NULL.*/
}

int id_lesen(Nutzer* nutzer){
    /*Gib die ID des Nutzers zurück.*/
    return 0;
}

void buch_ausleihen(Nutzer* nutzer, Buch* buch, int anzahl){
    /* Hat der Nutzer keinen Titel ausgeliehen, erstelle einen Buch Pointer
    über die Funktion buch_erstellen.
    Weise diesen dem Nutzer zu und setze die Anzahl seiner Ausleihe auf 1. */
}
void abfrage_buch(Nutzer* nutzer, Buch* buch, int anzahl){
    
}
void buch_rueckgabe(Nutzer* nutzer, Buch* buch, int anzahl){

}

void ausleihe_ausgeben(Nutzer* nutzer){

}

void definiere_betreuer(Nutzer* nutzer, Nutzer* betreuer){

}
