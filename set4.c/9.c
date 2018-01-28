#include<stdio.h>
int main()
{
    int v[20]={1,7,8,9,5,24,67,89,18,100},i,max;
    max=v[0];
    for(i=0;i<=10;i++)
    {
    
        if(v[i]>max)
        {
            max=v[i];
        }
    }
        printf("the max no is %d",v[i]);
        return 0;
}
