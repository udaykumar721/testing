#include<stdio.h>
void main()
{
	int i,j,r;
	printf("enter the number of rows ");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
	printf("\n");	
	}
}
