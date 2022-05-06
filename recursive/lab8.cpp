/*convert to recursive function */
#include <stdio.h>

/*int F_iter(unsigned int n){
    int k = 0;
    while (n > 0)
    {
        k += n % 3;
        n /= 3;
    }
    return k;
} */

int rec(unsigned int n){
    if(n<3) return n;
    return n%3 + rec(n/3);
}

int main() {
    /*printf("%d",F_iter(8));*/
    printf("%d",rec(8));
}