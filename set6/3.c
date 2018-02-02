#include<iostream.h>
#include<conio.h>
int main()
{
int n,s,t;
cout<<"enter num";
cin>>n;
while(n!=0)
{t=n%10;
s=s+t;
n=n/10;
}
cout<<"sum is"<<s;
getch();
return 0;
}
