#include <stdio.h>
void F(int *x)
{
    printf("\n%d", *x);
    if (*x > 7)
        return;
    (*x)++;
    F(x);
    (*x)--;
    printf("\n%d", *x);
    (*x)++;
    return;
}
int main()
{
    int x = 4;
    F(&x);
    printf("\n%d", x);
    return 0;
}
