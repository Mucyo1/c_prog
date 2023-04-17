#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int i;
    int sum;
    
    printf("argc is: %d\n", argc );//this command will print the the number of arguments passed after execution.
    printf("let's see what's in argv[0]\n");//this command will print the name of the executable file.
    
   for(i = 0; i < argc; i++ )
   {
       printf("argv is argv[%d] = %s\n", i, argv[i]);
   }
    return 0;
    
}