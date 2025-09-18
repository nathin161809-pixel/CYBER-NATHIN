#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a value");
	scanf("%d",&a);
	printf("enter b value");
	scanf("%d",&b);
	printf("enter c value");
	scanf("%d",&c);
	if(a>b && c>b)
	{
	printf("the smallest number is %d",b);
	}
	else if	(b>a && c>a)
	{
	printf("the smallest number is %d",a);
	}
	else
	{
	printf("the smallest number is %d",c);
	}
   return 0;
}
