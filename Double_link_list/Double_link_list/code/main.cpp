#include "double_link_list.h"

int main()
{
	Node* list = Initlist();

	Headinsert(list , 1);
	Headinsert(list , 2);
	Headinsert(list , 3);

	Tailinsert(list , 4);
	Tailinsert(list , 5);
	Tailinsert(list , 6);

	Printlist(list);

	Delete(list , 3);
	Delete(list , 6);
	Delete(list , 2);
	Printlist(list);

	return 0;
}