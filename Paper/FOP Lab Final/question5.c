#include<stdio.h>

void getArea(int width, int height){
    int area = width * height;
    printf("Area is %d.\n", area);
}

void getSurfaceArea(int length, int width, int height){
    int surfaceArea = (2*length*width) + (2*length*height) + (2*height*width);
    printf("Surface Area is %d.\n", surfaceArea);
}

void getVolume(int length, int width, int height){
    int volume = length * width * height;
    printf("Volume is %d.\n", volume);
}

int main(){

    int choice = 0;
    int length =0, width = 0, height = 0;

    printf("Select shape type\n");
    printf("1) 2-D Shape\n");
    printf("2) 3-D Shape\n");
    scanf("%d", &choice);

    if(choice==1){
        printf("Enter width: ");
        scanf("%d", &width);
        printf("Enter height: ");
        scanf("%d", &height);
        getArea(width, height);
    }
    else if(choice==2){
        printf("Enter length: ");
        scanf("%d", &length);
        printf("Enter width: ");
        scanf("%d", &width);
        printf("Enter height: ");
        scanf("%d", &height);
        getSurfaceArea(length, width, height);
        getVolume(length, width, height);
    }
    else{
        printf("Invalid Choice");
    }

    return 0;
}
