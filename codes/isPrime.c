#include <stdio.h>

int isPrime(int number){
	int i;
    for(i=2;i <=number / i; i++){
    	if(number % i == 0) return 0;
    	break;
	}
}

int main() {
	int num; 
	char a[11] = "not prime";
	char b[10] = "prime";
	
	do{
		printf("enter a number is greater than 0 please");
		scanf("%d",&num);
	}
	while(num < 0);
	
	
	printf("This number is %s", (isPrime(num)  == 0) ? a : b);
	
	return 0;
}
