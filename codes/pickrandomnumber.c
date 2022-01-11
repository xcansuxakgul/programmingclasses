#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i;
 	
	for (i = 1; i <= 20; ++i) {
		printf("%10d", 1 + rand()%6);

 	// if counter is divisible by 5, begin new line of output
 		if (i % 5 == 0) {
 			puts("");
		}	 
	}
	
	return 0;
}
