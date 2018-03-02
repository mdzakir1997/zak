#include<stdio.h>
#include<string.h>
void main()
{
char a[20];
int b;
printf("Enter the string\n");
gets(a);
b=strlen(a);
if(b%2==0)
{
a[b/2]='*';
a[(b/2)-1]='*';
}
else
{
a[b/2]='*';
}
printf("\n%s",a);
}
