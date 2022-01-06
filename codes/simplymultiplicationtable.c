#include <stdio.h>
#include <stdlib.h>

int main() {
	int rows,columns,i,j;
	
	printf("enter columns and rows");
	scanf("%d%d",&columns,&rows);
	
	for(i=1;i<=rows;i++){
		for(j=1;j<=columns;j++){
			printf("%5d",i*j);
		}
		printf("\n");
	}
	
	return 0;
}
