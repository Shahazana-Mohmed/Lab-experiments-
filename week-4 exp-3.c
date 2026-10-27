#include <stdio.h>
int main()
{
    int a,b,c,d,e,tot;
    float avg;
    printf("enter the marks of 5 sub of a,b,c,d,e:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    tot=a+b+c+d+e;
    avg=tot/5.0;
    printf("\n average of student is%f",avg);
  }      