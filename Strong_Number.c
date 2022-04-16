#include<stdio.h>
int isfac(int d)
{
    int i,fac=1;
    for(i=1;i<=d;i++)
    {
        fac=fac*i;
    }
    return fac;
}
int main()
{
    int n,d,temp,sum=0;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        d=n%10;
        sum=sum+isfac(d);
        n=n/10;
    }
    n=temp;
    if(sum==n)
    {
        printf("The number %d is a strong number",n);
    }
    else
    {
        printf("The number %d is not a strong number",n);
    }
}