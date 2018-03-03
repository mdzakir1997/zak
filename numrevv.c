#include<stdio.h>
void main()
{
int a,b;
scanf("%d",&a);
b=a;
while(a!=0)
{
b=a%10;
a/=10;
printf("%d",b);
}
}
