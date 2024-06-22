#pragma once


#include <stdio.h>
#include <stdlib.h>
#include <string>

typedef struct Queue
{
	int data;
	struct Queue* next;
}Queue;

typedef struct List
{
	Queue* font;
	Queue* rear;
	int data;
}List;

List* Queue_init(void);
void Queue_push(List* list , int data);
void Queue_pop(List* list);
void Queue_print(List* list);


