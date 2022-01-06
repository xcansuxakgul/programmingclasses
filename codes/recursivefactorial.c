#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
   //base case
   if(n == 0) {
      return 1;
   } else {
      return n * factorial(n-1);
   }
}

int main() {

   	int n,i;
	printf("Enter a number to calculate the factorial of its");
	scanf("%d",&n);
	printf("Factorial of %d: %d\n" , n , factorial(n));
	return 0;
}

// previous my inefficient code 

/*#include <stdio.h>
#include <stdlib.h>

int factor(int num,int fact){
	if (num == 1 && num == 0) return 1;
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
}*\
