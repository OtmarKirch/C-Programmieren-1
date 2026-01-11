#ifndef PROTOCOL_H_
#define PROTOCOL_H_

#include "address.h"

//total byte of one packet: 1040 bytes
//depending on the type of the address type, the addresses have to be interpreted accordingly
typedef struct Package{
    unsigned char address_type_sender;
    unsigned char address_sender[16];
    unsigned char address_type_receiver;
    unsigned char address_receiver[16];
    unsigned char package_identifier[4];
    unsigned char number_packages;
    unsigned char package_number;
    unsigned char message[1000];
} Package;

#endif