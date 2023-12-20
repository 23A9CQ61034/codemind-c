#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int num=64+n;
    for(i=1;i<=n;i++)
    {
        char ch=(char)num;
        for(j=1;j<=i;j++)
        {
            printf("%c ",ch);
        }
        num--;
        printf("
");
    }
}