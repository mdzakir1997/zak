#include<stdio.h>
void main()
{
int n,c=1,d,sum=0,i;
clrscr();
printf("Enter n and d values");
scanf("%d%d",&n,&d);
for(i=1;i<=n;i++)
{
sum=sum+c;
c=c+d;
}
printf("\n%d",sum);
}
