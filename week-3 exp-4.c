#include <stdio.h>
#include <math.h>
int main()
{
    float d,t,s;
    printf("Enter speed s: ");
    scanf("%f",&s);
    printf("enter time t:");
    scanf("%f",&t);
    d=s*t;
    printf("distance= %.2f", d);
}