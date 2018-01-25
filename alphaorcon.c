#include<stdio.h>
void main()
{
char a;
printf("\n Enter a character");
scanf("\n%c",&a);
if((a=='a' || a=='e' || a=='i' || a=='o' || a=='u') || (a=='A') || a=='E' || a=='I' || a=='O' || a=='U')
{
printf("\n Vowel");
}
else
{
printf("\n Consonant");
}
}
