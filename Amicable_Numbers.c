#include<stdio.h>
int main()
{
    int n,m,i,s=0,c=0;
    scanf("%d%d",&n,&m);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            s=s+i;
        }
    }
    for(i=1;i<m;i++)
    {
        if(m%i==0)
        {
            c=c+i;
        }
    }
    if(c==n && s==m)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}