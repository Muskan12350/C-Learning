#include<stdio.h>

int main(){

    for(int i=1; i<=6; i++){
        for(int j=1; j<=i*2; j++){
            if(i%2==0){
                if(j%2==0){
                    printf("%d ", j);
                }
            }
            else{
                if(j%2!=0){
                    printf("%d ", j);
                }
            }
        }
        printf("\n");
    }

    return 0;
}
