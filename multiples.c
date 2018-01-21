#include<stdio.h>
void main()
{
int v,j,i;
printf("enter the limit");
scanf("%d",&v);
printf("enter the numbers");
scanf("%d",&j);
for(i=1;i<=v;i++)
{
if(i%j==0)
{
printf("%d",i);
}
}
