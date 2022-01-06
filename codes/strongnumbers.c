#include <stdio.h>

int fact(int temp){
	int a,factor = 1;
	for(a=1; a<=temp; a++){
		factor *= a;
	}
	return factor;
}

int main() {
	int n, i, temp,test,num, result,arr[50],a=0;
	
	printf("enter n \t");
	scanf("%d",&n);
	for(i=1;i<=n; i++){
		num = i;
		test= 0;
		
		while(num>0){
			temp= num % 10;
			result= fact(temp);
			test += result;
			num /= 10; 
		}
		
		if(test == i){
			arr[a] = i;
			a++;
		}
		
	}
	printf("\nHere is numbers:\n");
	for(i=0;i<a;i++){
		printf("%d\n",arr[i]);
	}
	
	return 0;
}
