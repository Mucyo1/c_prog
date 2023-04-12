#include <stdio.h>
/*write a recursive function called sumDigits to 
return the sum of all digits in a given integer value*/

unsigned int sumDigits(unsigned int num)
{
    if (num==0)
    return 0;
    return num %10 + sumDigits(num / 10);
}
int main ()
{
    printf("%i\n", sumDigits(999));
    return 0;
}