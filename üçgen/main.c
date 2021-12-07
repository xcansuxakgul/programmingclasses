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
