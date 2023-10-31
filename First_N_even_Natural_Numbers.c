#include<stdio.h>
int main()
{
	int i,a;
	scanf("%d",&a);
	for(i=2*a;i>=2;i--)
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
	}
}