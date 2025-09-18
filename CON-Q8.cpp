#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a value ");
	scanf("%d",&a);
	b=a%10;
	printf("%d\n",b);
	if(b%3==0)
	printf("it is divisible by 3");
	else
	printf("it is not divisible by 3");
	return 0;
}