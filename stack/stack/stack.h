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

/**
 *  栈初始化
 */
Stack* Initstack(void);

/**
 *  出栈
 */
int Stack_pop(Stack* satck);

/**
 *  入栈
 */
void Stack_push(Stack* stack , int data);

/**
 *  遍历
 */
void Print_stack(Stack* satck);

