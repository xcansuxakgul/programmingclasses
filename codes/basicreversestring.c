#include <stdio.h>
#include <string.h>
 
int main() {

   int i,j;

   char str[100];

   printf("Enter a word");

   gets(str);

	i =  strlen(str);
   for(j=i; j>=0; j--) {

        printf("%c",str[j]);

   }

	return 0;
}
 
