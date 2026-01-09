#ifndef COMMUNICATION_H_
#define COMMUNICATION_H_

#include <string.h>

#include "address.h"
#include "protocol.h"

typedef union PackageUnion{
    char message[1040];
    Package data;
} PackageUnion;

Package* package_erstellen(){
    /* Erzeuge einem Pointer auf ein Package und
    allokiere angemessenen Speicherplatz. Sollte die
    Speicherplatzzuweisung fehlschlagen git NULL zurück. */
    return NULL;
};

void init_package(Package*){
    /* Weise jedem byte im Package den Wert 0 zu. Nutze Schleifen,
    wenn die Variable mehr als ein byte enthält.*/
};

void set_sender_address_ipv4(Package*, IPv4){
    /* Weise die IP Adresse unter SENDER_ADDRESS_IPv4 in address.h dem
    Package an richtiger Stelle zu. Weise dem Typ den Wert 4 zu.*/
};

void set_sender_address_ipv6(Package*, IPv6){
    /* Weise die IP Adresse unter SENDER_ADDRESS_IPv6 in address.h dem
    Package an richtiger Stelle zu. Weise dem Typ den Wert 6 zu.*/
};

void set_receiver_address_ipv4(Package*, IPv4){
    /* Weise die IP Adresse unter RECEIVER_ADDRESS_IPv4 in address.h dem
    Package an richtiger Stelle zu. Weise dem Typ den Wert 4 zu.*/
};

void set_receiver_address_ipv6(Package*, IPv6){
    /* Weise die IP Adresse unter RECEIVER_ADDRESS_IPv6 in address.h dem
    Package an richtiger Stelle zu. Weise dem Typ den Wert 6 zu.*/
};

void set_message(Package*, char*){
    /* Weise die Nachricht unter MESSAGE in message.h dem Package an
    richtiger Stelle zu. Nutze dafür die Funktion memcpy*/
};

void send_packet(Package*){
   /* Erstelle eine PackageUnion. Kopiere die 
   Daten des Packages in die PackageUnion mit Hilf der 
   memcpy Funktion. Gib das gesamt Paket mit Hilfe einer
   Schleife, der printf Funktion und dem Platzhalter %d aus.*/
};

void read_sender_ip_address();

void read_message();


#endif