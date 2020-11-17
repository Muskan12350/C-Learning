#include<stdio.h>

int main(){
    // Increment Operator
    int x = 5;
    ++x;                // x=x+1 - Pre-Increment
    printf("%d\n", x);
    x++;                // x=x+1 - Post-Increment
    printf("%d\n", x);

    // Decrement Operator
    int y = 5;
    --y;                // y=y-1 - Pre-Decrement
    printf("%d\n", y);
    y--;                // y=y-1 - Post-Decrement
    printf("%d\n\n", y);

    int a=3, b;
    int c=3, d;
    b=++a;
    d=c++;
    printf("%d\n%d\n%d\n\n", b,d,c);

    int w=5, m=5;
    printf("%d\n%d\n\n", ++w, m++);
    printf("%d", m);

    return 0;
}
