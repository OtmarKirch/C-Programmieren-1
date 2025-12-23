#include <stdlib.h>
#include "nutzer.h"
#include "buch.h"
#include "passwort.h"


Nutzer* nutzer_erstellen(){
    /* Weise mit der Funktion malloc einem Pointer angemessenen 
    Speicherplatz zu. Falls die Speicherzuweisung
    fehlschlägt, gib NULL zurück. Initialisiere die Werte mit Hilfe der Funktion 
    nutzer_init. Weise mit dem Rückgabewert von nutzer_id_vergeben die 
    ID zu. Weise mit passwort_hash_abspeichern den Hashwert des Passwortes zu.
    Gib zuletzt den Nutzer Pointer zurück. */
    return NULL;
}

void nutzer_init(Nutzer* nutzer){
    /* Initialisiere die Werte des Nutzers. Setze die ID und Anzahl der ausgeliehenen Titel auf 0,
    das Passwort auf ein Leerzeichen, und die Pointer auf den 
    ausgeliehenen Titel und Betreuer auf NULL.*/
}

int nutzer_id_vergeben(){
    /* Gib den Wert der globalen Variablen naechste_nutzer_id zurück.
    Inkrementiere die globale Variable. Bedenke, dass Code nach 
    dem return statement nicht mehr ausgeführt wird.*/
    return 0;
}

void passwort_hash_abspeichern(Nutzer* nutzer){
    /* Nutze die Funktionen create_passwort um ein Passwort zu erhalten, 
    und create_hash um den Hashwert dieses Passwortes zu erstellen. Speichere
    den Hashwert beim Nutzer ab.*/
}

int id_lesen(Nutzer* nutzer){
    /*Gib die ID des Nutzers zurück.*/
}

void buch_ausleihen(Nutzer* nutzer, int anzahl, Buch* buch){
    /* Hat der Nutzer keinen Titel ausgeliehen, weise dem Pointer titel_ausgeliehen
    den Wert des Buches zu und setze die Anzahl seiner Ausleihe auf 1.
    Hat der Nutzer bereits mindestens ein Buch ausgeliehen, übergib der
    Funktion buchliste_erweitern den Pointer für die bereits ausgeliehenen
    Bücher, den Pointer des neuen Buches, und die bisherige Anzahl. */
}

Buch* abfrage_buch(Nutzer* nutzer, int anzahl, char* buchtitel){
    /* Hat der Nutzer Titel ausgeliehen, übergib der Funktion finde_buch den
    Pointer der Ausleihe des Nutzers, die Anzahl der ausgeliehenen Titel und
    den gesuchten Buchtitel. Übergebe den durch finde_buch erhaltenen Pointer.
    Hat der Nutzer keinen Titel ausgeliehen, übergebe NULL.*/
    return NULL;
}

int buch_rueckgabe(Nutzer* nutzer, int anzahl, char* buchtitel){
    /* Wenn der Nutzer Bücher ausgeliehen hat, übergib der Funktion
    titel_löschen den Pointer der Nutzer Ausleihe, die Anzahl der Medien und 
    den Buchtitel. Im Erfolgsfall gibt titel_löschen eine 1 zurück, kann der Titel
    nicht gelöscht werden, gibt die Funktion ein 0 zurück. Gib diesen Wert mit
    dieser Funktion weiter.
    Hat der Nutzer kein Buch ausgeliehen, gib auch 0 zurück.
    */
   return 0;
}

void definiere_betreuer(Nutzer* nutzer, Nutzer* betreuer){
    /* Weise den Pointer des Betreuers korrekt zu, sodass dieser als
    Betreuer des Nutzers abgespeichert ist.*/
}
