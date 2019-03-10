#include<stdio.h>
#include<pthread.h>
#define DATASIZE 4096

typedef struct fileDataPacket {
    const char *fileName;
    unsigned int fileSize;
    unsigned int byteOfffset;
    unsigned char data [DATASIZE];
}fileDataPacket;

