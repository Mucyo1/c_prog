#include <stdio.h>
#include <stdlib.h>
void m(int n0, int n1, int n2, int n3)
{
    int *t;
    int sum;
    
    t = malloc(sizeof(*t)*3);
    t[0] = n0;
    t[1] = n1;
    t[2] = n2;
    t[3] = n3;
    
    sum = t[0] + t[1] + t[2] + t[3];
    printf("the sum of %d,%d, %d, %d is: %d\n", t[0],t[1],t[2],t[3], sum);
    
}
int main (void)
{
    m(2,2,2,2);
}