#include "queue.h"


List* Queue_init(void)
{
	List* list = (List*)malloc(sizeof(List));

	if(list == NULL)
	{
		printf("Empty!\n");
		exit(0);
	}

	list -> data = 0;
	list -> font = NULL;
	list -> rear = NULL;

	return list;
}

static inline int Queue_empty(List* list)
{
	return list -> font == NULL;
}

static inline Queue* Queue_Increase(void)
{
	Queue* queue = (Queue*)malloc(sizeof(Queue));

	if(queue == NULL)
	{
		printf("malloc error!\n");
		exit(0);
	}

	return queue;
}

void Queue_push(List* list , int data)
{
	Queue* queue = Queue_Increase();

	queue -> data = data;
	queue -> next = NULL;

	if(Queue_empty(list))
	{
		list -> font = queue;
		list -> rear = queue;
		list -> data++;

		return ;
	}

	list -> rear -> next = queue;
	list -> rear = queue;
	list -> data++;
}

void Queue_pop(List* list)
{
	Queue* font = list -> font;

	if(Queue_empty(list))
	{
		return ;
	}

	if(list -> font == list -> rear)
	{
		list -> font = NULL;
		list -> rear = NULL;
		list -> data = 0;
		free(font);
		return ;
	}

	list -> font = list -> font -> next;
	list -> data--;
}

void Queue_print(List* list)
{
	Queue* node = list -> font;
	while(node)
	{
		printf("%d -> " , node -> data);
		node = node -> next;
	}
	printf("NULL\n");
	printf("Queue Number : %d " , list -> data);
	printf("\n");
}

