#include "Single_loop_linked_list.h"

Node* Initlist(void)
{
	Node* list = (Node*)malloc(sizeof(Node));

	if (list == NULL)
	{
		printf("Error\n");
		return 0;
	}
	else
	{
		list -> data = 0;
        list -> next = list;
        return list;
	}
}

void Headinsert(Node* list , int data)
{
    Node* node = (Node*)malloc(sizeof(Node));
    
    if(node == NULL)
    {
        printf("Error\n");
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
    Node* current = list;
    Node* node = (Node*)malloc(sizeof(Node));
    if(node == NULL)
    {
        printf("Error\n");
		return;
    }
    else
    {
        node -> data = data;
        for(int i = 0; i < list -> data; i++)
        {
            current = current -> next;
        }
        current -> next = node;
        node -> next = list;
        list -> data++;
    }   
}

int Delete(Node* list , int data)
{
    Node* current = list;
    Node* node = list -> next;
    while(node != list)
    {
        if(node -> data == data)
        {
            current -> next = node -> next;
            list -> data--;
            free(node);
            return TURE;
        }
        current = node;
        node = node -> next;
    }
    return FALSE;
}

void Printlist(Node* list) 
{
    if (list == NULL) 
    {
        printf("List is empty\n");
        return;
    }
    
    Node* current = list -> next;  // 从哨兵节点的下一个节点开始
    while (current != list)      // 遍历到回到哨兵节点为止
    {   
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");  // 打印完链表后，指向哨兵节点
}


