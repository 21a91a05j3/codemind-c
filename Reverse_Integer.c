#include<stdio.h>
int main()
{
int n,d,temp,reverse=0;
scanf("%d",&n);
temp=n;
while(n)
{
    d=n%10;
    n=n/10;
    reverse=reverse*10+d;
}
printf("%d",reverse);
}