#include<stdio.h>
#include<math.h>
void main()
{
	float p,r,n;
	printf("enter the principle amount:");
	scanf("%f",&p);
	printf("entre the proportion of rate:");
	scanf("%f",&r);
	printf("enetr the number of years:");
	scanf("%f",&n);
	float pay;
	pay=(p*r*n)/100;
	printf("payment=%f",pay);
}
