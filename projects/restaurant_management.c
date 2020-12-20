#include<stdio.h>

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

int main(){

    showDeveloperDetail();
    showMenuCard();

    return 0;
}
