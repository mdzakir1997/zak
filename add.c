#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    clrscr();
    printf("Enter the numbers to be added\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    if(c%2==0)
    {
        printf("\nThe sum is even");
    }
    else
    {
        printf("\nThe sum is odd");
    }
    getch();
}
