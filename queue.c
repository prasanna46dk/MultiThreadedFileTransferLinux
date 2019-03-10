#include "packet.c"
#include<stdlib.h>
typedef struct Q {
    int front, rear;
    unsigned int size, capacity;
    fileDataPacket *filePacketArray;
}Queue;

Queue *createQueue(unsigned int capacity)
{
    Queue *Q = (Queue *) malloc (sizeof(Queue));
    Q->capacity = capacity;
    Q->front = Q->size = 0;                             // front is always 0th array element and size of queue is zero before instantiating it.
    Q->rear = capacity - 1;
    Q->filePacketArray = (fileDataPacket *) malloc (Q->capacity * sizeof (fileDataPacket));
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
void enqueue(Queue* Q, fileDataPacket newPacket)
{
    if (isFull(Q))
        return;
    Q->rear = (Q->rear + 1)%Q->capacity;
    Q->filePacketArray[Q->rear] = newPacket;
    Q->size = Q->size + 1;
}

// Function to remove an item from Q.
// It changes front and size
fileDataPacket dequeue(Queue* Q)
{
    if (isEmpty(Q))
        return;
    fileDataPacket pack = Q->filePacketArray[Q->front];
    Q->front = (Q->front + 1)%Q->capacity;
    Q->size = Q->size - 1;
    return pack;
}
