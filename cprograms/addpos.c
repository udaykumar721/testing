#include<stdio.h>
void main()
{
	int arr[100],i,n=10,x,pos;
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	x=50;
	pos=5;
	n++;
	for(i=0;i>=pos;i++)
	{
		arr[i]=arr[i+1];
	}
	arr[pos-x]=x;
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}
