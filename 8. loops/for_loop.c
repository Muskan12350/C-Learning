#include<stdio.h>

int main(){

    // print 10 times hello world
    for(int i=1; i<=10; i++){
        printf("Hello World\n");
    }

    // print numbers from 1 to 10
    for(int i=1; i<=10; i++){
        printf("%d\n", i);
    }

    // print numbers from 10 to 1
    for(int i=10; i>=1; i--){
        printf("%d\n", i);
    }

    // print even numbers from 1 to 10
    for(int i=2; i<=10; i=i+2){
        printf("%d\n", i);
    }

    // print odd numbers from 1 to 10
    for(int i=1; i<=10; i=i+2){
        printf("%d\n", i);
    }

    return 0;
}

/* Understanding
 for(int i=1; i<=10; i=i+2){
        printf("Hello World\n");
 }
 for(int i=10; i>=1; i--){
        printf("Hello World\n");
 }
*/
