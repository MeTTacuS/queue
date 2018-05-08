#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "queue.h"

tQueue *createQueue(int* errorCode)
{
	tQueue *q = (tQueue*)malloc(sizeof(tNode));
    if (q == NULL)
    {
        (*errorCode) = OUT_OF_MEMORY;
        return NULL;
    }
	q->front = q->rear = NULL;
    q->amount = 0;
	return q;
}

bool checkIfEmpty(tQueue *q, int* errorCode)
{
	if (q == NULL)
    {
        (*errorCode) = QUEUE_DOESNT_EXIST;
        return NULL;
    }
    else if (q->front == NULL)
    {
        return true;
    }
    return false;
}

bool checkIfFull()
{
    if (malloc(sizeof(tNode)) == NULL)
        return true;
    return false;
}

void enQueue(tQueue *q, user_data x, int* errorCode)
{
    if (!checkIfFull())
    {
        tNode *temp = (tNode*)malloc(sizeof(tNode));
        temp->data = x;
        temp->next = NULL;
        q->amount++;

        if (q->rear == NULL)
        {
            q->front = q->rear = temp;
            return;
        }

        q->rear->next = temp;
        q->rear = temp;
    }
    else
    {
        (*errorCode) = OUT_OF_MEMORY;
    }

}

void deQueue(tQueue *q, int* errorCode)
{
    if (q->front == NULL)
    {
        (*errorCode) = QUEUE_EMPTY;
        return;
    }
    tNode *temp = q->front;
    q->front = q->front->next;

    if (q->front == NULL)
        q->rear = NULL;
    free(temp);
    q->amount--;
}

int getData(tQueue *q, int* errorCode)
{
    if (q->front == NULL)
        (*errorCode) = QUEUE_EMPTY;
    return q->front->data;
}

void freeQueue(tQueue *q)
{
    tNode *temp = q->front->next;
    tNode *current = temp;
    while (temp != NULL)
    {
        temp = current->next;
        free(temp);
        temp = current;
    }
    free(temp);
    free(current);
    free(q);
}
