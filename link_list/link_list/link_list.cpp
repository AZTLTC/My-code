#include "link_list.h"


Node* Init_link()
{
	Node* list = (Node*)malloc(sizeof(Node));

	if (list == NULL)
	{
		printf("Error\n");
		return 0;
	}
	else
	{
		list->data = 0;
		list->next = NULL;
		return list;
	}
}

/*	释放空间 - 未完善
void Freelist(Node* p)
{
	Node* current = p;
	Node* next;

	while(current != NULL)
	{
		next = current -> next;
		free(current);
		current = next;
	}
}
*/

void Headinsert(Node* list , int data)
{
	Node* node = (Node*)malloc(sizeof(Node));
	if (node == NULL)
	{
		printf("Error");
		return;
	}
	else
	{
		node -> data = data;
		node -> next = list -> next;
		list -> next = node;
		list -> data++;
	}
}

void Tailinsert(Node* list , int data)
{
	Node* head = list;
	Node* node = (Node*)malloc(sizeof(Node));
	if (node == NULL)
	{
		printf("Error");
		return;
	}
	else
	{
		node -> data = data;
		node -> next = NULL;
		list = list -> next;
		while(list -> next)
		{
			list = list -> next;			
		}
		list -> next = node;
		list = head;
		list -> data++;
	}	
}

void Delete(Node* list , int data)
{
	Node* head = list;
	Node* current  = list -> next;
	while(current)
	{
		if(current -> data == data)
		{
			list -> next = current -> next;
			free(current);
			break;
		}
		list = current;
		current = current -> next;
	}
	list = head;
	list -> data--;
}

void Printlist(Node* list)
{
	list = list -> next;
	while(list)
	{
		printf("-> data : %d \n", list -> data);
		list = list -> next;
	}
}