#include <stdio.h>
#include <stdlib.h>

int main() {
	int row,i,j,k;
	printf("enter a number");
	scanf("%d",&row);
	
	for(i=0;i<row;i++){
		for(j=0;j<= row-i; j++){
			printf(" ");	
		}
		for(j=0; j<=i; j++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
