#include<stdio.h>
int main()
{
    int i,N,R;
    scanf("%d %d",&N,&R);
    for(i=0;i<=R;i++)
    {
        if(i%2!=0)
        {
            printf("%d x %d = %d
",N,i,N*i);
        }
    }
    return 0;
}