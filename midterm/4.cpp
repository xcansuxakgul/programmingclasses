#include <stdio.h>
void increaseArray(int A[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        A[i]++;
}
int main()
{
    int i;
    int B[5] = {1, 2, 3, 4, 5};
    increaseArray(B, 5);
    for (i = 0; i < 5; i++)
        printf("%d ", B[i]);
}
