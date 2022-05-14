#include<stdio.h>
int main()
{
    int n,b=0,a[100],k=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int j,c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(c==1)
        {
            if(b<a[i])
            {
                b=a[i];
            }
            k++;
        }
    }
    if(k>0)
    {
        printf("%d",b);
    }
    else
    {
        printf("-1");
    }
}