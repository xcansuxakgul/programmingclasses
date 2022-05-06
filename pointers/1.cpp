#include <stdio.h>

int main(){

    char c = 'A';
    int x = 0;
    float f = 1.2;
    double d = 5.2;

    printf("%d\n",sizeof(c));
    printf("%d\n",sizeof(x));
    printf("%d\n",sizeof(f));
    printf("%d\n",sizeof(d));

    printf("the adress of c is %p\n",&c);
    printf("the adress of x is %p\n",&x);
    printf("the adress of f is %p\n",&f);
    printf("the adress of d is %p\n",&d);

}