#include "double_link_list.h"

Node* Initlist(void)
{
    Node* list = (Node*)malloc(sizeof(Node));

    if(list == NULL)
    {
        printf("Error!\n");
        return 0;
    }
    list -> data = 0;
    list -> next = NULL;
    list -> pre  = list;

    return list;
}

void Headinsert(Node* list , int data)
{
    Node* node = (Node*)malloc(sizeof(Node));

    if(node == NULL)
    {
        printf("Error!\n");
        return;
    }

    node -> data = data;

    if(list -> data == 0)
    {
        node -> next = list -> next;
        list -> next = node;
        node -> pre = list;
        list -> data++;        
        return;
    }
    node -> pre  = list;
    node -> next = list -> next;
    list -> next -> pre = node;
    list -> next = node;
    list -> data++;
}

void Tailinsert(Node* list , int data)
{
    Node* current = list;
    Node* node = (Node*)malloc(sizeof(Node));
    
    if(node == NULL)
    {
        printf("Error!\n");
        return;
    }
    node -> data = data;

    while(current -> next)
    {
        current = current -> next;
    }

    node -> next = current -> next;
    current -> next = node;
    node -> pre = current;
    list -> data++;
}

int Delete(Node* list , int data)
{
    Node* current = list -> next;

    while(current)
    {
        if(current -> data == data)
        {
            if(current -> next)
            {
                current -> next -> pre = current -> pre;
            }
            current -> pre -> next = current -> next;
            free(current);
            list -> data--;
            return TURE;
        }
        current = current -> next;
    }
    return FALSE;
}

void Printlist(Node* list)
{
    Node* node = list -> next;
    while(node)
    {
        printf("%d -> " , node -> data);
        node = node -> next;
    }
    printf("NULL\n");
    printf("data number : %d \n" , list -> data);
}



