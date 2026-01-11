#ifndef COMMUNICATION_H_
#define COMMUNICATION_H_

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "address.h"
#include "protocol.h"

typedef union PackageUnion{
    char message[1040];
    Package data;
} PackageUnion;

Package* package_erstellen(){
    /* Erzeuge eine Pointer auf ein Package und
    allokiere angemessenen Speicherplatz. Sollte die
    Speicherplatzzuweisung fehlschlagen git NULL zurück. */
    return NULL;
};

void init_package(Package* pack){
    /* Weise jedem byte im Package den Wert 0 zu. Nutze dazu die
    union PackageUnion aus dem header. Hinweis: Erstelle einen
    Pointer fuer PackageUnion, und weise den Pointer des Package zu.
     Nutze dann eine Schleife, um jedes byte mit einer 0 zu belegen.*/
};

void set_sender_address_ipv4(Package* pack, IPv4 ipv4){
    /* Weise die IP Adresse unter SENDER_ADDRESS_IPv4 in address.h dem
    Package an richtiger Stelle zu. Weise dem Typ den Wert 4 zu.*/
};

void set_sender_address_ipv6(Package* pack, IPv6 ipv6){
    /* Weise die IP Adresse unter SENDER_ADDRESS_IPv6 in address.h dem
    Package an richtiger Stelle zu. Weise dem Typ den Wert 6 zu.*/
};

void set_receiver_address_ipv4(Package* pack, IPv4 ipv4){
    /* Weise die IP Adresse unter RECEIVER_ADDRESS_IPv4 in address.h dem
    Package an richtiger Stelle zu. Weise dem Typ den Wert 4 zu.*/
};

void set_receiver_address_ipv6(Package* pack, IPv6 ipv6){
    /* Weise die IP Adresse unter RECEIVER_ADDRESS_IPv6 in address.h dem
    Package an richtiger Stelle zu. Weise dem Typ den Wert 6 zu.*/
};

void set_message(Package* pack, char* message){
    /* Weise die Nachricht unter MESSAGE in message.h dem Package an
    richtiger Stelle zu. Nutze dafür die Funktion memcpy*/
};

void send_packet(Package* pack){
   /* Erstelle eine PackageUnion. Erstelle dafuer eine PackageUnion. Gib das gesamt Paket
    mit Hilfe einer Schleife, der printf Funktion und dem Platzhalter %d aus.*/
};

void read_sender_ip_address(Package*);

void read_message(Package*);


#endif