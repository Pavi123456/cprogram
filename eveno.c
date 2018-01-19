#include<stdio.h>
void main()
{
int v,j,i;
printf("enter the numbers");
scanf("%d%d",&v,&j);
for(i=v;i<j;i+1)
{
if((i%2)!=0)
{
printf("%d",&i);
}
}
}
