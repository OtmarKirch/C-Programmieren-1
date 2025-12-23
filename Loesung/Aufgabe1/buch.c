#include <stdlib.h>
#include "buch.h"

Buch* buch_erstellen(){
    /* Weise einem pointer den Speicherplatz für ein Buch zu. Wenn
    dies fehlschlägt übergebe NULL.
    Übergib bei Erfolg den Pointer an buch_init um die Wert zu
    initialisieren. Gib den Pointer zurück.
    */
    return NULL;
}

void buch_init(Buch* buch){
    /* Initialisiere die Werte des Buches mit einem Leerzeichen
    für den Titel und einer 0 (als char!) für die Buchnummer*/
}

void buchliste_erweitern(Buch* nutzer_liste, int anzahl, Buch* neues_buch){
    /* Erstelle einen Buch Pointer, und weise ihm genug Speicherplatz für
    alle Titel - bisherige und den neuen -- zu. Iteriere über die nutzer_liste
    und weise jedes Buch dem neuen Buch Pointer zu (inkrementieren des
    Pointers währenddessen nicht vergessen). Weise dem letzten Pointer das
    neue Buch zu. Ersetze den die ausgeliehenen Titel des Nutzers mit dem
    neuen Pointer. Passe die Anzahl der ausgeliehenen Bücher entsprechend an. */
};

int titel_loeschen(Buch* nutzer_liste, int anzahl, char* titel){
    /* Erstelle einen Buch Pointer, und weise ihm genug Speicherplatz für
    alle Titel - bisherige minus einen -- zu. Iteriere über die nutzer_liste
    und weise jedes Buch dem neuen Buch Pointer zu (inkrementieren des
    Pointers währenddessen nicht vergessen). Lasse dabei das Buch aus, das den
    übergebenen titel trägt. Ersetze den die ausgeliehenen Titel des Nutzers mit dem
    neuen Pointer.
    Überprüfe die Löschung mit der Funktion finde_buch. War die Löschung erfolgreich,
    gib 1 zurück, ansonsten 0.
    Passe die Anzahl der ausgeliehenen Bücher bei erfolgreicher Löschung entsprechend an. */
    return 0;
};

Buch* finde_buch(Buch* nutzer_liste, int anzahl, char* titel){
    /* Gehe die Nutzerliste durch und finde heraus, ob der Nutzer den Titel
    ausgeliehen hat. Hat der Nutzer den Titel ausgeliehen beende sofort die
    Schleife, die du für das Durchsuchen der Liste verwendet hast. Gib den Pointer zu
    dem Buch mit dem gesuchten Titel zurück. Ansonsten gib NULL zurück. */
    return NULL;
};