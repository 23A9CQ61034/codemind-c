#include<stdio.h>//max
int main()
{
	int a,i,sum=0;
	scanf("%d",&a);
	int arr[a];
	for( i=0; i<a; i++)
	{
		scanf("%d",&arr[i]);
	    sum+=arr[i];
	}
	for(i=0;i<a;i++)
	{
	    printf("%d",sum);
	    break;
	}
}