#include <stdio.h>
#include <stdlib.h>

/* Enter a number. If this number is perfect, print "perfect"; else you find perfect numbers to n.*/

int perfect(int n){
	int is_perfect = 0;
	int i;
    int sum=0;
	for(i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}
		 
	}
	if(sum==n) return 1;
	else return 0;
}

void find_perfect(int n){
    int j;
    for(j=1;j<n;j++){
        if(perfect(j)){
            printf("%d ",j);
        }
    }
}



int main (){
	int n;
	
	printf("Bir sayi giriniz:");
	scanf("%d",&n);
	
    if(perfect(n)) printf("perfect");
    else{
        find_perfect(n);
    }

	return 0;
}
