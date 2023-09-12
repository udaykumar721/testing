#include<stdio.h>
void main()
{
	int n,sum=0,r=0;
	printf("enter the number");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("the sum of the number is=%d \n",sum);
}
