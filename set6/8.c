#include<stdio.h>
void main()
{
int v=5;j=6,t;
t=v;
v=j;
j=t;
printf("%d%d",&v,&j);
}
