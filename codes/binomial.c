//Binom coefficients
#include <stdio.h>
#include <stdlib.h>
unsigned int Factorial(int);
int Binom(int,int);
int main()
{
	int i,j,n=10,binom;
	for(i=0;i<=n;i++) 
	{
		for(j=0;j<=i;j++) printf("%5d",Binom(i,j));
        printf("\n");
	}
	return 0;	
}
unsigned int  Factorial(int n)
{
	int k=1,i;
	for(i=1;i<=n;i++) k*=i;
	return k;
}
int Binom(int a,int b)
{
	return Factorial(a)/(Factorial(a-b)*Factorial(b));
}
