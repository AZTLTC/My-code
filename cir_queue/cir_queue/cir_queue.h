#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string>

#define MAX_SIZE    5

typedef struct Queue
{
    int data[MAX_SIZE];
    int font;
    int rear;
}Queue;


Queue* Cir_queue_init(void);
void Cir_queue_push(Queue* queue , int data);
void Cir_queue_detele(Queue* queue);
void Cir_queue_print(Queue* queue);



