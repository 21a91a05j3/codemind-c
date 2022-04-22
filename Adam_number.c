#include<stdio.h>
int main()
{
    int rem,n,r=0,s,k,t=0,x;
    scanf("%d",&n);
    s=n*n;
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        r=r*10+rem;
    }
    k=r*r;
    while(k>0)
    {
        x=k%10;
        k=k/10;
        t=t*10+x;
    }
    if(t==s)
    printf("True");
    else
    printf("False");
    return 0;
}