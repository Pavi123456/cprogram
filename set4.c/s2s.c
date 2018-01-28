#include<stdio.h>
void main()
{
    int v=0,j=1,n,limit,i;
    printf("enter the limit");
    scanf("%d",&limit);
    printf("%d%d",v,j);
    for(i=2;i<=limit;i++)
    {
        n=v+j;
        f=j;
        j=n;
        printf("%d",n);
    }
}
