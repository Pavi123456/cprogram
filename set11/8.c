#include <stdio.h>
 
int main(void) {
	int a,b,c,d=0,j;
	scanf("%d%d%d",&a,&b,&c);
	for(j=0;j<b;j++)
	{
		a=a+c;
		d=d+a;
	}
	printf("%d",a);
	return 0;
}
