#include <stdio.h>
void digits(int n){
    if(n==0) 
        return;
    printf("%d\n",n%10);
    return digits(n/10);
}
int main(){
    int num;
    scanf("%d",&num);
    digits(num);
}
