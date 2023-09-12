#include<stdio.h>
void main()
{
	int r,i,j,k;
	printf("enter the number of rows");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		for(j=r;j>=i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("*");
		}
	printf("\n");
	}
}
