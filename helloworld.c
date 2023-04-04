/**
 * this program shows how to output a message using printf 
 */
#include <stdio.h>

int main()
{
    char name[10] = " ";// 10n sets the number of strings to be obtained as name
    
    printf("hello world!\n"); //'\n' prints a new line after the code is execute
    
    printf("what is your name? \n");
    scanf("%s", name);
    
    printf("Hey %s this is my first printf program!\n", name);//the semicolon(;) indicates the end of the programming line
        
        return (0);
}
