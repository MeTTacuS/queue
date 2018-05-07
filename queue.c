#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "queue.h"

tQueue *createQueue()
{
	tQueue *q = (tQueue*)malloc(sizeof(tNode));
	q->front = q->rear = NULL;
	return q;
}

bool checkIfEmpty(tQueue *q)
{
	if (q->front == NULL)
	{
		return true;
	}
	else
		return false;
}

//bool checkIfFull()
//{
//	if (malloc(sizeof(tNode) == NULL))
//	{
//		return true;
//	}
//	else
//		return false;
//}

void enQueue(tQueue *q, int x)
{
	tNode *temp = (tNode*)malloc(sizeof(tNode));
	temp->data = x;
	temp->next = NULL;

	if (q->rear == NULL)
	{
		q->front = q->rear = temp;
		return;
	}

	q->rear->next = temp;
	q->rear = temp;


}

tNode *deQueue(tQueue *q)
{
	if (q->front == NULL)
		return NULL;

	tNode *temp = q->front;
	q->front = q->front->next;

	if (q->front == NULL)
		q->rear == NULL;

	return temp;
}

int getData(tQueue *q)
{
	return q->front->data;
}

void freeQueue(tQueue *q)
{

}

/*
sukurti tuscia eile  ---DONE
patikrinti, ar eile tuscia  ---DONE
ar eile pilna  ?
ideti (enqueue) --- DONE
isimti (dequeue) --- DONE
gauti pirmo eiles elemento duomenis --- DONE (bugged as fuck, need to fix)
sunaikinti eile
*/
