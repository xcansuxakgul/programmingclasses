#include <stdio.h>
int main(){
    int x = 5;
    int *xPtr = &x;
    int **xPtrPtr = &xPtr;
    printf("The value of x: %d\n", x);
    printf("The address of x: %p\n", &x);
    printf("\n");
    printf("The value of xPtr: %p\n", xPtr);
    printf("The address of xPtr: %p\n", &xPtr);
    printf("Dereferencing of xPtr: %d\n", *xPtr);
    printf("\n");
    printf("The value of xPtrPtr: %p\n", xPtrPtr);
    printf("The address of xPtrPtr: %p\n", &xPtrPtr);
    printf("Dereferencing of xPtrPtr: %p\n", *xPtrPtr);
    printf("Double dereferencing of xPtrPtr: %d\n", **xPtrPtr);
}