#include "link_list.h"

Node* Initlist(void)
{
    Node* list = (Node*)malloc(sizeof(Node));

    if(list == NULL)
    {
        printf("Error!\n");
        return 0;
    }
    list -> data = 0;
    list -> next = list;
    list -> pre  = list;
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
        node -> pre = list;
        node -> next = list -> next;
        list -> pre = node;
        list -> next = node;

        list -> data++;
        return;
    }

    node -> next = list -> next;
    node -> pre  = list;
    list -> next -> pre = node;
    list -> next  = node;

    list -> data++;

}

void Tailinsert(Node* list , int data)
{
    Node* current = list;
    Node* node = (Node*)malloc(sizeof(Node));

    if(node == NULL)
    {
        printf("Error! \n");
        return;
    }

    node -> data = data;

    while(current -> next != list)
    {
        current = current -> next;
    }
    node -> next = list;    
    node -> pre = current;
    current -> next = node;
    list -> data++;
}

int Delete(Node* list , int data)
{
    Node* current = list -> next;

    while(current != list)
    {
        if(current -> data == data)
        {
            current -> pre -> next = current -> next;
            current -> next -> pre = current -> pre;
            free(current);
            list->data--;
            return TURE;
        }
        current = current -> next;
    }
    return FALSE; 
}

void Printlist(Node* list)
{
    Node* current = list -> next;

    while(current != list)
    {
        printf("%d -> " , current -> data);
        current = current -> next;
    }
    printf("NULL \n");
    printf("data number : %d \n" , list -> data);
}

