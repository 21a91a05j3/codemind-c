#include<stdio.h>
#include<math.h>
int main()
{
    double p,r,t,ci;
    scanf("%lf",&p);
    scanf("%lf",&r);
    scanf("%lf",&t);
    ci=p*pow((1+r/100),t);
    printf("%0.2f",ci);
    return 0;
}