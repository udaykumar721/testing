#include<stdio.h>
void main()
{
	int a=0,b=1,n,c,i=1;
	printf("enter the range");
	scanf("%d",&n);
	printf("%d\n",a);
	printf("%d\n",b);
	while(i<=n-2)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
		i++;
	}
}
