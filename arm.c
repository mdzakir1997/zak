#include<stdio.h>
void main()
{
int a,b,c,rem;
scanf("%d",&a);
a=b;
while(a>0)
{
rem=a%10;
c=c+(rem*rem*rem);
a=a/10;
}
if(b==c)
{
printf("\nArmstrong number");
}
else
{
printf("\n Not an armstrong number");
}
}
