#include<stdio.h>
int main(void)
{
	int l,b,h,area,volume;
	printf("enter the number");
	scanf("%d%d%d",&l,&b,&h);
	area=l*b;
	volume=l*b*h;
	printf("%d%d\n",area,volume);
	return 0;
}
