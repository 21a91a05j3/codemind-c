#include<stdio.h>
int main()
{
    int i,j,n,m,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int s=0;
        if(n%i==0)
        {
            //int s=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    s++;
                }
            }
            if(s!=2)
            {
                c++;
            }
            //printf("%d",s);
        }
        /*printf("%d",s);
        if(s!=2 && s<2)
        {
            c++;
        }*/
    }
    printf("%d",c);
}