#include<stdio.h>

int square(int x)
{
    int result = x * x;
    return result;
}
int main()
{
    
    int c = square(3);// when you call the function square it immediately gives the squareroot 
    printf("%d\n", c);
    
    return(0);
}