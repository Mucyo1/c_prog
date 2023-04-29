#include <stdio.h>
#include <stdlib.h>

//declaring a structure
//we create a struct that holds info of a student.

struct abc
    {
        int x;
        int y;
    };

int main (void)
{
    struct abc a = {0, 1};
    struct abc *ptr = &a;

    printf("%d %d\n",ptr->x,ptr->y);
    //(*ptr).x is same as ptr->x it all state that pointer ptr points to y and 
    return 0;
}
