#include<stdio.h>
void main()
{
int a,b=1,i;
printf("\n Enter a num");
scanf("\n%d",&a);
for(i=a;i>0;i--)
{
b=b*i;
}
printf("\n The factorial of the number is %d",b);
}
