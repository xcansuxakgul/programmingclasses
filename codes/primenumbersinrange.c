#include <stdio.h>
#include <stdlib.h>
int prime_numbers(int num){
	int j;
    for(j=2; j <=num / j; ++j){
    	if(num % j == 0) return 0;
	}
	return 1;
}

int main() {
	int n,i,result;
	
	printf("Enter n ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		result = prime_numbers(i);
		if(result==1) printf("%d \t",i);
	}
	
	return 0;
}
