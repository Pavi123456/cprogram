#include <stdio.h>
#define MAX_SIZE 100
int main()
{
char str[MAX_SIZE];
int dig=0, others=0, i;
printf("Enter any string");
scanf("%c",&s);
while(str[i]!='\0')
{
if(str[i]>='0' && str[i]<='9')
{
dig++;
}
else
{
others++;
}
i++;
}
printf("Dig = %d\n", dig);
return 0;
}
