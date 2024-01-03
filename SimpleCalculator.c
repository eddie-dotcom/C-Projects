/*this is a simple calculator that takes two inputs from the user and perform arithmetic operations per the user's instruction
@ Author 
     * Created by : Edmond Kumah (eddie-dotcom)
     * 
     * Date : 02/01/2024
     
    */
#include<stdio.h>

int main(){

// Declare variables
    char operator;
    double num1, num2;
    double result;

//Take inputs from the user
    printf("Enter the operator [+,-,*,/]: ");
    scanf("%c", &operator);
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    
//Use switch to perform calculations based on the operator
    switch (operator) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if(num2 != 0.0)
            result = num1 / num2;
        
         else {
            printf("Maths error! Division by 0");
            return 1; /*The return 1 statements are used to exit the 
                program with an error code if there's an error */
            }
        break;
    
    default:
    printf("Enter Valid operator!");
    return 1; // Exit with an error code if the user enters an invalid operator
    }
 
 // Print the result only if the division by zero condition is not met
    printf("Result: %lf\n", result);

    return 0;
}
