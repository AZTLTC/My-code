#include "stack.h"

int main(void)
{
    Stack* stack = Initstack();

    Stack_push(stack , 1);
    Stack_push(stack , 2);
    Stack_push(stack , 3);
    Stack_push(stack , 4);

    Print_stack(stack);

    Stack_pop(stack);
    Stack_pop(stack);
    Stack_pop(stack);

    Print_stack(stack);

    return 0;
}