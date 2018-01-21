#include<stdio.h>
void main()
{
int v,j,i,rem,temp;
int num=0;
printf("enter the values");
scanf("%d%d",&v,&j);
printf("armstrong between two intervals");
for(i=v+1;i<j;++i)
{
temp=i;
while(temp!=0)
{
rem=(temp%10);
num+=rem*rem*rem;
temp/=10;
}
}
if(i==num)
{
printf("%d",i);
}
}
