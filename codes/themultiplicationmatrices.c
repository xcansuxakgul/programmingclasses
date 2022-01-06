#include<stdio.h>

int main(){
	
	int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int B[3][3] = {{9,8,7},{6,5,4},{3,2,1}};
	int C[3][3];
	
	int i,j,k,sum;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			sum = 0;
			for(k=0;k<3;k++){
				sum += A[i][k] * B[k][j];
			}
			C[i][j]=sum;
		}
	}
	
	printf("\n");
	
	printf("The Multiplication of matrices:\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%4d",C[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
