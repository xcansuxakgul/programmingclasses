/*Finding  reversed number*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int number, right_digit;
	
	printf("enter a number to reversed");
	scanf("%d", &number);
	
	//if number = 0, this loop never executed 
	
	/*	while (number != 0 ) {
		right_digit = number % 10;
		printf ("%i", right_digit);
		number = number / 10;
	}*/
	
	//we solve this problem like this: the loop is executed at least once in do-while loop 	
	
	/*
	do {
		right_digit = number % 10; 
		printf ("%i", right_digit); 
		number = number / 10;
	}
	
	while ( number != 0 );
	*/
	
	// the best algorithm works like this:
	
	if(number >0 ){
		
		while (number != 0 ) {
		right_digit = number % 10;
		printf ("%i", right_digit);
		number = number / 10;
		}
	}
	
	else printf("invalid input. Please enter a positive number");
	
	return 0;
}
