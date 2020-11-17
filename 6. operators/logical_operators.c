#include<stdio.h>

int main(){
    int x;

    // && operator (AND): Returns true if all the conditions are true
    x = 3<4 && 7>=10;       // false
    printf("%d\n", x);

    // || operator (OR): Returns true if one or more than one condition are true
    x = 3<4 || 7>=10;       // true
    printf("%d\n", x);

    // ! operator (NOT): Returns true if it is false and returns false if it is true
    x = !(3<4);               // false
    printf("%d\n", x);

    return 0;
}

/*
0 && 0 = 0  |   0 || 0 = 0  |   !0 = 1
0 && 1 = 0  |   0 || 1 = 1  |   !1 = 0
1 && 0 = 0  |   1 || 0 = 1  |
1 && 1 = 1  |   1 || 1 = 1  |
*/
