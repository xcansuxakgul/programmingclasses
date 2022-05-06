#include <stdio.h>

int main()
{
    int i;
    double a = 1.10;
    double b = 2.20;
    double c = 4.40;
    double *Aptr[3] = {&a, &b, &c};
    printf("Address of a : %p\n", Aptr[0]);
    printf("Address of b : %p\n", Aptr[1]);
    printf("Address of c : %p\n", Aptr[2]);
    for (i = 0; i < 3; i++)
        printf("*Aptr[%d] = %5.2lf\n", i, *Aptr[i]);
}
