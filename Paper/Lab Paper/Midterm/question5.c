#include<stdio.h>

int main(){
    int number;
    printf("Enter Number: ");
    scanf("%d", &number);

    int unit, tens;
    tens = number/10;
    unit = number%10;

    printf("Before Swapping: \n");
    printf("Unit = %d\n", unit);
    printf("Tens = %d\n", tens);

    printf("After Swapping: \n");
    int temp = unit;
    unit = tens;
    tens = temp;

    printf("Unit = %d\n", unit);
    printf("Tens = %d\n", tens);

    return 0;
}
