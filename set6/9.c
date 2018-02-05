#include<stdio.h>
int main()
{
int v=50,j=60;
printf("value of v=%d and j=%d before swapping",v,j);
v=v^j;
j=v^j;
v=v^j;
printf("value of v=%d and j=%d dafter swapping",v,j);
return 0;
}
