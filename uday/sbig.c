#include<stdio.h>
void main()
{
	int r;
	printf("enter the elements in an array:");
	scanf("%d",&r);
	int a[r],i,big,sbig;
	printf("enter the elements in an array");
	for(i=0;i<r;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the array is:\n");
	for(i=0;i<r;i++)
	{
		printf("%d,",a[i]);
	}
	big=a[0];
	sbig=0;
	for(i=1;i<r;i++)
	{
		if(big<a[i])
		{
			sbig=big;
			big=a[i];
		}
		else
		{
			if(sbig<a[i])
			{
				sbig=a[i];
			}
		}
	}
	printf(" sbig=%d",sbig);
}
