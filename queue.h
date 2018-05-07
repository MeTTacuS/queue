typedef struct node
{
	int data;
	struct node *next;
}tNode;

typedef struct queue
{
	tNode *front, *rear;
}tQueue;

tQueue *createQueue();
bool checkIfEmpty(tQueue *q);
//bool checkIfFull();
void enQueue(tQueue *q, int x);
tNode *deQueue(tQueue *q);
int getData(tQueue *q);