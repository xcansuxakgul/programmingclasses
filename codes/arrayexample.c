/* Write a C program that finds the minimum element of each row, the maximum element of 
each column and finally the maximum element of the whole matrix. A sample output is
given below. 
3 11 -6 -8
-4  4 89  5
2  4  8  9

1. row --> MIN:  -8
2. row --> MIN:  -4
3. row --> MIN:   2
1. column --> MAX:   3
2. column --> MAX:  11
3. column --> MAX:  89
4. column --> MAX:   9
MAX: 89
*/

#include<stdio.h>

int main(){
	
	int arr[3][4] = {{3, 11, -6, -8},{-4, 4, 89, 5},{2, 4, 8,9}};
	int i,j;
	int min,max,max2;
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++)
			printf("%3d",arr[i][j]);
		printf("\n");
	}
	
	printf("\n");
	
	for(i=0 ; i<3 ; i++){
		min = arr[i][0];
		for(j=1 ; j<4 ; j++){
			if(arr[i][j]<min){
				min = arr[i][j];
			}
		}
		printf("%d. row --> MIN: %3d\n",i+1,min);
	}
	
	max2 = arr[0][0];
	
	for(j=0 ; j<4 ; j++){
		max = arr[0][j];
		for(i=1 ; i<3 ; i++){
			if(arr[i][j]>max){
				max = arr[i][j];
			}
		}
		printf("%d. column --> MAX: %3d\n",j+1,max);
		if(max>max2){
			max2 = max;
		}
	}
	
	printf("MAX:%3d",max2);
	
	return 0;
}
