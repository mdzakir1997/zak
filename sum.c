#include<stdio.h>
void main()
{
int a[2],b=0,i;
printf("\n Enter the number");
for(i=0;i<2;i++)
{
scanf("%d",&a[i]);
b+=a[i];
}
printf("\n The sum is %d",b);
}
