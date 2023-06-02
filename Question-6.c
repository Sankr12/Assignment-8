//Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.
#include<stdio.h>
#include<conio.h>
int main()
{
    char a;
    printf("Enter a number, Digit or Special Character: ");
    scanf("%c",&a);
    if(a>='A' && a<='Z')
        printf("Given character is an uppercase alphabet\n");
    else if(a>='a' && a<='z')
        printf("Given character is an lowercase alphabet\n");
    else if(a>='0' && a<='9')
        printf("Given character is a digit\n");
    else
        printf("Given character is special");
    getch();
}
