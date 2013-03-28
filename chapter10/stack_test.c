#include <stack.h>

#define SIZE 10

int main(void)
{
    stack test_Stack;
    int i = 0;

    stack_init(&test_Stack, SIZE);
    for (i = 0; i < SIZE; i++)
    {
        push(&test_Stack, i);
    }

    for (; i < SIZE+4; i++)
    {
        push(&test_Stack, i);
    }

    for (i = 0; i < SIZE+6; i++)
    {
        printf("%d\n", pop(&test_Stack));
    }

    stack_delete(&test_Stack);

    return 0;
}
