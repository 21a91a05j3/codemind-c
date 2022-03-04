#include<stdio.h>
int main()
{
    int n,d,large=0;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        n=n/10;
        
    
    if(d>large)
    {
        large=d;
    }
    }
    printf("%d",large);
}