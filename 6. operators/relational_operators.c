#include<stdio.h>

int main(){
    int x;

    // 1 means true and 0 means false

    // Greater than >
    x = 6>8;        // false
    printf("%d\n", x);

    // Less than <
    x = 6<8;        // true
    printf("%d\n", x);

    // Greater than or equal to >=
    x = 4>=10;      // false
    printf("%d\n", x);

    // Less than or equal to <=
    x = 5<=8;       // true
    printf("%d\n", x);

    // Equal to ==
    x = 2==4;       // false
    printf("%d\n", x);

    // Not Equal to !=
    x = 5!=9;       // true
    printf("%d\n", x);

    return 0;
}
