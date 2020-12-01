#include <stdio.h>

int main(){
    int num1=8, num2=4;

    char myOperator;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &myOperator);

    switch(myOperator){
        case '+':
            printf("Result: %d",num1+num2);
            break;

        case '-':
            printf("Result: %d",num1-num2);
            break;

        case '*':
            printf("Result: %d",num1*num2);
            break;

        case '/':
            printf("Result: %d",num1/num2);
            break;

        // operator doesn't match any case constant +, -, *, /
        default:
            printf("Error! operator is not correct");
    }
}
