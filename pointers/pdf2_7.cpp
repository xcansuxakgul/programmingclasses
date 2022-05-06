#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, N, *p;
    printf("Size of dynamic array: ");
    scanf("%d", &N);
    p = (int *)malloc(sizeof(int) * N);
    if (p == NULL)
    {
        printf("Memory Error!");
        exit(0);
    }
    printf("Enter values:\n");
    for (i = 0; i < N; i++)
    {
        printf("p[%d] = ", i);
        scanf("%d", &p[i]);
    }
    printf("The elements:\n");
    for (i = 0; i < N; i++)
        printf("p[%d] --> %d\n", i, p[i]);
    free(p);
}