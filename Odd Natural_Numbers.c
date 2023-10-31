#include<stdio.h>
int main()
{
    int i,b;
    scanf("%d",&b);
    for(i=1;i<=b;i++)
    {
        if(i%2 == 1)
        {
            printf("%d ",i);
        }
    }
}