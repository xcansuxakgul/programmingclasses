#include <stdio.h>
#include<stdlib.h>
#include <string.h>
int rec_length_string(const char *S){
    if(S[0]=='\0') return 0;
    return 1+ rec_length_string(S+1);
}
char* rest_of_string(char *A,char ch){
    int i;
    for(i=rec_length_string(A)-1;A[i]!=0; i--){
        if(A[i]==ch)
            return &A[i];
    }
    return NULL;
}
int main(){
    char A[50]= "lkdsmflkmdklmfk";
    printf("%d\n",rec_length_string(A));

    char ch = 'm', *B;
    B = rest_of_string(A, ch);
    puts(B);
}