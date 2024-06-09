#include "Single_loop_linked_list.h"

int main(void)
{
    Node* list = Initlist();

    Headinsert(list , 1);
    Headinsert(list , 2);
    Headinsert(list , 3);

    Tailinsert(list , 4);
    Tailinsert(list , 5);
    Tailinsert(list , 6);

    Printlist(list);

    Delete(list , 4);

    Printlist(list);

    printf("-> data bumber: %d \n", list->data);
	return 0;
}