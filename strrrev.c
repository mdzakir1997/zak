#include<stdio.h>
#include<string.h>
void main()
{
char a[10];
int b,i;
scanf("%s",a);
b=strlen(a);
for(i=b-1;i>=0;i--)
{
printf("%c",a[i]);
}
}
