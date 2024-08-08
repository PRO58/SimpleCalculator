#include <stdio.h>
#include <stdlib.h>

/*Building a simple calculator
Variables, if statements

variables: Double num1, Double num2 and

*/


int main()
{
    double num1;
    double num2;
    char op;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter operation: ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    if(op == '*'){
        printf("%f", num1 * num2);

    }
    if(op == '+'){
        printf("%f", num1 + num2);

    }
    if(op == '-'){
        printf("%f", num1 - num2);

    }
    if(op == '/'){
        printf("%f", num1 / num2);

    }



}
