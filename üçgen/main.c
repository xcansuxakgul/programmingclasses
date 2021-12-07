/* PRINT THIS TRIANGLE
5
5  4  
5  4  3
5  4  3  2
5  4  3  2  1 */

#include<stdio.h>

int main(){
	int i,j,n;
	
	printf("bir sayý giriniz");
	scanf("%d",&n);
	
	for(i = n ; i >= 0 ; i--){
		for(j = n ;j > i ;j--){
			printf("%3d",j);
		}
		printf("\n");
}
	
	return 0;
}
