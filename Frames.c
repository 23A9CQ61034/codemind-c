#include<stdio.h>
int main()
{
    int n,m,x,cost,perimeter;
    scanf("%d%d%d%d",&n,&m,&x);
    perimeter=2*(n+m);
    cost=perimeter*x;
    printf("%d",cost);
}