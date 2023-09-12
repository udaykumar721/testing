#include<stdio.h>
void main()
{
	int r;
	printf("enter the range of an string:");
	scanf("%d",&r);
	char arr[r],new[r];
	int i,j;
	for(i=0;i<r;i++)
	{
		printf("enter the character into string:");
		scanf("%c",&arr[i]);
	}
	for(i=0;i<r;i++)
	{
		printf("%d",arr[i]);
	}
	for(i=0,j=r-1;i<r;i++,j--)
	{
		char temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	
}
