#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a value");
	scanf("%d",&a);
	printf("enter b value");
	scanf("%d",&b);
	c=a-b;
	printf("%d",c);
	if(c%2==0)
	{
	printf("even");
	}
	else
	{
	printf("odd");
	}
   return 0;
}
