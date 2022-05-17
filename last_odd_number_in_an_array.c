#include<stdio.h>
int main()
{
    int n,a[100],i,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            m=a[i];
        }
    }
    printf("%d",m);
}