#include <list.h>
#include <stdio.h>

int main(void)
{
    Node *list = NULL;
    Node *temp = NULL;
    int i = 0;

    list = list_init(10);
    for (i = 0; i < 10; i++)
    {
        Node_insert(&list, i);
    }
    list_print(list);
    printf("\n");
    Node_delete(&list, 2);

    if (temp = list_search(list, 3))
        printf("Returned address: %p\n", (void *)temp);
    list_print(list);

    list_delete(&list);

    return 0;
}
