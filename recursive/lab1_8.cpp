#include <stdio.h>

int rec(int n){
    if(n<=1) return 1;
    return rec(n-1) + (n-1) * (n+1);
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",rec(n));
}