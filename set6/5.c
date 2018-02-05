#include<stdio.h>
int main()
{
int v;
printf("Enter the number:");
scanf("%d",&v);
if(v%2==0)
{
printf("%d",v);
}
else
{
v=v-1;
printf("%d",v);
}
}
