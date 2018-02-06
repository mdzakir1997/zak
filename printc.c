#include<stdio.h>
#include<string.h>
void main()
{
char a[50];
int i,n;
printf("\n Enter a string\n");
scanf("%s",&a);
printf("\n Enter the req time to print");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n%s",a);
}
}
