#include<stdio.h>

int getCelsius(int fahrenheit){
    int celsius = ((fahrenheit-32)*5)/9;
    return celsius;
}

int getFahrenheit(int celsius){
 int fahrenheit = ((celsius*9)/5)+32;
 return fahrenheit;
}

int main(){
    printf("\tCelsius\t\tFahrenheit\n");
    for(int i=0; i<=100;i++){
        printf("\t%d\t\t%d\n", i, getFahrenheit(i));
    }

    printf("\n");

    printf("\tFahrenheit\tCelsius\n");
    for(int i=32; i<=212;i++){
        printf("\t%d\t\t%d\n", i, getCelsius(i));
    }

    return 0;
}
