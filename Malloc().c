#include<stdio.h>
#include<stdlib.h>
int main()
    {
        int len ,i ,sum;
        printf("Enter the count of numbers: ");
        scanf("%d",&len);
        int *par;
        par = (int*) malloc(sizeof(int)*len);
        for(i=0;i<len;i++)
        {
            printf("Enter a number: ");
            scanf("%d",par+i);
        }
        for(i=0;i<len;i++)
        {
            sum +=par[i];
        }
        printf("total sum is: %d",sum);
        return 0;
    }
