#include <stdio.h>
#include <string.h>

int Find_iter(char *specific, char *a){
    int count=0, i = 0 ,len;
    len= strlen(a);
    for(i=0; i<len; i++){
        if(a[i] == specific[0]){
            count+=1;
        }
    } 
    return count;
}
int main(){
    
    char specific[10];
    char a[100];
    printf("enter spesific");
    scanf("%s",&specific);
    printf("enter string");
    scanf("%s",&a);

    printf("%d",Find_iter(specific,a));
}