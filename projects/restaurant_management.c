#include<stdio.h>

// function to print developer details
void showDeveloperDetail(){
    printf("\n");
    printf("\t\t***********************************************************************************\n");
    printf("\t\t***********************************************************************************\n");
    printf("\t\t***-----------------------------------------------------------------------------***\n");
    printf("\t\t***|                                                                           |***\n");
    printf("\t\t***|                                                                           |***\n");
    printf("\t\t***|                                                                           |***\n");
    printf("\t\t***|                      Welcome To Mr. Chatpata                              |***\n");
    printf("\t\t***|                      -----------------------                              |***\n");
    printf("\t\t***|                                                                           |***\n");
    printf("\t\t***|   Details of Project Maker:                                               |***\n");
    printf("\t\t***|                                                                           |***\n");
    printf("\t\t***|           Name       : Waqar Ali Siyal                                    |***\n");
    printf("\t\t***|           Roll no    : 18SW82                                             |***\n");
    printf("\t\t***|           Department : Software Engineering                               |***\n");
    printf("\t\t***|           Batch      : 18                                                 |***\n");
    printf("\t\t***|           Section    : 2                                                  |***\n");
    printf("\t\t***|           University : MUET, Jamshoro.                                    |***\n");
    printf("\t\t***|                                                                           |***\n");
    printf("\t\t***|                                                                           |***\n");
    printf("\t\t***-----------------------------------------------------------------------------***\n");
    printf("\t\t***********************************************************************************\n");
    printf("\t\t***********************************************************************************\n");
    printf("\n\n");
}

// function to print menu card
void showMenuCard(){
    printf("_____________________________________________________________________________________________________\n");
	printf("********************************  Menu Card  ******************************************\n");
	printf("\t01) Chicken Roll                            100\n");
	printf("\t02) Bief Roll                               80\n");
	printf("\t03) Reshmi Roll                             120\n");
	printf("\t04) Zinger Burger                           180\n");
	printf("\t05) Bief Burger                             120\n");
	printf("\t06) Club Sandwitch                          160\n");
	printf("\t07) Medium Pizza                            500\n");
	printf("\t08) Large Pizza                             800\n");
	printf("\t09) Chicken Tikka                           160\n");
	printf("\t10) Broast                                  160\n");
	printf("\t11) Chicken Karhayi (half)                  500\n");
	printf("\t12) Chicken karhayi (Full)                  1000\n");
	printf("\t13) Paratha                                 20\n");
	printf("\t14) Ice Cream                               60\n");
	printf("\t15) Shake                                   60\n");
	printf("\tIf you don't want to buy anything, Press 0 to exit\n");
	printf("*************************************************************************************\n");
	printf("\tWhen you select your complete order, press 16 for total bill.\n");
	printf("*************************************************************************************\n");
	printf("\n");
}

// function to take quantity input and returns the price for each item
int getItemBill(char itemName[], int itemPrice){
    printf("---------------------------------------------------------------------------\n");

    // Take quantity input
    int quantity;
    printf("\tEnter quantity: ");
    scanf("%d", &quantity);

    printf("\tItem Name = %s\n", itemName);

    int itemBill = itemPrice * quantity;
    printf("\tBill =  %d\n", itemBill);

    printf("---------------------------------------------------------------------------\n\n");

    return itemBill;
}

int main(){
    // Required Variables
    int orderChoice, totalBill=0;
    int item1Bill=0, item2Bill=0, item3Bill=0, item4Bill=0;
    int item5Bill=0, item6Bill=0, item7Bill=0, item8Bill=0;
    int item9Bill=0, item10Bill=0, item11Bill=0, item12Bill=0;
    int item13Bill=0, item14Bill=0, item15Bill=0, item16Bill=0;

    // Calling showDeveloperDetail() to show the developer details
    showDeveloperDetail();

    // Infinite Loop
    while(1){
        // Calling showMenuCard() to show the menu card
        showMenuCard();

        // Take user choice input
        printf("Select your order: ");
        scanf("%d", &orderChoice);

        // Check user selected choice using switch case
        switch(orderChoice){
            case 0:
                exit(0);
                break;
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                break;
            case 9:
                break;
            case 10:
                break;
            case 11:
                break;
            case 12:
                break;
            case 13:
                break;
            case 14:
                break;
            case 15:
                break;
            case 16:
                break;
            default: printf("-----------------------------------------------------------------\n\n");
                     printf("\tInvalid Choice.\n\n");
                     printf("-----------------------------------------------------------------\n");
        }
    }

    return 0;
}
