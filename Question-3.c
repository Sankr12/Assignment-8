//Write a program to check whether a given number is positive, negative or zero.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a>0)
        printf("%d is Positive\n",a);
    else
        if(a==0)
            printf("Your number is Zero");
        else
            printf("%d is Negative",a);
    getch();
}
