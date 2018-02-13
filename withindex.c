#include<stdio.h>
void main()
{
int a[10],i,n;
printf("Enter n value\n");
scanf("%d",&n);
printf("\nEnter the array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("%d\t%d",a[i],i);
printf("\n");
}
}
