#include<stdio.h>

int main(){
    int max,min;

    int arr[8] = {4,8,6,16,9,2,11,15};

    max = min = arr[0];

    for(int i=0; i<8; i++){
        if(arr[i]>max)
            max = arr[i];
        if(arr[i]<min)
            min = arr[i];
    }

    printf("Maximum number in array is %d \n", max);
    printf("Minimum number in array is %d ", min);

    return 0;
}
