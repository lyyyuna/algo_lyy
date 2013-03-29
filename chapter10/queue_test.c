#include <queue.h>

#define SIZE 8

int main(void)
{
    queue Q;
    int i = 0;

    queue_init(&Q, SIZE);
    for (i = 0; i < SIZE-2; i++)
    {
        queue_enter(&Q, i);
    }

    for (i = 0; i < SIZE; i++)
    {
        printf("%d\n", queue_delete(&Q));
    }

    queue_destroy(&Q);

    return 0;
}
