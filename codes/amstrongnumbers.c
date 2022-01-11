//Q1_2 For amstrong number
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int number_of_digits(int a)
{
	int nd=0;
	while(a>0) 
	{
		nd++;a/=10;
	}
	return nd;
}
int Amstrong(int a)
{
	int nd=number_of_digits(a);
	int sum=0;
	while(a>0)
	{
		sum+=pow(a%10,nd);
		a/=10;
	}
	return sum;	
}
int main()
{
	int num,k;
	char flag[22] = "is an amstrong number";
	char unflag[30] = "is not an amstrong number";
	printf("Enter number:");
	scanf("%d",&num);
	k=Amstrong(num);
	printf("%d %s",num,(k == num) ? flag : unflag);
	return 0;
}
