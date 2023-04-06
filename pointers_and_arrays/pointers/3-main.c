#include <stdio.h>
/**
 * main - storing the address of variable into a pointer
 *
 * Return: Always 0.
 */

int main(void)
{
    int n;
    int *p;
    
    n = 98;
    p = &n;// the variable p now holds the address of n as a value.
    
    printf("the address of n is: %p\n", &n);// this will print the address of n.
    printf("the value of 'p' is: %p\n", p);// this will print the value of p which will be the address of n that was assigned to it during declaration
    
    return (0);
}