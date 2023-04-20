#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int n;
    int *ptr;
    int i;

    printf ("Enter the size of integer needed:");
    scanf("%d", &n);

    ptr = malloc(sizeof(*ptr)*n);

    if (ptr ==  NULL)
    {
        printf("no memory available");
    }
    
    for (i = 0; i < n; i++)
    {
        printf("enter your integer: ");
        scanf("%d", ptr + i);
    }
    
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
}