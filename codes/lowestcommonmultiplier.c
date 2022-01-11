//lowest common multiplier 
#include <stdio.h>
#include <stdlib.h>
int lcm(int n1,int n2)
{
	int max=(n1>n2) ? n1:n2; //(if(n1>n2) max=n1; else max=n2)
	while(1) 
	{
		if(max%n1==0 && max%n2==0) break;
		max++;
	}
	return max;
}
int main()
{
    int a,b;
    printf("Enter two nums a ve b :");
    scanf("%d%d",&a,&b);
    printf("The (%d,%d) of lcm is %d",a,b,lcm(a,b));
	return 0;
}
