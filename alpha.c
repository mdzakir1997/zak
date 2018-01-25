#include<stdio.h>
void main()
{
char a;
printf("\n Enter the character");
scanf("\n%c",&a);
if((a>='a' || a>='z') ||(a>='A' || a>='Z') )
{
printf("\n Alphabet");
}
else
{
printf("\n No");
}
}
