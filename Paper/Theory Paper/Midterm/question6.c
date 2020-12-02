#include<stdio.h>

int main(){
    int percentage;

    printf("Enter percentage: ");
    scanf("%d", &percentage);

    if(percentage<=100 && percentage>=80){
        printf("Grade: Distinction");
    }
    else if(percentage<80 && percentage>=60){
        printf("Grade: First Division");
    }
    else if(percentage<60 && percentage>=50){
        printf("Grade: Second Division");
    }
    else if(percentage<50 && percentage>=40){
        printf("Grade: Pass");
    }
    else{
        printf("Fail");
    }

    return 0;
}
