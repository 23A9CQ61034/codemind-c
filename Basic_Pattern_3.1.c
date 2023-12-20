#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    int star=n;
    for(i=n;i>=1;i--)
    {
        for(k=1;k>=n;k--)
        {
            printf(" ");
        }
        for(j=1;j<=star;j++)
        {
            printf("* ");
        }
        star--;
        printf("
");
    }
}