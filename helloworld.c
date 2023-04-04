/**
 * this program shows how to output a message using printf 
 */
#include <stdio.h>

int main()
{
    int x;
    printf("hello world!\n"); //'\n' prints a new line after the code is execute
    printf("what is your name?");
    scanf("%s", x);
    printf("Hey %s this is my first printf program!\n", x);//the semicolon(;) indicates the end of the programming line
        return (0);
}
