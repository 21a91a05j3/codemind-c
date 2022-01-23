#include<stdio.h>
int main()
{
    int l,b,w,c,a,t;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    a=(l+2*w)*(b+2*w)-l*b;
    t=a*c;
    printf("%d",t);
}