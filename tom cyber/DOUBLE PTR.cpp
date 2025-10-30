#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int *ptr=&a;
	printf("%d",*ptr);
	int **ptr1=&ptr;
	printf("\n%d",**ptr1);
}	