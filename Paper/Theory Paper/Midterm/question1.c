#include<stdio.h>

int main(){
    int num, fact=1;

    printf("Enter number: ");
    scanf("%d", &num);

    if(num>0){
        for(int i=num; i>0;i--){
            fact=fact*i;
        }
        printf("Factorial of given number is %d", fact);
    }

    return 0;
}
