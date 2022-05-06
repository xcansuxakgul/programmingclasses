#include <stdio.h>
#include <string.h>
int cmp(int n,char *s1, char *s2){
    int i,len_a,len_b;
    for (i= 0; s1[i] != '\0' && s2[i] != '\0' && i<n ; i++){
        if(s1[i]!=s2[i]) return 1;
    }
    if(i==n) return 0;
    
    return 0;
}
int main(){
    int n;
    char s1[100] = "helllo", s2[100] = "hell";
    scanf("%d", &n);
    printf("%d", cmp(n,s1, s2));
}