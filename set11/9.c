#include <stdio.h>

int main(void) {
     int i,no,min, a[67];
     scanf("%d",&no);
     for(i=0;i<no;i++)
     {
     	scanf("%d",&a[i]);
     }
     min=a[0];
     for(i=0;i<no;i++)
     {
     if(min>a[i])
     {
     min=a[i];
     }}
     printf("%d",min);
	return 0;
}
