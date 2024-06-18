#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string>

#define TRUE    1
#define FALSE   0


typedef struct Stack
{
    int data;
    struct Stack* next;
}Stack;


Stack* Initstack(void);
int Stack_pop(Stack* satck);
void Stack_push(Stack* stack , int data);
void Print_stack(Stack* satck);

