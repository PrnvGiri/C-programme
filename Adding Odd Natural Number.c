#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("enter your limit :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",2*i-1);
        sum=sum+(2*i-1);
    }
    printf("\nTotal sum is: %d",sum);
}
