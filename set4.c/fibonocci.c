#include<stdio.h>
#include<conio.h>
void main()
{
int f=0;s=1;v,l,i;
printf("enter the limit");
scanf("%d"&l);
printf("%d%",f,s);
for(i=2;i<l;i++)
{
v=f+s;
f=s;
s=v;
printf("%d",v);
}
}
