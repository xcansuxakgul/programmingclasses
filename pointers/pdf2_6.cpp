#include <stdio.h>
int main()
{
    int i;
    int A[5] = {2, 4, 6, 8, 10};
    printf("The elements of A: ");
    for (i = 0; i < 5; i++)
        printf("%d ", A[i]);
    
    printf("\nA: %p\n", A);
    printf("Addresses of the elements:\n");
    for (i = 0; i < 5; i++)
        printf("&A[%d] --> %p\n", i, &A[i]);
}
