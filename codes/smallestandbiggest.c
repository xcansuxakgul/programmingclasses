#include <stdio.h>

int main(){
	int arr[3][2],i,j,the_smallest,the_biggest;
		
	for(i=0;i<3;++i){
		for(j=0;j<2;++j){
			printf("enter number\t",i,j);
			scanf("%d",&arr[i][j]);			
		}
	}
	
	the_smallest= arr[0][0];
	the_biggest = arr[0][0];
	
	for(i=0;i<3;++i){
		for(j= 0 ;j<2;++j){
			if(the_smallest> arr[i][j]) the_smallest=arr[i][j];
			if(the_biggest<arr[i][j]) the_biggest= arr[i][j];
		}
	}
	
	printf("%d\t%d",the_smallest,the_biggest);
 
 	return 0;

}
