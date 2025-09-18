#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a value");
	scanf("%d",&a);
	b=a/100;
	printf("%d",b);
	if(b%2==0)
	{
	printf("even");
	}
	else
	{
	printf("odd");
	}
   return 0;
}