#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* Rest_After_FirstString(char *A, char *str)
{
	int i, j, len_str = strlen(str);
	for(i=0; A[i]!='\0'; i++){
		if(A[i] == str[0]){
			if(strncmp(str, &A[i], len_str) == 0)
				return &A[i];
		}
	}
					
	return NULL; // str could not be found in A	
}


main() {
	char A[100] = "Mathematical", str[100]="hem", *B;
	
	B = Rest_After_FirstString(A, str);
	puts(B);
	
}
