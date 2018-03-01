#include<stdio.h>
#include<string.h>
void main()
{
char a[20],b[20];
printf("Enter the string\n");
scanf("%s",a);
strrev(b,a);
strcmp(b,a);
if(b==a)
{
printf("\nYes");
}
else
{
printf("\nNo");
}
}
