#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr[5];
	int i, sum;
	double average;
	printf("enter 5 nums\n");
	sum=0;
	
	for(i=0; i<5; i++){
		scanf("%d", &arr[i]);
		sum +=arr[i];
	}

	printf("%d",sum/5);
	return 0;
}
