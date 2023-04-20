#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stddef.h>

int main(int argc, char* argv[])
{
    int i;
    printf("the argc is :%d\n", argc);
    printf("the argv is :%s\n", argv[0]);
    
    for (i = 0; i < argc; i++)
    {
        printf("the argument passed are argv[%d] : %s\n", i, argv[i]);
    }
}




