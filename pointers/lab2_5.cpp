#include <stdio.h>
int main()
{
    int A[5] = {2, 4, 6, 8, 10};
    int i, *p = A;
    printf("A: %p\n", A);
    printf("p: %p\n", p);
    printf("Addresses:\n");
    for (i = 0; i < 5; i++)
        printf("&A[%d] --> %p p+%d --> %p\n", i, &A[i], i, p + i);
    printf("The elements:\n");
    for (i = 0; i < 5; i++)
        printf("A[%d] --> %d *(p+%d) --> %d\n", i, A[i], i, *(p + i));
    p++;
    // A++;
}