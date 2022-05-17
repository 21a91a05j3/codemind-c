#include<stdio.h>
int main()
{
    int i,n,t,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    t=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>t)
        
        {
            t=a[i];
        }
    }
    printf("%d",t);
}