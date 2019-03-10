typedef struct Q {
    fileDataPacket front, rear;
    unsigned int size, capacity;
    fileDataPacket *filePacketArray;
}Queue;

Queue *createQueue(unsigned int capacity)
{
    Queue *Q = (Queue *) malloc (sizeof(Queue));
    Q->capacity = capacity;
    Q->front = Q->size = 0;
    Q->rear = capacity - 1;
    Q->fileDataArray = (fileDataPacket *) malloc (Q->capacity * sizeof (fileDataPacket));
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
    Q->array[Q->rear] = newPacket;
    Q->size = Q->size + 1;
}

// Function to remove an item from Q.
// It changes front and size
fileDataPacket dequeue(Queue* Q)
{
    if (isEmpty(Q))
        return;
    fileDataPacket pack = Q->array[Q->front];
    Q->front = (Q->front + 1)%Q->capacity;
    Q->size = Q->size - 1;
    return pack;
}
