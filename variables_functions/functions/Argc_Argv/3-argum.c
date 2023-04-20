#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stddef.h>

int main(int argc, char* argv[])
{
    int i;
    int sum;
    
    printf("the argc is :%d\n", argc);
    printf("the argv is :%s\n", argv[0]);
    
    if(argc > 1)
    {
        for (i = 0; i < argc; i++)
        {
            printf("the argument passed are argv[%d] : %s\n", i, argv[i]);
            sum = sum + atoi(argv[i]);
        }
        
        printf("the sum total of arguments passed is :%d\n", sum);
        
    }
}




/*{
    int i;
    int sum;
    
    if (argc > 1)
    {
        for (i = 0; i < argc; i++)
        {
            printf("argv[%d] is = %s\n", i, argv[i]);
            sum = sum * atoi(argv[i]);//this line will add the argument vectors
        }
        printf ("the total is = %d\n", sum);
        }
    return (0);
}*/