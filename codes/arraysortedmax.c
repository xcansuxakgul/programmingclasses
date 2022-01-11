#include <stdio.h>

int main(){
	int a[]= {1,9,7,4,2,1,7,8,9,0,3,-9};
	int max, i,j,temp;
	
	printf("Enter what max number");
	scanf("%d",&max);
	
	for(i=0;i<12;i++){
		for(j = i+1; j <12;j++){
			if(a[i] < a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\n%d ",a[max-1]);
}
