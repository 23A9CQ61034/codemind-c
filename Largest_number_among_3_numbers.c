#include<stdio.h>
int main()
{
    int a,b,c,max;
    scanf("%d%d%d",&a,&b,&c);
    max=(a>b && a>c) ? a: (b>c && b>a) ? b : c;
    printf("%d",max);
}