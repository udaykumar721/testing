#include<stdio.h>
int a=10;
int fun(void);
void main()
{
	//a=20;
	fun();
	//int a=20;
	printf("%d",a);
}
int fun(void)
{
	//a=90;
	if(1)
	{
		printf("%d",a);
	}
	printf("%d",a);
}
