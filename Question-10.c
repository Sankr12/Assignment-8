/*Write a C program to input marks of five subjects Physics, Chemistry, Biology,
Mathematics and Computer. Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,e;
    float f;
    printf("Enter the Physics Marks: ");
    scanf("%d",&a);
    printf("Enter the Chemistry Marks: ");
    scanf("%d",&b);
    printf("Enter the Biology Marks: ");
    scanf("%d",&c);
    printf("Enter the Mathematis Marks: ");
    scanf("%d",&d);
    printf("Enter the Computer Marks: ");
    scanf("%d",&e);
    f = a+b+c+d+e;
    f = f/5;
    printf("%f%\n",f);
    if(f>=90)
        printf("Grade A");
    else if(f>=80)
        printf("Grade B");
    else if(f>=70)
        printf("Grade C");
    else if(f>=60)
        printf("Grade D");
    else if(f>=40)
        printf("Grade E");
    else
        printf("Grade F");
    getch();
}
