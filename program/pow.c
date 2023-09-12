#include<stdio.h>
int main()
{
	int x,y,i=1;
	int power=1;
	printf("enter the two numbers");
	scanf("%d%d",&x,&y);
	while(i<=y)
	{
		power=power*x;
		i++;
	}
	printf("\n%d to the power of %d is %d",x,y,power);
}
