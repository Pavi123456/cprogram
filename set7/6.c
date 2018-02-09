#include <stdio.h>
int main(void) {
    int v,j,sub;
    scanf("%d %d",&v,&j);
    sub=v-j;
    printf("%d",sub);
    if(sub%2==0)
    printf("the result is an even number");
    else
    printf("the result is an odd number");
	return 0;
}
