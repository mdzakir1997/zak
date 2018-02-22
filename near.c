#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i;
    clrscr();
    printf("Enter a number\n");
    scanf("%d",&a);
    for(i=a;i>0;i--)
    {
        if(i%2==0)
        {
            printf("%d",i);
            break;
        }
    }
    getch();
}
