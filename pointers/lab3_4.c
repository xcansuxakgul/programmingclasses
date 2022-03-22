/* ======= LAB 4 */
#include <stdio.h>

void F(int *a,int b)
{
	if (b<4)
	return;

	(*a)++;
	b--;
	F(a,b);
	printf("\n %d %d",*a,b);
	
	return;
}
int main() {
	int b=4,a=7;
	F(&b,a);
	printf("\n %d %d",b,a);
	return 0;
}





