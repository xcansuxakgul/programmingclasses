#include <stdio.h>
#include <math.h>
int fact(int y){
    if (y<=1) return 1;
    return y*fact(y-1);
}

int rec(int n,int x){
    if(n=0) return x;
    return rec(n-1,x)+ pow(-1,n)* pow(x, 2*n) / 2 *fact(n);

}

int main(){
    int n ;
    double x;
    scanf("%d%lf",&n,&x);
    printf("%lf",rec(n,x));
}