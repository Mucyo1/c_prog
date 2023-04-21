#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 1020
#define TABLESIZE BUFSIZE
#undef BUFSIZE
#define BUFSIZE 37

int main()
{
    printf("macro BUFSIZE holds %d\n", BUFSIZE);
    printf("macro TABLESIZE holds %d\n", TABLESIZE);
    
    printf("macro BUFSIZE after being undef it holds %d\n", BUFSIZE);
}