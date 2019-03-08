#include<stdio.h>
#include<pthread.h>
#define DATASIZE 4096

typedef struct fileDataPacket {
    const char *fileName;
    unsigned int fileSize;
    unsigned int byteOfffset;
    unsigned char data [DATASIZE];
}fileDataPacket;

typedef struct Q {
    fileDataPacket *front, *rear;
    unsigned int size, capacity;
    fileDataPacket *filePacketArray;
}Queue;

Queue *createQueue(unsigned int capacity)
{
    Queue *Q = (Queue *) malloc (sizeof(Queue));
    Q->capacity = capacity;
    Q->front = Q->size = 0;
    Q->rear = capacity - 1;
    Q->fileDataPacket = (fileDataPacket *) malloc (Q->capacity * sizeof (filePacketArray));
}

int isFull(Queue* Q)
{
    return (Q->size == Q->capacity);
}

// Queue is empty when size is 0
int isEmpty(Queue* Q)
{
    return (Q->size == 0);
}

// Function to add an item to the Q.
// It changes rear and size
void enqueue(Queue* Q, int item)
{
    if (isFull(Q))
        return;
    Q->rear = (Q->rear + 1)%Q->capacity;
    Q->array[Q->rear] = item;
    Q->size = Q->size + 1;
    printf("%d enqueued to Q\n", item);
}

// Function to remove an item from Q.
// It changes front and size
int dequeue(Queue* Q)
{
    if (isEmpty(Q))
        return INT_MIN;
    int item = Q->array[Q->front];
    Q->front = (Q->front + 1)%Q->capacity;
    Q->size = Q->size - 1;
    return item;
}
