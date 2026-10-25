#include<stdio.h>
#include<stdlib.h>

int main()
{ 
  float a,b,c,sum,avg;
  printf("\n enter the value of a,b,c");
  scanf("%f%f%f",&a,&b,&c);
  sum=a+b+c;
  avg=sum/3;
  printf("\nthe average of three numbers is:%.2f",avg);
}
