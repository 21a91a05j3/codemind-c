#include<stdio.h>
int main()
{
	int a[20],i,key,n,flag=0;
	
	scanf("%d",&n);

	for(i=0;i<n;i++)
	scanf("%d",&a[i]);

	scanf("%d",&key);
	for(i=0;i<n;++i)
	{
		if(a[i]==key)
		{
			flag=1;
			break;
		}
	}
	if(flag!=0)
	printf("True");
	else
	printf("False");
	return 0;
}  