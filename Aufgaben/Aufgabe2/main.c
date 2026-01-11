#include <stdio.h>
#include <stdlib.h>
#include "address.h"
#include "communication.h"
#include "messages.h"

int main(){
    int address[16] = RECEIVER_ADDRESS_IPV4;
    for (int i = 0; i<16; i++){
        printf("Byte %d: %d \n", i, address[i]);
    }
    char* message = MESSAGE_0;
    printf("%s\n", message);

    Package* pack = package_erstellen();
    printf("Pointer package: %p\n", pack);
    PackageUnion* pack_union = (PackageUnion*)pack;
    printf("Pointer package_union: %p\n", pack_union);
    for ( int i = 0; i<sizeof(PackageUnion); i++){
        printf("%d",pack_union->message[i]);
    }

    return 0;
}