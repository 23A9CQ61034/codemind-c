#include<stdio.h> 
int main()
{
    int i,a,r;
    scanf("%d%d",&a,&r);
    for(i=1;i<=r;i++)
    printf("%d x %d = %d
",a,i,a*i);
}