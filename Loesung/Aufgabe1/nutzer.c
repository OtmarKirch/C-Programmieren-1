#include <stdlib.h>
#include "nutzer.h"
#include "buch.h"

int nutzer_id_vergeben(Nutzer* nutzer){
    /* Gib den Wert der globalen Variablen naechste_nutzer_id.
    Inkrementiere die globale Variable. Bedenke, dass Code nach 
    dem return statement nicht mehr ausgeführt wird.*/

    return 0;
}

void passwort_hash_abspeichern(Nutzer* nutzer){
    /**/
};

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

void buch_ausleihen(Nutzer* nutzer, int anzahl, Buch* buch){
    /* Hat der Nutzer keinen Titel ausgeliehen, weise dem Pointer titel_ausgeliehen
    den Wert des Buches zu. Weise diesen dem Nutzer zu und setze die Anzahl seiner Ausleihe auf 1.
    Hat der Nutzer bereits mindestens ein Buch ausgeliehen, übergib der
    Funktion buchliste_erweitern den Pointer für die bereits ausgeliehenen
    Bücher, den Pointer des neuen Buches, und die bisherige Anzahl.
    Weise die zurückgegebene neue Anzahl dem Nutzer zu. */
}

Buch* abfrage_buch(Nutzer* nutzer, int anzahl, char* buchtitel){
    /* Hat der Nutzer Titel ausgeliehen, übergib der Funktion finde_buch den
    Pointer der Ausleihe des Nutzers, die Anzahl der ausgeliehenen Titel und
    den gesuchten Buchtitel. Übergebe den durch finde_buch erhaltenen Pointer.
    Hat der Nutzer keinen Titel ausgeliehen, übergebe NULL.*/
    return NULL;
}

void buch_rueckgabe(Nutzer* nutzer, int anzahl, char* buchtitel){
    /* Wenn der Nutzer Bücher ausgeliehen hat, übergib der Funktion
    titel_löschen den Pointer der Ausleihe, die Anzahl der Medien und 
    den Pointer des Buchtitels. Weise dem Pointer der Ausleihe
    den so erhaltenen Buch Pointer zu.
    Hat der Nutzer kein Buch ausgeliehen, beende die Funktion sofort.
    */
}

void definiere_betreuer(Nutzer* nutzer, Nutzer* betreuer){
    /* Weise den Pointer des Betreuers korrekt zu, sodass dieser als
    Betruer des Nutzers abgespeichert ist.*/
}
