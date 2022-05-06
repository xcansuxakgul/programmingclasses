/*lab 4 2*/
#include <stdio.h>
#include <stdlib.h>
int F(int a, int b){
    int *t;
    t=(int*) malloc(sizeof(int));
    if(a==0) return b;
    printf("a= %d b =%d\n",a,b);
    *t = a;
    a = b%(*t);
    return F(a,*t);
}
int main(){
    int x=115,y=4, c;
    c=F(x,y);
    printf("c= %d\n",c);
    return 0;
    
}