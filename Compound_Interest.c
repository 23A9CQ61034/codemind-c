#include<stdio.h>
#include<math.h>
int main()
{
    float Ci,P,R,T;
    scanf("%f%f%f",&P,&R,&T);
    Ci=(P*pow((1+R/100),T)-P);
    printf("%.2f",Ci);
}