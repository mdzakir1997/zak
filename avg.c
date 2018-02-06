#include<stdio.h>
void main()
{
int a[10],b=0,i,n,c;
printf("\n Enter n value");
scanf("%d",&n);
printf("\n Enter the values");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
b=b+a[i];
}
c=b/n;
printf("\n The avg is %d",c);
}
