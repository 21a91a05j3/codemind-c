#include<stdio.h>
int main()
{
    int i,n,a[100],k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    k=a[0];
    for(i=0;i<n;i++)
    {
        if(k>a[i])
        {
            k=a[i];
        }
    }
    printf("%d",k);
}