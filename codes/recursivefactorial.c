#include <stdio.h>
#include <stdlib.h>

int factor(int num,int fact){
	if (num == 1) return 1;
  fact *= num;
	if ((num-1) ==1)return fact;
	return factor(num-1, fact);
}

int main() {
	int num;
	int fact = 1;
	printf("enter a number to calculate the factorial of its\t");
	scanf("%d",&num);
	printf("\nThe result is %d\n", factor(num,fact));
	
	return 0;
}
