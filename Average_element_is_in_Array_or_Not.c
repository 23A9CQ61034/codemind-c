#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    float avg;
    int sum=0,count=0;
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
        avg=sum/n;
        for(i=0;i<n;i++){
        if(avg==arr[i])
        count++;}
        {
            if(count>0)
            printf("True");
            else
            printf("False");
    }
}
