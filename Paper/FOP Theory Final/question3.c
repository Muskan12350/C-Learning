#include<stdio.h>

float calculateCharges(float floatHours){
    int hours = (int) floatHours;
    if(hours>0.0 && hours<=3.0){
        return 2.00;
    }
    else if(hours>3.0 && hours<=24.0){
        int diff = (int) hours - 3.0;
        float charge = 2.00;
        for(int i=1; i<=diff;i++){
            charge += 0.50;
        }
        if(charge>10.0){
            charge = 10.00;
        }
        return charge;
    }
    else{
        printf("Invalid Input");
        return -1.0;
    }
}

int main(){
    float hour1=0.0, hour2=0.0, hour3=0.0;
    float charge1=0.0, charge2=0.0, charge3=0.0;

    printf("Enter hours for customer 1: ");
    scanf("%f", &hour1);
    printf("Enter hours for customer 2: ");
    scanf("%f", &hour2);
    printf("Enter hours for customer 3: ");
    scanf("%f", &hour3);

    charge1 = calculateCharges(hour1);
    charge2 = calculateCharges(hour2);
    charge3 = calculateCharges(hour3);

    printf("Car  \tHours\tCharge\n");
    printf("1    \t%.1f \t%.2f\n", hour1, charge1);
    printf("2    \t%.1f \t%.2f\n", hour2, charge2);
    printf("3    \t%.1f \t%.2f\n", hour3, charge3);
    printf("Total\t%.1f \t%.2f\n", hour1+hour2+hour3, charge1+charge2+charge3);

    return 0;
}
