#include <stdio.h>

int power(int x, int n){
    if (n==0) return 1;
    return x* power(x, n-1);
}
int main(){
    int n, x;
    scanf("%d%d",&n,&x);
    printf("%d", power(x,n));
}