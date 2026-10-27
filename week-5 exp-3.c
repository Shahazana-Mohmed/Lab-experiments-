#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,d,R1,R2;
    printf("Enter a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);
    d = b*b-4*a*c;
    if (d > 0)
        R1 = (-b + sqrt(d)) / (2 * a);
        R2 = (-b - sqrt(d)) / (2 * a);
       printf("Roots are %.2f and %.2f",R1,R2);
    else if (d == 0)
        R1 = -b / (2 * a);
        printf("Roots are equal: %.2f", R1);
    else
       printf("Roots are imaginary");
}