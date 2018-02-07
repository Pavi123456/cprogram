#include<stdio.h>
void main()
{
int v=2,j=3,n,i,temp;
printf("enter the limit");
scanf("%d",&n);
printf("%d%d",v,j);
for(i=3;i<=n;i++)
{
temp=v+j;
v=j;
j=temp;
printf("%d",temp);
}
}
