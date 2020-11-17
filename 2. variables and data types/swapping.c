#include<stdio.h>

int main(){
    int a = 5;
    int b = 7;
    int c;

    printf("Original Values:\n");
    printf("a = %d\n", a);
    printf("b = %d\n\n", b);

    // swapping a and b
    c = a;
    a = b;
    b = c;

    printf("After Swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
