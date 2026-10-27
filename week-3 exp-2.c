#include <stdio.h>
#include <math.h>
int main()
{
    float P,R,T,CI;
    printf("Enter principal amount P: ");
    scanf("%f",&P);
    printf("enter rate of interest R:");
    scanf("%f",&R);
    printf("enter time period T:");
    scanf("%f",&T);
    CI = P * pow(1 + R / 100, T) - P;
    printf("Compound Interest = %.2f", CI);
}