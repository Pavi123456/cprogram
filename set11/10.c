#include<stdio.h>

int main(void) {
	int no,sum;
	printf("enter the limit:\n");
	scanf("%d",&no);
	sum=no*(no+1)/2;
	printf("the sum is:%d",sum);
	return 0;
}
