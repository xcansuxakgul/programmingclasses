#include <stdio.h>
int my_strlen(const char *S){
    int i , length = 0;
    for(i=0; S[i] != '\0'; i++){
        length += 1;     
    }
    return length;
}
void my_combin(char *a, const char *b){
    int i ,len_a;
    len_a = my_strlen(a);
    for(i=0; b[i]!='\0'; i++)
        a[len_a+i]= b[i];
    a[len_a+i]='\0';
    return;
}
int main(){
    char a[100] = "ABC", b[100] = "djnfdsnf";
    puts(a);
    my_combin(a,b);
    puts(a);
    return 0;
}