#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int a=0,i,len;
    char z[50];
    clrscr();
    printf("\n Enter the string");
 gets(z);
    len = strlen(z);
   for(i=0;i<len;i++)
    {
        if(z[i]==' ')
     a++;   
    }
printf("\nThe number of words is %d",a+1);
getch();
}
