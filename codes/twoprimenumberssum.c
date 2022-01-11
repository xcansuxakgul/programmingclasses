#include <stdio.h>
#include <stdlib.h>
int is_prime(int a)
{
	int i;
	if(a==1) return 0;
	for(i=2;i<a;i++) if(a%i==0) return 0;
	return 1;
}
int main()
{
	int n,i,flag=0;
	printf("Enter a number");
	scanf("%d",&n);
	for(i=1;i<=n/i;i++)
	     if(is_prime(i)==1 && is_prime(n-i)==1) 
		 {
		 	printf("%d=%d+%d\n",n,i,n-i);
		 	flag=1;
		 }
		  
	if(flag==0) printf("This number cannot explain with two prime numbers sum",n);
	return 0;
}
