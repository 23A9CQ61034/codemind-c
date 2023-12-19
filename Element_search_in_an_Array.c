#include<stdio.h>//searching number
int main()
{
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int a,flag=0;
    scanf("%d",&a);
	for( i=0;i<n;i++)
	{
		if(arr[i]==a)
		{
			flag=1;
			break;
		}
    }
  
		if(flag==0)
		{
			printf("False");
		}
		else
		{
			printf("True");
		}
	
}