#include "stack.h"

Stack* Initstack(void)
{
	Stack* stack = (Stack*)malloc(sizeof(Stack));

	if (stack == NULL)
	{
		printf("Error!\n");
		return 0;
	}

    stack -> data = 0;
    stack -> next = NULL;

    return stack;
}

static inline int Isempty(Stack* stack)
{
    if(stack != NULL)
    {
        return FALSE;
    }

    return TRUE;
}

int Stack_pop(Stack* stack)
{
    Stack* node = stack -> next;

    if(Isempty(stack))
    {
        printf("Stack is Empty!\n");
        return -1;
    }

    stack -> next = node -> next;
    free(node);
    stack -> data--;
    return 0;
}

void Stack_push(Stack* stack , int data)
{
    if(Isempty(stack))
    {
        printf("stack is Empty!\n");
        return;
    }

	Stack* node = (Stack*)malloc(sizeof(Stack));

	if (node == NULL)
	{
		printf("Space Error!\n");
		return;
	}  

    node -> data = data;
    node -> next = stack -> next;
    stack -> next = node;
    stack -> data++;
}



void Print_stack(Stack* stack)
{
    Stack* node = stack -> next;

    while(node)
    {
        printf("%d -> " , node -> data);
        node = node -> next;
    }
    printf("NULL\n");
    printf("Stack Space Number : %d \n" , stack -> data);
}



