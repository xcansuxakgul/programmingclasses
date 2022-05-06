#include <stdio.h>
/* void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("(In function): x=%d, y=%d\n", x, y);
}

int main()
{
    int x = 10, y = 5;
    printf("(Before calling function): x=%d, y=%d\n", x, y);
    swap(x, y);
    printf("(After calling function): x=%d, y=%d\n", x, y);
    return 0;
} */

/* Swap does not work, we can use pointers */
#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("(In function): x=%d, y=%d\n", *x, *y);
}
int main()
{
    int x = 10, y = 5;
    printf("(Before calling function): x=%d, y=%d\n", x, y);
    swap(&x, &y);
    printf("(After calling function): x=%d, y=%d\n", x, y);
    return 0;
}