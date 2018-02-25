#include <stdio.h>
int main(void) {
	int n,r;
	printf("enter the number");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		if(r%2!=0||r==1)
		printf("%d",r);
	}
	n=n/10;
	return 0;
}
