#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int i,j,temp, arr[10]; 
	for(i=0;i<10;i++){ 
		printf("enter num\t",i);
		scanf ("%d",&arr[i]);
	}
	for(i=0;i<10;i++){
		for (j=i+1;j<10;j++){
			if(arr[i] >arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	for(i=0;i<10;i++){
		printf("%3d",arr[i]);
	}
	return 0;
}
