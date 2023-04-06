#include <stdio.h>

int main(void)
{
    char name[10] = "Boris";
    int age = 21;
    
    printf("My name is '%s'\n", name);
    printf("I am %d years old\n",age);
    printf("name[0] %c\n", name[0]);//this line will print out the firsh letter of the name
    
    return(0);
}