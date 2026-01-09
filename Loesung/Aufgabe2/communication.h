#ifndef COMMUNICATION_H_
#define COMMUNICATION_H_

#include "address.h"
#include "protocol.h"

typedef union PackageUnion{
    char message[1040];
    Package data;
} PackageUnion;

Package* package_erstellen();

void init_package(Package*);

void set_sender_address_ipv4(Package*, IPv4);

void set_sender_address_ipv6(Package*, IPv6);

void set_receiver_address_ipv4(Package*, IPv4);

void set_receiver_address_ipv6(Package*, IPv6);

void send_packet(Package*);

void read_sender_ip_address();

void read_message();


#endif