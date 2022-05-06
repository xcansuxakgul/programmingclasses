#include <stdio.h>
int main()
{
    int x = 5;
    int *xPtr = &x;
    printf("x: %d\n", x);
    printf("Address of x: %p\n", xPtr);
    printf("*x: %d\n", *xPtr);
    printf("%d\n", *&x);
    printf("%p\n", &*xPtr);
    printf("%d\n", *&*xPtr);
}
