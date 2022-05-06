#include <stdio.h>
#include <math.h>
int value(int x){
    return pow(x,3);
}
int point(int *y){
    return pow(*y,3);
}
int main(){
    int x;
    int y;
    scanf("%d",&x);
    printf("value of cube %d\n",value(x));
    scanf("%d",&y);
    printf("reference of cube %d", point(&y));
}