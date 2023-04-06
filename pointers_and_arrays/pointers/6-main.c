#include <stdio.h>
void modif_my_param(int *m)
{
    printf("value of m: %p\n", m);
    printf("address of m: %p\n", &m);
    *m = 420;
}
int main(void)
{
    int n;
    int *p;

    n = 98;
    p = &n;

    printf("the value of n before the call: %d\n", n);
    printf("the address of n before the call: %p\n", &n);
    printf("the value of p: %p\n", &n);
    printf("the address of p: %p\n", &p);

    modif_my_param(p);
    printf("value of n after the call: %d\n", n);
    printf("the address of n after the call: %p\n", &n);
    return (0);
}