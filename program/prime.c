#include<stdio.h>
void main()
{
	int n,i,count=0;
	printf("enter the number");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			count++;
			break;
		}
	}
	if(count==0)
	{
		printf("the given number is prime number");
	}
	else
	{
		printf("the given number is not a prime number");
	}
	
}
