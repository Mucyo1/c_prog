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
    //all these ways of out put are applicable depending on the programmer
    //(*((int*)ptr+1),ptr->y, (*ptr).y) they all got the same output
    printf("%d %d %d\n",*((int*)ptr+1),ptr->y, (*ptr).y);
    //(*ptr).x is same as ptr->x it all state that pointer ptr points to y and
    return 0;
}
