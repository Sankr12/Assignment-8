//Write a program which takes the month number as an input and display number of days in that month.
//Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter a month number: ");
    scanf("%d",&a);
    if(a==2)
        printf("28 Days\n");
    else if(a>=8 && a%2==0)
        printf("31 Days");
    else if(a<8 && a%2!=0)
        printf("31 Days");
    else
        printf("30 Days");
    getch();
}
