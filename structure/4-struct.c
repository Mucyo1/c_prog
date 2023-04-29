#include <stdio.h>
#include <stdlib.h>

//declaring a structure
//we create a struct that holds info of a student.

struct abc
    {
        int w;
        int x;
        int y;
        int z;
    };
int main (void)
{
    struct  abc a = {.w = 10, .x = 20, .y = 30, .z = 40 };

    printf("numbers are: %d,%d,%d,%d\n", a.w, a.x, a.y, a.z);

    return 0;
}
