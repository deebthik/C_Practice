#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letter;
    float num1, num2;
    printf("Welcome to my calculator made by me, Deebthik!!!\n\nWhat operation do you want to do?\n\na)Addition\nb)Subtraction\nc)Multiplication\nd)Division\n\n");
    scanf("%c", &letter);
    printf("Please enter a first number:");
    scanf("%f", &num1);
    printf("Please enter a second number:");
    scanf("%f", &num2);
    if (letter == 'a')
    printf("%.2f+%.2f=%.2f", num1, num2, num1 + num2);
    else if (letter == 'b')
    printf("%.2f-%.2f=%.2f", num1, num2, num1 - num2);
    else if (letter == 'c')
    printf("%.2fx%.2f=%.2f", num1, num2, num1 * num2);
    else if (letter == 'd')
    printf("%.2f/%.2f=%.2f", num1, num2, num1 / num2);
    else
    printf("You have to enter either a,b,c or d for a calculation");
    system("pause");
    return 0;
}
