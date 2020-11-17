#include<stdio.h>

int main(){
    int num1 = 10;
    int num2 = 3;

    printf("Add (+): %d\n", num1+num2);
    printf("Subtract (-): %d\n", num1-num2);
    printf("Multiply (*): %d\n", num1*num2);
    printf("Divide (/): %d\n", num1/num2);
    printf("Remainder (%): %d\n\n", num1%num2);

    /*
    Division of two integers returns a answer as integer.
    So, to get answer in points we need to convert it in float.
    */
    printf("Divide (/): %.2f\n", num1/num2);         // This will give 0.00

    // The above output returning 0.00 because we did not convert it to float
    printf("Divide (/): %.2f\n", (float) num1/num2);    // This will give correct answer

    return 0;
}
