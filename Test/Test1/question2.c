#include<stdio.h>

int main(){

    int number;
    printf("Enter any number: ");
    scanf("%d", &number);

    while(number<=500){
        number = number * 2;
        printf("%d\n", number);
    }

    return 0;
}
