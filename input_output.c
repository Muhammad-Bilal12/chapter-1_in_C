#include <stdio.h>

int main()
{

    //! OUTPUT
    // printf("Hello C");
    // printf("Hello C");
    // printf("Hello C");
    // printf("Hello C");

    //* print in New line

    // printf("Hello C\n");
    // printf("My name is Muhammad Bilal\n");

    // int age = 16;
    // float time = 1.30;
    // char letter_b = 'b';

    //* output with variables values
    // ! format specifier which define the print value is belong
    // %d -> integer
    // %f -> float
    // %c -> char
    // %s -> String
    // printf("%d\n", age);
    // printf("%f\n", time);
    // printf("%c\n", letter_b);

    // ! INPUT
    // & adress of
    int a, b;

    printf("enter the value of a :  ");
    scanf("%d", &a);
    printf("enter the value of b :  ");
    scanf("%d", &b);

    printf("the value of a and b is %d and %d", a, b);

    return 0;
}