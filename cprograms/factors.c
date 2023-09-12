#include<stdio.h>
void main()
{
	int n,fact,i=1;
	printf("enter the number");
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%i==0)
		{
			printf("%d\n",i);
		}
		i=i+1;
	}
}
