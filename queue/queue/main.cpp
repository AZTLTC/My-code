#include "queue.h"

int main(void)
{
	List* list = Queue_init();

	Queue_push(list , 1);
	// Queue_push(list , 2);
	// Queue_push(list , 3);
	// Queue_push(list , 4);

	Queue_print(list);

	Queue_pop(list);

	Queue_print(list);

	return 0;
}