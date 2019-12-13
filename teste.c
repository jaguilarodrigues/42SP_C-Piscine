#include <stdio.h>


int main()
{
    int x;
    int *p;

    x = 10;
    p = &x;

    printf("%p\n\n", &p);
    printf("%p\n", p);
    printf("%p\n", ++p);
    printf("%p\n", &x);
    printf("%d\n", *p);
    printf("%d\n", x);
    *p = *p +1;
    printf("%d\n", *p);
    printf("%d\n", x);
}