#include <stdio.h>
int main()
{
    char c = 'A', *cPtr = &c;
    int x = 10, *xPtr = &x;
    float f = 3.4, *fPtr = &f;
    double d = 5.2, *dPtr = &d;
    printf("The size of *char : %d\n", sizeof(cPtr));
    printf("The size of *int : %d\n", sizeof(xPtr));
    printf("The size of *float : %d\n", sizeof(fPtr));
    printf("The size of *double : %d\n", sizeof(dPtr));
    printf("The value in c : %c\n", c);
    printf("The value in c : %c\n", *cPtr);
    printf("The value in x : %d\n", x);
    printf("The value in x : %d\n", *xPtr);
    printf("The value in f : %f\n", f);
    printf("The value in f : %f\n", *fPtr);
    printf("The value in d : %lf\n", d);
    printf("The value in d : %lf\n", *dPtr);
    return 0;
}
