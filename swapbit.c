#include<stdio.h>
void main()
{
int a,b;
printf("\n Enter two numbers\n");
scanf("%d%d",&a,&b);
(a^=b),(b^=a),(a^=b);
printf("\n%d\t%d",a,b);
}
