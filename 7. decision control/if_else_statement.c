// Write a program to check whether a number is positive or not

#include<stdio.h>

int main(){
    // Take a number input from a user
    int x;
    printf("Enter Number: ");
    scanf("%d", &x);

    if(x>0){
        printf("%d is positive", x);
    }
    else{
        printf("%d is non-positive", x);
    }

    return 0;
}
