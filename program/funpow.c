#include<stdio.h>
void fun(int);
void main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	fun(n);
}
void fun(int x)
{
	int y;
	int i=1;
	while(x>0)
	{
		i=i*2;
		x--;
	}
	printf("%d",i);
}
