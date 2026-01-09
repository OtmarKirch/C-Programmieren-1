#ifndef ADDRESS_H_
#define ADDRESS_H_

#define RECEIVER_ADDRESS_IPV4 {192,168,9,127}
#define SENDER_ADDRESS_IPV4 {192,8,19,127}
#define RECEIVER_ADDRESS_IPv6 {0x1,0x23,0x45,0x67,0x89,0xab,0xcd,0xef,0x1,0x23,0x45,0x67,0x89,0xab,0xcd,0xef}
#define SENDER_ADDRESS_IPv6 {0x9,0x87,0x65,0x43,0x12,0x0,0xfe,0xdc,0xba,0x9,0x87,0x65,0x43,0x12,0x0,0xfe}



typedef struct IPv4{
    unsigned char byte1;
    unsigned char byte2;
    unsigned char byte3;
    unsigned char byte4;
} IPv4;

typedef struct IPv6{
    unsigned char byte01;
    unsigned char byte02;
    unsigned char byte03;
    unsigned char byte04;
    unsigned char byte05;
    unsigned char byte06;
    unsigned char byte07;
    unsigned char byte08;
    unsigned char byte09;
    unsigned char byte10;
    unsigned char byte11;
    unsigned char byte12;
    unsigned char byte13;
    unsigned char byte14;
    unsigned char byte15;
    unsigned char byte16;
} IPv6;

#endif