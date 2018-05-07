
// Paskutiniai skaiciai - 288


#ifndef QUEUE_H
#define QUEUE_H

#define QUEUE_EMPTY 1;
#define OUT_OF_MEMORY 2;
#define QUEUE_DOESNT_EXIST 3;

typedef int user_data;

typedef struct node
{
	user_data data;
	struct node *next;
}tNode;

typedef struct queue
{
    int amount;
	tNode *front, *rear;
}tQueue;

tQueue *createQueue(int* errorCode);
bool checkIfEmpty(tQueue *q, int* errorCode);
bool checkIfFull();
void enQueue(tQueue *q, user_data x, int* errorCode);
void deQueue(tQueue *q, int* errorCode);
int getData(tQueue *q, int* errorCode);
void freeQueue(tQueue *q);

#endif

/*
 * Error code 1 - Eile yra tuscia
 * Error code 2 - Negalima isskirti atminties
 * Error code 3 - Bandoma naudoti eile, kuri nera sukurta
 */