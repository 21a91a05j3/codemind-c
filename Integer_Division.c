#include<stdio.h>
int main()
{
    long int n,a;
    scanf("%ld",&n);
    if(n>0)
    {
        printf("%ld",n/10);
    }
    else if(n<0)
    {
        if(n%10==0)
        {
            a=n/10;
            printf("%ld",a);
        }
        else
        {
            a=n/10;
            printf("%ld",a-1);
        }
    }
}