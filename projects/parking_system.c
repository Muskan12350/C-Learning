#include<stdio.h>
#include<stdlib.h>

// function to print developer details
void showDeveloperDetail(){
    printf("\n");
    printf("\t\t***********************************************************************************\n");
    printf("\t\t***********************************************************************************\n");
    printf("\t\t***-----------------------------------------------------------------------------***\n");
    printf("\t\t***|                                                                           |***\n");
    printf("\t\t***|                                                                           |***\n");
    printf("\t\t***|                                                                           |***\n");
    printf("\t\t***|                      Welcome To Parking System                            |***\n");
    printf("\t\t***|                      -------------------------                            |***\n");
    printf("\t\t***|                                                                           |***\n");
    printf("\t\t***|   Details of Project Maker:                                               |***\n");
    printf("\t\t***|                                                                           |***\n");
    printf("\t\t***|           Name       : Muskan Thahim                                      |***\n");
    printf("\t\t***|           Reg. No    : 2012397                                            |***\n");
    printf("\t\t***|           Field      : Computer Science                                   |***\n");
    printf("\t\t***|           Subject    : Fundamentals of Programming                        |***\n");
    printf("\t\t***|           Section    : G                                                  |***\n");
    printf("\t\t***|           University : SZABIST                                            |***\n");
    printf("\t\t***|                                                                           |***\n");
    printf("\t\t***|                                                                           |***\n");
    printf("\t\t***-----------------------------------------------------------------------------***\n");
    printf("\t\t***********************************************************************************\n");
    printf("\t\t***********************************************************************************\n");
    printf("\n\n");
}

// function to print parking menu
void showParkingMenu(){
    printf("_____________________________________________________________________________________________________\n");
	printf("***************  Amounts of Parking for different Vehicles  ************************\n");
	printf("\tFor Bike parking      : Rs. 100\n");
	printf("\tFor Rickshaw parking  : Rs. 200\n");
	printf("\tFor Car parking       : Rs. 400\n");
	printf("\tFor Van parking       : Rs. 600\n");
	printf("\tFor Bus parking       : Rs. 1000\n");
	printf("*************************************************************************************\n");
	printf("\tThere is place for maximum 100 vehicles to park.\n");
	printf("*************************************************************************************\n");
}

// function to print options
void showOptions(){
    printf("\tIf you want to park a Bike.        Press 1\n");
	printf("\tIf you want to park a Rickshaw.    Press 2\n");
	printf("\tIf you want to park a Car.         Press 3\n");
	printf("\tIf you want to park a Van.         Press 4\n");
	printf("\tIf you want to park a Bus.         Press 5\n");
	printf("\tIf you want to see the record.     Press 6\n");
	printf("\tIf you want to delete the record.  Press 7\n");
	printf("\tIf you want to exit.               Press 0\n");
	printf("Select your choice: ");
}

void showParkingFullErrorMessage(){
    printf("***********************************************************\n");
    printf("\tParking is full, there is no place for more vehicles.\n");
    printf("xxxxxxx=========xxxxxxxxx==========xxxxxxx=====xxxxxx\n\n");
}

int main(){
    // Required Variables
    int choice;
    int bike=0, rickshaw=0, car=0, van=0, bus=0;
    int totalCount=0, totalAmount=0;

    showDeveloperDetail();
    showParkingMenu();

    while(1){
        showOptions();
        scanf("%d", &choice);

        switch(choice){
            case 0:
                exit(0);
                break;
            case 1:
                if(totalCount<100){
                    bike++;
                    totalCount++;
                    totalAmount+=100;      // totalAmount = totalAmount + 100;
                    printf("-------------------------------------------------------------\n");
                    printf("\t\tBike is parked.\n");
                    printf("-------------------------------------------------------------\n");
                }
                else{
                    showParkingFullErrorMessage();
                }
                break;
            case 2:
                if(totalCount<100){
                    rickshaw++;
                    totalCount++;
                    totalAmount+=200;      // totalAmount = totalAmount + 200;
                    printf("-------------------------------------------------------------\n");
                    printf("\t\tRickshaw is parked.\n");
                    printf("-------------------------------------------------------------\n");
                }
                else{
                    showParkingFullErrorMessage();
                }
                break;
            case 3:
                if(totalCount<100){
                    car++;
                    totalCount++;
                    totalAmount+=400;      // totalAmount = totalAmount + 400;
                    printf("-------------------------------------------------------------\n");
                    printf("\t\tCar is parked.\n");
                    printf("-------------------------------------------------------------\n");
                }
                else{
                    showParkingFullErrorMessage();
                }
                break;
            case 4:
                if(totalCount<100){
                    van++;
                    totalCount++;
                    totalAmount+=600;      // totalAmount = totalAmount + 600;
                    printf("-------------------------------------------------------------\n");
                    printf("\t\tVan is parked.\n");
                    printf("-------------------------------------------------------------\n");
                }
                else{
                    showParkingFullErrorMessage();
                }
                break;
            case 5:
                if(totalCount<100){
                    bus++;
                    totalCount++;
                    totalAmount+=1000;      // totalAmount = totalAmount + 1000;
                    printf("-------------------------------------------------------------\n");
                    printf("\t\tBus is parked.\n");
                    printf("-------------------------------------------------------------\n");
                }
                else{
                    showParkingFullErrorMessage();
                }
                break;
            case 6:
                printf("********************  Parked Vehicles  **************************\n");
                printf("\tTotal number of vehicles parked    : %d\n", totalCount);
                printf("\tTotal number of Bikes parked       : %d\n", bike);
                printf("\tTotal number of Rickshaws parked   : %d\n", rickshaw);
                printf("\tTotal number of cars parked        : %d\n", car);
                printf("\tTotal number of Vans parked        : %d\n", van);
                printf("\tTotal number of Buses parked       : %d\n", bus);
                printf("*****************************************************************\n");
                printf("\tTotal amount of vehicles = %d\n", totalAmount);
                printf("*****************************************************************\n\n");
                break;
            case 7:
                totalAmount=0;
                totalCount=0;
                bike=0;
                rickshaw=0;
                car=0;
                van=0;
                bus=0;
                printf("********************************************************\n");
                printf("\tTotal amount           = %d\n", totalAmount);
                printf("\tTotal vehicles parked  = %d\n", totalCount);
                printf("\tThe area is clear, there is no any vehicle parked.\n");
                printf("****************  Record Deleted  *********************\n\n");
                break;
            default:
                printf("-----------------------------------------------------------\n");
                printf("\n\tInvalid Selected option.\n");
                printf("-----------------------------------------------------------\n");
        }
    }

    return 0;
}
