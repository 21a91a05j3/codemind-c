#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0 && n%(i+1)==0)
        {
            if(i*(i+1)==n)
            {
                c++;
            }
        }
    }
    if(c>=1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}