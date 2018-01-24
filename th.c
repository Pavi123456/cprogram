#include<stdio.h>
int main()
{
int hour,v1,hour2,v2,th,tm;
printf("enter the details");
scanf("%d %d %d %d",&hour1,&v1,&hour2,&v2);
th=hour1-hour2;
tm=v1-v2;
printf("%d %d",th,tm);
return 0;
}
