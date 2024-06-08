#include "link_list.h"

int main(void)
{
	Node* list = Init_link();
	Headinsert(list , 1);
	Headinsert(list , 2);
	Headinsert(list , 3);
	Headinsert(list , 4);

	Tailinsert(list, 5);
	Tailinsert(list, 6);
	Tailinsert(list, 7);
	Tailinsert(list, 8);

	Delete(list, 6);
	Delete(list, 4);
	Delete(list, 2);


	Printlist(list);
	printf("-> Data Number: %d \n", list -> data);
	return 0;
}
