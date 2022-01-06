#include<stdio.h>
#include<string.h>

int main(){
	
	char s[100], reverse[100];
	
	printf("Enter string");
	gets(s);
	
	int len = strlen(s);
	
	int index = len-1, rIndex = 0;
	
	while(index >= 0){
		reverse[rIndex] = s[index];
		
		index--;
		rIndex++;
	}
	
	reverse[rIndex] = '\0';
	
	printf("\nOrjinal String = %s\n",s);
	printf("\nReverse String = %s\n",reverse);	
	
	return 0;
}
