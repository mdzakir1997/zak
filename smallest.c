#include<stdio.h>
void main()
{
    int a[100],i,n,j;
    printf("\nEnter the size of the array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
             int t;
             t=a[i];
             a[i]=a[j];
             a[j]=t;
            }
        }
    }
    printf("\nThe smallest number is %d",a[0]);
}
