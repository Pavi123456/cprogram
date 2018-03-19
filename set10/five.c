#include "stdio.h"

int main(void) 
{
 int v,t,r,f;
 printf("enter the principle amount,no.of years,rate of interest\n");
 scanf("%d%d%d",&v,&t,&r);
f=(v*t*r)/100;
printf("%d",f);
}
