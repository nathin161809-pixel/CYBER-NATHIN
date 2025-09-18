
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
	if(a>b && a>c)
	{
	printf("the greatest number is %d",a);
	}
	else if (b>a && b>c)
	{
	printf("the greatest number is %d",b);
	}
	else
	{
	printf("the greatest number is %d",c);
    }
    return 0;
}
