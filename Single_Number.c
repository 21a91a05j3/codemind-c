#include<stdio.h>
int main()
{
    int n,arr[1000],j,i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
    
            if(arr[i]==arr[j] && i!=j)
            {
                c++;
                break;
            }
            
        }
       if(c==0)
       {
           printf("%d ",arr[i]);
       }
    }
}