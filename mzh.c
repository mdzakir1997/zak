#include<stdio.h>
void main()
{
int b[5]={13,7,3,4,5},i,n,sum=0;
scanf("\n%d",&n);
for(i=0;i<n;i++)
{
sum=sum+b[i];
}
printf("\n The sum is %d",sum);
}
