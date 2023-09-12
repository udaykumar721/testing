#include<stdio.h>
void main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	if(n&1==1)
	{
		printf("the given number is an odd number");
	}
	else
	{
		printf("the given number is an even number");
	}
}
