#include<stdio.h>
int main()
{
    int  n,i,c=0,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            c=c+a[i];
        }
    }
    printf("%d",c);
}