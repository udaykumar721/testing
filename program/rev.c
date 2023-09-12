#include<stdio.h>
void main()
{
	int n,rev=0,r=0;
	printf("enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		rev=(rev*10)+r;
		n=n/10;
	}
	printf("reverse of the given number is:%d \n",rev);
}
