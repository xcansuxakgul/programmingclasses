#include <stdio.h>
#include <string.h>
int my_strlen(const char* S){
    int i, length = 0;
    for(i=0; i< S[i]!= '\0'; i++){
        length++;
    }return length;
}
char *my_strcpy(char *S1,const char *S2){
    int i;
    for(i=0; i< S2[i] !='\0'; i++){
        S1[i]= S2[i];
    }
    S1[i]='\0';
    return S1;
}
char *my_strncpy(char *S1,const char *S2,int n){
    int i;
    for(i=0; i< S2[i] !='\0' && i < n; i++){
        S1[i]= S2[i];
    }
    S1[i]='\0';
    return S1;
}
char *my_strcat(char *S1,const char *S2){
    int len_S1= my_strlen(S1),i;    
    for(i=0; i< S2[i] !='\0'; i++)
        S1[len_S1+i]= S2[i];
    S1[len_S1+i]='\0';
    return S1;
}

int main()
{
    int i;
    char S[50];
    gets(S); /* read all strings*/
    puts(S);/* write all strings*/
    printf("%s\n", S);
    for(i=0; S[i]!='\0'; i++)
        printf("%c", S[i]);

    /* use strlen()*/
    printf("\n%d\n", strlen(S));
    printf("%d\n", my_strlen(S));
    
    char B[50]; char A[]="Sample text";
    my_strcpy(B, A);
    puts(B);
    strcpy(S, B);
    puts(S);
    
    strncpy(B, A, 4);
    B[4] = '\0'; /*strncpy does  not do this */
    printf("%s\n", B);
    my_strncpy(A, S, 6);
    puts(A);
    

    /*strcat*/
    char C[]= "Deneme", D[]= "test",E[]= "fonk";
    strcat(C,D);
    puts(C);
    my_strcat(E,D);
    puts(E);

    /*strcmp*/
    char F[]="hgh", G[]="hgh", H[]="Hgh";
    printf("%d",strcmp(F,G));

}
