#include<stdio.h>

int main(){
    printf("Options available are: \n");
    printf("1. Circle\n");
    printf("2. Square\n");
    printf("3. Rectangle\n");
    printf("4. Exit\n");

    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice==1){
        int radius;
        printf("Shape is Circle\n");
        printf("Enter radius in meters: ");
        scanf("%d", &radius);

        printf("Area of circle is %.2f m^2\n", (float)(3.14*radius*radius) );
        printf("Perimeter of circle is %.2fm\n", (float)(2*3.14*radius));
    }
    else if(choice==2){
        int length;
        printf("Shape is Square\n");
        printf("Enter length in meters: ");
        scanf("%d", &length);

        printf("Area of square is %d m^2\n", (length*length));
        printf("Perimeter of Square is %dm\n", (4*length));
    }
    else if(choice==3){
        printf("Shape is Rectangle\n");
        int length;
        int breadth;
        printf("Enter length in meters: ");
        scanf("%d", length);
        printf("Enter breadth in meters: ");
        scanf("%d", breadth);
        
		printf("Area of rectangle is %d m^2\n", (length*breadth));
        printf("Perimeter of rectangle is %dm\n", (2*(length+breadth)));
    }
    else if(choice==4){
		exit(0);
    }

    return 0;
}
