#include<stdio.h>

int main(){
    // Take age input from a user
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if(age>18){
        printf("You are above 18");
    }

    return 0;
}
