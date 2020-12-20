#include<stdio.h>

int main(){
    // Odd Numbers
    for(int i=0; i<=20; i++){
        if(i%2==0){
            continue;
        }
        printf("%d\n", i);
    }

    // Even Numbers
    for(int i=0; i<=20; i++){
        if(i%2!=0){
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}
