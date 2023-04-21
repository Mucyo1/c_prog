#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *a, i;

    a = malloc(sizeof(*a)*10);

    for(i = 0; i < 10; i++) a[i] = 10 - i;
    for (i = 0; i < 10; i++)
    {
        printf("a [%d] = %d\n", i, a[i]);
    }
    free(a);
}