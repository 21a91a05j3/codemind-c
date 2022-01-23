#include<stdio.h>
int main()
{
    int a,b,n;
    scanf("%d",&a);
    scanf("%d",&b);
    n=a%b;
    if(1<=n<=10000)
    {
        printf("%d",n);
    }
}