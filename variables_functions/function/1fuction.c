#include <stdio.h>

void explained()
{
    printf("this function is called by writting a simple introduction \nthis function will be used to display this line of words \n");
}


void birthday(char x[], int y)
{
    printf("Happy birthday to you dear %s! \n", x);
    printf("you are %d year old \n", y);
}
int main()
{
    int age = 21;
    char name[10]="John Doe";
    
    birthday(name, age);
    explained();
}
