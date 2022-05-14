#include<stdio.h>
int main()
{
    int i,j,n,m,a[100],s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int c=0;
        for(j=1;j<=a[i];j++)
        {
            if(j*j==a[i])
            {
                c++;
            }
        }
        if(c>0)
        {
            s=s+a[i];
        }
    }
    printf("%d",s);
}