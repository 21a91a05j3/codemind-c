#include<stdio.h>
int sum(int n)
{
    int d,s=0;
    while(n)
    {
        d=n%10;
        n=n/10;
        s=s+d;
    }
    return s;
}
int main()
{
    int n,s;
    scanf("%d",&n);
    s=n;
    while(1)
    {
        if(s<10)
        {
            printf("%d",s);
            break;
        }
        else
    {
        s=sum(n);
    }
    n=s;
    }
}