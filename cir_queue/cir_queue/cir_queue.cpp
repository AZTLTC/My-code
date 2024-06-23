#include "cir_queue.h"

Queue* Cir_queue_init(void)
{
    Queue* queue = (Queue*)malloc(sizeof(Queue));

    if(queue == NULL)
    {
        printf("Empty!\n");
        exit(0);
    }

    queue -> font = 0;
    queue -> rear = 0;

    return queue;
}

static inline int Cir_queue_full(Queue* queue)
{
    return (queue -> rear + 1) % MAX_SIZE == queue -> font;
}

static inline int Cir_queue_empty(Queue* queue)
{
    return queue -> rear == queue -> font;
}

void Cir_queue_push(Queue* queue , int data)
{
    if(Cir_queue_full(queue))
    {
        printf("Current position : %d \n" , queue -> rear);
        printf("Overflow, unable to enqueue\n");
        return ;
    }
    
    queue -> rear = (queue -> rear + 1) % MAX_SIZE;
    queue -> data[queue -> rear] = data;
}

void Cir_queue_detele(Queue* queue)
{
    if(Cir_queue_empty(queue))
    {
        printf("Current position : %d \n" , queue -> rear);
        printf("Queue is empty, unable to dequeue \n");
        return ;
    }

    queue -> data[queue -> font] = 0;
    queue -> font = (queue -> font + 1) % MAX_SIZE;

}

void Cir_queue_print(Queue* queue)
{
    int i = queue -> font;
    while(i != queue -> rear)
    {
        i = (i + 1) % MAX_SIZE;
        printf("%d\t" , queue -> data[i]);
    }
    printf("\n");
}