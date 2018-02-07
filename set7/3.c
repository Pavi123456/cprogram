#include<stdio.h>
void main()
{
char a[100],i,count=0;
printf("enter the string");
scanf("%s",&a);
for(i=0;i!='/0';i++)
{
if(a[i]==" ")
{
count++;
}
}
printf("%d",count);
}

