#include <stdio.h>

int main(void) {
	int n;
	printf("enter the number:");
	scanf("%d\n",&n);
	while(num%2==0)
	{
		n=n/2;
		if((n%2)==1)
		break;
	}
	printf("the ans is %d",n);
	return 0;
  }
