#include<stdio.h>

int main(){
    // Declare two integer variables
    int num1, num2;

    // Take first number input
    printf("Enter first number: ");
    scanf("%d", &num1);

    // Take second number input
    printf("Enter Second number: ");
    scanf("%d", &num2);

    // add two numbers in a new variable
    int sum = num1+num2;

    // Print the sum of two numbers
    printf("The sum of %d and %d is %d.", num1, num2, sum);

    return 0;
}
