#include<stdio.h>
int main()
{
    int num, sum, i, number, count=0, n=1;

    printf("Enter N Digit's Number: ");
    scanf("%d", &num);

    number = num;

    //get the counter till then we have to run the loop

    while(number!=0)
    {
        number = number/10;
        count = count + 1;
    }

    for(i=1;i<count;i++)
    {
        n = n * 10;  //n = 10
        n = n + 1;   //n = 11
    }

    sum = num + n;
    printf("Output: %d", sum);
}
