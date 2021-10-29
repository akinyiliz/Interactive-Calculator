/*
   PROJECT:     INTERACTIVE CALCULATOR
   AUTHOR:      ELIZABETH AKINYI ODHIAMBO
   DATE:        29 OCTOBER 2021
   COMPILER:    GNC GCC
   LANGUAGE:    C99
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variable Declaration
    char operator_word;
    int value1, value2;


    printf("\tInteractive Calculator\n");
    printf("Enter the Operator (+, -, *, /): ");
    scanf("%c", &operator_word);
    printf("Enter the value: ");
    scanf("%d", &value1);
    printf("Enter the value: ");
    scanf("%d", &value2);

     //Computations
switch(operator_word)
{
 case '+':
     printf("%d + %d = %d", value1, value2,(value1+value2));
     break;

 case '*':
     printf("%d * %d = %d", value1, value2,(value1*value2));
     break;

 case '-':
     printf("%d - %d = %d", value1, value2,(value1-value2));
     break;

case '/':
    printf("%d / %d = %d", value1, value2,(value1/value2));
    break;

default:
    printf("Invalid Operator");
}

    return 0;

}
