#include <stdio.h>
#include <string.h>
void reverse(char *c){
    int i,len;
    len = strlen(c);
    for(i=len;i>=0;i--){
        printf("%c",c[i]);
    }
}
int main(){
    char c[100] = "abcdefgh";
    reverse(c);
}