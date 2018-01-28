#include <stdio.h>

int main(void) {
	int n,c,rem;
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		c++;
		n=n/10;
	}
	printf("%d",c);
	return 0;
}
