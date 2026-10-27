#include<stdio.h>
int main()
{
 float P,T,R,product,SI ;
 printf("\nEnter the value of principal amount P:");
 scanf("%f",&P);
 printf("\nenter the value of rate of interest R:");
 scanf("%f",&R);
 printf("\nenter the value of time period T:");
 scanf("%f",&T);
 product=P*T*R;
 SI=product/100;
 printf("\n the simple intrest is %f",SI);
}