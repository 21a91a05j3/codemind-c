#include<stdio.h>
int main()
{
    int sum=0,i;
    char str[100];
    scanf("%[^/n]s",&str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='0'&&str[i]<='9')
        {
            sum=sum+str[i]-'0';
        }
    }
    printf("%d",sum);
    return 0;
}