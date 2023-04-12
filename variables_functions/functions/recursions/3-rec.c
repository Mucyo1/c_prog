#include "stdio.h"
void _print_rev_recursion(char *s)
{
    if (*s)
    {
        _print_rev_recursion(s+1);
        putchar(*s);
    }
    else
    {
        putchar('\n');
    }
    
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _print_rev_recursion("\nColton Walker");
    return (0);
}