#include <stdio.h>


int main(int argc, char *argv[]) {
	int i,j,k,rows;
	printf("Enter rows number");
	scanf("%d", &rows);
	
	for(i=0;i<rows; i++){
		
		for(j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	for(i=rows-2;i>=0; i--){
		for(j=0;j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}

// The effective algorithm is like:

/*#include <stdio.h>

int main(){
	
	int i, j, n, star;
	
	printf("n tamsayisini giriniz : "); scanf("%d",&n);
	star=1;
	
	for( i=1 ; i<n*2 ; i++){
		for( j=1 ; j<=star ; j++){
			printf("*");
		}
		if(i<n){
			star++;
		}else{
			star--;
		}
		printf("\n");
	}

	return 0;
     
}*/
