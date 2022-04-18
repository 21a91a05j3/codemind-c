#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,a,res;
    scanf("%d%d%d",&x,&y,&m);
    a=pow(x,y);
    res=a%m;
    printf("%d",res);
    return 0;
}