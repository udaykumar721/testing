int main()
{
int n;
printf("Enter how many elements you want to store:");
scanf("%d",&n);
int a[n],i,l1,l2;
printf("Enter the elements into array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("The array is:\n");
for(i=0;i<n;i++)
{
printf("%d,",a[i]);
}
if(n>1)
{
l1=a[0];l2=a[1];
for(i=1;i<n;i++)
{
if(l1<a[i])
{
l2=l1;
l1=a[i];
}
else if(l2<a[i] && (a[i]!=l1 && a[i]<l1))
{
l2=a[i];
}
}
}
printf("\nThe first largest number is:%d\n",l1);
printf("The second largest number is:%d\n",l2);
}
