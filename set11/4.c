#include <stdio.h>
#include<math.h>

int main(void) {
	int n,exponent,v=1,j;
	scanf("%d%d",&n,&exponent);
	for(j=1;j<=exponent;j++)
	{
		v=v*n;
	}
	printf("%d",v);
	return 0;
}
