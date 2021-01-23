#include<stdio.h>

int main(){

    int choice = 0;

    int salesman1Sales = 0;
    int salesman2Sales = 0;
    int salesman3Sales = 0;
    int salesman1SalesAmount = 0;
    int salesman2SalesAmount = 0;
    int salesman3SalesAmount = 0;

    int salesAmount = 0;
    int totalSales = 0;

    for(int i=1;i<=15;i++){
        printf("Choose salesman and enter sales amount\n");
        printf("1) Salesman1\n");
        printf("2) Salesman2\n");
        printf("3) Salesman3\n");
        scanf("%d", &choice);
        if(choice==1){
            printf("Enter sales amount: ");
            scanf("%d", &salesAmount);
            if(salesAmount>=1000 && salesAmount<=99999){
                salesman1SalesAmount += salesAmount;
                totalSales+=salesAmount;
                salesman1Sales++;
            }
            salesAmount = 0;
        }
        else if(choice==2){
            printf("Enter sales amount: ");
            scanf("%d", &salesAmount);
            if(salesAmount>=1000 && salesAmount<=99999){
                salesman2SalesAmount += salesAmount;
                totalSales+=salesAmount;
                salesman2Sales++;
            }
            salesAmount = 0;
        }
        else if(choice==3){
            printf("Enter sales amount: ");
            scanf("%d", &salesAmount);
            if(salesAmount>=1000 && salesAmount<=99999){
                salesman3SalesAmount += salesAmount;
                totalSales+=salesAmount;
                salesman3Sales++;
            }
            salesAmount = 0;
        }
    }

    printf("\nABC ENTERPRISES\n\n");
    printf("TOTAL SALES FOR THE MONTH OF JULY\n\n");

    printf("Salesman1: %d\n", salesman1Sales);
    printf("Salesman2: %d\n", salesman2Sales);
    printf("Salesman3: %d\n\n", salesman3Sales);

    if(salesman1SalesAmount>salesman2SalesAmount && salesman1SalesAmount>salesman3SalesAmount)
        printf("TOTAL: %d :  Sales man with the highest sale is salesman 1", totalSales);
    else if(salesman2SalesAmount>salesman1SalesAmount && salesman2SalesAmount>salesman3SalesAmount)
        printf("TOTAL: %d :  Sales man with the highest sale is salesman 2", totalSales);
    else
        printf("TOTAL: %d :  Sales man with the highest sale is salesman 3", totalSales);

    return 0;
}
