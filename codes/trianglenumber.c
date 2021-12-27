/*Calculating the triangular number*/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int  i,n, triangle_number= 0;
	
	printf("what triangle number do you want to calculate?\n");
	scanf("%d",&n);
	
	for(i = 0 ; i<=n; i++){
		triangle_number += i;
	}
	printf("It is %d",triangle_number);
	
	return 0;
}
