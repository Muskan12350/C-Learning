#include<stdio.h>

int addition(int num1, int num2){
    return num1+num2;
}

int subtraction(int num1, int num2){
    return num1-num2;
}

int multiplication(int num1, int num2){
    return num1*num2;
}

int division(int num1, int num2){
    return num1/num2;
}

int main(){
    int num1 = 10;
    int num2 = 5;

    printf("Addition is: %d\n", addition(num1,num2));
    printf("Subtraction is: %d\n", subtraction(num1,num2));
    printf("Multiplication is: %d\n", multiplication(num1,num2));
    printf("Division is: %d\n", division(num1,num2));

    return 0;
}
