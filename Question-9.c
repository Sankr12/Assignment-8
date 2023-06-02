//Write a program to find the nature of roots of a quadratic equation.
#include <stdio.h>
#include <conio.h>
int main()
{
    float a,b,c,d;
    printf("Enter the coefficients of the quadratic equation (a, b, c): ");
    scanf("%f %f %f", &a, &b, &c);
    d = b*b-4*a*c;
    if (d > 0)
        printf("Roots are real and different\n");
    else if (d == 0)
        printf("Roots are real and same\n");
    else
        printf("Roots are complex");
    getch();
}
