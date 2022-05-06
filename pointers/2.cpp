#include <stdio.h>
int main()
{
    int x = 5;
    int *xPtr;
    xPtr = &x;
    printf("x: %d\n", x);
    printf("Address of x: %p\n", &x);
    printf("Address of x: %p\n", xPtr);

    int *xxPtr = NULL;
    printf("Address of x: %p\n", xxPtr);
}
