#include <stdio.h>
#include <stdlib.h>

int isPrime(int number){
    if(number==2) return 1;
    if(number % 2 == 0) return 0;
	int i;
    for(i=3;i <=number / i; i+=2){
    	if(number % i == 0) return 0;
	}
}

int main() {
	int num; 
	char a[11] = "not prime";
	char b[10] = "prime";
	printf("Enter a number to check its primality \t");
	scanf("%d",&num);
	printf("This number is %s", (isPrime(num)  == 0) ? a : b);
	
	return 0;
}
