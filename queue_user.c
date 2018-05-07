#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "queue.h"

int main()
{
	tQueue *queue = createQueue();
	if (checkIfEmpty(queue) == true)
		printf("Eile yra tuscia\n");;
	enQueue(queue, 4);
	enQueue(queue, 3);
	tNode *pasiimtas = deQueue(queue);
	printf("Pirmas queue elementas yra %d\n", getData(queue));
	
}
