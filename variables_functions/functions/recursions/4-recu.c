#include <string.h>
#include <stdio.h>
int _strlen_recursion(char *s)
{
    int n=0;
    if (strlen(s)==0)
    {
        return 0;
    }
    else
    {
        
        n=n+_strlen_recursion(s+1);
        n++;
    }
    return n;
    
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return (0);
}

