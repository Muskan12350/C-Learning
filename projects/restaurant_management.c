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
	printf("\t02) Beef Roll                               80\n");
	printf("\t03) Reshmi Roll                             120\n");
	printf("\t04) Zinger Burger                           180\n");
	printf("\t05) Bief Burger                             120\n");
	printf("\t06) Club Sandwitch                          160\n");
	printf("\t07) Medium Pizza                            500\n");
	printf("\t08) Large Pizza                             800\n");
	printf("\t09) Chicken Tikka                           160\n");
	printf("\t10) Broast                                  160\n");
	printf("\t11) Chicken Karhayi (half)                  500\n");
	printf("\t12) Chicken karhayi (full)                  1000\n");
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

    printf("\t%s = %d\n", itemName, quantity);

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

    int icecreamChoice, shakeChoice;

    // Calling showDeveloperDetail() to show the developer details
    showDeveloperDetail();

    // Calling showMenuCard() to show the menu card
    showMenuCard();

    // Infinite Loop
    while(1){
        // Take user choice input
        printf("Select your order: ");
        scanf("%d", &orderChoice);

        // Check user selected choice using switch case
        switch(orderChoice){
            case 0:
                exit(0);
                break;
            case 1:
                // int itemBill = getItemBill("Chicken Roll", 100);
                // item1Bill = item1Bill + itemBill;
                // item1Bill = item1Bill + getItemBill("Chicken Roll", 100);
                item1Bill += getItemBill("Chicken Roll", 100);
                break;
            case 2:
                item2Bill += getItemBill("Beef Roll", 80);
                break;
            case 3:
                item3Bill += getItemBill("Reshmi Roll", 120);
                break;
            case 4:
                item4Bill += getItemBill("Zinger Burger", 180);
                break;
            case 5:
                item5Bill += getItemBill("Bief Burger", 120);
                break;
            case 6:
                item6Bill += getItemBill("Club Sandwitch", 160);
                break;
            case 7:
                item7Bill += getItemBill("Medium Pizza", 500);
                break;
            case 8:
                item8Bill += getItemBill("Large Pizza", 800);
                break;
            case 9:
                item9Bill += getItemBill("Chicken Tikka", 160);
                break;
            case 10:
                item10Bill += getItemBill("Broast", 160);
                break;
            case 11:
                item11Bill += getItemBill("Chicken Karhayi (half)", 500);
                break;
            case 12:
                item12Bill += getItemBill("Chicken Karhayi (full)", 1000);
                break;
            case 13:
                item13Bill += getItemBill("Paratha", 20);
                break;
            case 16:
                totalBill = totalBill + item1Bill + item2Bill + item3Bill + item4Bill + item5Bill + item6Bill + item7Bill + item8Bill + item9Bill + item10Bill + item11Bill + item12Bill + item13Bill + item14Bill + item15Bill;
                printf("*****************************************************************************\n");
		        printf("\t\t\tTotal Bill = %d\n\n", totalBill);
		        printf("xxxxxxxxxxxxxx=============xxxxxxxxxxxxxxxxxxx=============xxxxxxxxxxxxxxxxxxxx\n");
                exit(0);
                break;
            default:
                printf("-----------------------------------------------------------------\n\n");
                printf("\tInvalid Choice.\n\n");
                printf("-----------------------------------------------------------------\n");
        }
    }

    return 0;
}
