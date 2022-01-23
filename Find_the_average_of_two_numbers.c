#include<stdio.h>
int main()
{
    int N,M;
    float a;
    scanf("%d %d",&N,&M);
    a=(N+M)*0.5;
    if(1<=N<=1000 || 1<=M<=1000)
    {
        printf("%.4f",a);
    }
}