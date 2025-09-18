#include<stdio.h>
int main ()
{
	int a;
	printf("enter a value");
	scanf("%d",&a);
	if (a & 1)
	printf("odd");
	else
	printf("even");
	return 0;
	
}