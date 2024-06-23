#include "cir_queue.h"

int main(void)
{
    Queue* queue = Cir_queue_init();

    Cir_queue_push(queue , 1);
    Cir_queue_push(queue , 2);
    Cir_queue_push(queue , 3);
    Cir_queue_push(queue , 4);
    // Cir_queue_push(queue , 5);

    Cir_queue_print(queue);

    Cir_queue_detele(queue);
    Cir_queue_detele(queue);
    Cir_queue_detele(queue);
    Cir_queue_detele(queue);
    Cir_queue_detele(queue);

    Cir_queue_print(queue);

    Cir_queue_push(queue, 1);
    Cir_queue_push(queue, 1);
    Cir_queue_push(queue, 1);
    Cir_queue_push(queue, 1);

    Cir_queue_print(queue);

    return 0;
}