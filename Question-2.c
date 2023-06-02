//Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a%3==0)
        printf("%d is divisible by 3\n",a);
    else if(a%7==0)
        printf("%d is divisible by 7",a);
    else
        printf("%d is Non-divisible by 7 or 3",a);
    getch();

}
