#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	int*const ptr=&a;
	printf("%d",*ptr);
	return 0;
}
