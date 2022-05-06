#include <stdio.h>
#include <string.h>
char *my_strcpy(char *S1, const char *S2)
{
    int i;
    for (i = 0; i < S2[i] != '\0'; i++)
    {
        S1[i] = S2[i];
    }
    S1[i] = '\0';
    return S1;
}
int main()
{
    char B[50];
    char A[] = "Sample text";
    my_strcpy(B, A);
    puts(B);
}
