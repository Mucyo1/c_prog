#include <stdio.h>
/**
 * modif_my_char_var - Solve me
 *
 * Return: nothing.
 */
void modif_my_char_var(char *cc, char ccc)  
{
    
    printf("value of cc is: %p\n", cc);
    printf("value of ccc is:%d ('%c')\n",ccc, ccc);
    *cc = 'o';
    ccc = 'l';
}

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
   char c;
   char *p;

   p = &c;
   c = 'H';
   printf("value of c before calling function is %d ('%c')\n", c, c);
   printf("Address of c is: %p\n\n", &c);
   printf("value of p before calling function is: %p\n", p);
   printf("Address of p is: %p\n\n\n", &p);
   modif_my_char_var(p, c);
   
   printf("\n\nvalue of p after calling function is: %p\n", p);
   printf("value of c after calling function is %d ('%c')\n", c, c);
   
   return (0);
}