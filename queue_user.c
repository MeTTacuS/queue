#include <stdio.h>
#include <stdbool.h>
#include "queue.h"

int main()
{
    int errorCode;
	tQueue *queue = createQueue(&errorCode);
	if (checkIfEmpty(queue, &errorCode) == true)
	{
		printf("Queue is empty\n");
	}
	enQueue(queue, 4, &errorCode);
    enQueue(queue, 3, &errorCode);
	deQueue(queue, &errorCode);
	printf("First element in queue is %d\n", getData(queue, &errorCode));
    freeQueue(queue);
}

