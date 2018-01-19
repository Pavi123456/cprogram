#include<stdio.h>
void main()
{
int a,f;
printf("enter the value");
scanf("%d",&a);
f=factorial(a);
printf("factorial is %d",f);
}
int factorial(int n)
{
if(n==0)
return 1;
else
return n*factorial(n-1);
}
