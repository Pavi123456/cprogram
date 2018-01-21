#include<stdio.h>
void main()
{
int v,i,c,k,y=0,j;
printf("enter the total number of ap series");
scanf("%d",&v);
printf("enter the first term and common difference");
scanf("%d%d",&k,&c);
j=k;
for(i=0;i<v;i++)
{
printf("%d",j);
y+=j;
j=j+c;
}
printf(""\n sum of the ap series till %d terms is %d\n",v,j);
}

