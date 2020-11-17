/*
We create constants when we never want to change the value of any variable. Constants can be created by two ways
1) using #define
2) using const keyword
Objective: Create constant in both ways
*/

#include<stdio.h>

#define PI 3.14                 // first way to create constant

int main(){
    const float GRAVITY = 9.8;      // second way to create constant
    const VAR = 4;
    // a = 5;        // This will give error

    printf("%.2f \n %.1f \n %d", PI, GRAVITY, VAR);

    return 0;
}
