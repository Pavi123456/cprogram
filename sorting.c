#include<stdio.h>
void main()
{
int a[20];
int i,j,temp,size;
printf("enter the size array");
scanf("%d",&size);
printf("enter the elements in array");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
for(i=o;i<size;i++)
{
for(j=i+1;j<size;j++)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
printf("the sorted array is");
for(i=0;i<size;i++)
{
printf("%d",a[i])
}
}

