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
    
    printf("the value of 'n' is: %d\n", n);
    printf("the address of n is: %p\n", &n);// this will print the address of n.
    printf("the value of 'p' is: %p\n", p);// this will print the value of p which will be the address of n that was assigned to it during declaration
    
    *p = 402;//pointers can be used to manupilate variables and there values 
    printf("the value of 'n' is: %d\n", n);
    return (0);
}