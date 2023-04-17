#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int i;
    int sum;
    
    if (argc > 1)
    {
        for (i = 0; i < argc; i++)
        {
            printf("argv[%d] is = %s\n", i, argv[i]);
            sum = sum + atoi(argv[i]);//this line will add the argument vectors
        }
        printf (" the total is = %d", sum);
        }
    return (0);
}