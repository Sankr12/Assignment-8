//Write a program to check whether a given number is divisible by 3 and divisible by 2.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a%3==0)
        if(a%2==0)
            printf("%d is divisible by 2 and 3",a);
    else
        printf("%d is Non-divisible by 2 and 3",a);
    getch();

}
