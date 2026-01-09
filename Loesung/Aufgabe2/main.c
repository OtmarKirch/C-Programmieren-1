#include <stdio.h>
#include "address.h"
#include "communication.h"
#include "messages.h"

int main(){
    int address[16] = RECEIVER_ADDRESS;
    for (int i = 0; i<16; i++){
        printf("Byte %d: %d \n", i, address[i]);
    }
    char* message = MESSAGE_0;
    printf("%s\n", message);
    return 0;
}