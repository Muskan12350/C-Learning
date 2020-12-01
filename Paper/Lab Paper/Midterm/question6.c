#include<stdio.h>

int main(){
    int age1, age2, age3;

    printf("Enter Person 1 Value: ");
    scanf("%d", &age1);
    printf("Enter Person 1 Value: ");
    scanf("%d", &age2);
    printf("Enter Person 1 Value: ");
    scanf("%d", &age3);

    if(age1>age2 && age1>age3){
        printf("The eldest of three is person 1 of age %d", age1);
    }
    else if(age2>age1 && age2>age3){
        printf("The eldest of three is person 2 of age %d", age2);
    }
    else if(age3>age1 && age3>age2){
        printf("The eldest of three is person 3 of age %d", age3);
    }

    return 0;
}
