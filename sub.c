#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    clrscr();
    printf("Enter the numbers to be subtracted\n");
    scanf("%d%d",&a,&b);
    c=a-b;
    if(c%2==0)
    {
        printf("\nThe difference is even");
    }
    else
    {
        printf("\nThe difference is odd");
    }
    getch();
}
