#include "link_list.h"

int main()
{

	Node* list = Initlist();

	Headinsert(list , 1);
	Headinsert(list , 2);
	Headinsert(list , 3);

	Tailinsert(list , 4);
	Tailinsert(list , 5);
	Tailinsert(list , 6);
	Tailinsert(list , 7);
	Tailinsert(list , 8);

	Printlist(list);

	Delete(list , 8);
	Delete(list , 3);
	Delete(list , 5);

	Printlist(list);

	return 0;
}