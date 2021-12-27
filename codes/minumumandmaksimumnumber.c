#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int arr[3][3], i, j,max,min;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	max=arr[0][0];
	min=arr[0][0];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(max < arr[i][j]){
				max = arr[i][j];
			}
			if(min > arr[i][j]){
				min = arr[i][j];
			}
		}
	}
	printf("%d %d",max, min);
	return 0;
}
