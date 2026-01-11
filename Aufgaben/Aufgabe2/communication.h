#ifndef COMMUNICATION_H_
#define COMMUNICATION_H_

#include "address.h"
#include "protocol.h"

typedef union PackageUnion{
    unsigned char message[1040];
    Package data;
} PackageUnion;

Package* package_erstellen();

void init_package(Package* p);

void set_sender_address_ipv4(Package* pack, IPv4 ipv4);

void set_sender_address_ipv6(Package* pack, IPv6 ipv6);

void set_receiver_address_ipv4(Package* pack, IPv4 ipv4);

void set_receiver_address_ipv6(Package* pack, IPv6 ipv4);

void set_message(Package* pack, char* message);

void send_packet(Package* pack);

void read_sender_ip_address(Package* pack);

void read_message(Package* pack);


#endif