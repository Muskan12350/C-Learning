#include<stdio.h>

int main(){

    int salary;
    printf("Enter Salary: ");
    scanf("%d", &salary);

    /*
     * Suppose that salary we input above is the salary earned by the salesperson including gross amount
     * Logic for program is set and working fine now it depends on how many input salaries we give
     * As this was not asked in the question about how much salaries to input so I just implemented the logic/idea
     * which is required and it is working like if we enter 500 so it will increase 1 person in 500-599 range.
    */

    int counter[9] = {0,0,0,0,0,0,0,0,0};

    if(salary>=200 && salary<300){
        counter[0]++;
    }
    else if(salary>=300 && salary<400){
        counter[1]++;
    }
    else if(salary>=400 && salary<500){
        counter[2]++;
    }
    else if(salary>=500 && salary<600){
        counter[3]++;
    }
    else if(salary>=600 && salary<700){
        counter[4]++;
    }
    else if(salary>=700 && salary<800){
        counter[5]++;
    }
    else if(salary>=800 && salary<900){
        counter[6]++;
    }
    else if(salary>=900 && salary<1000){
        counter[7]++;
    }
    else if(salary>=1000){
        counter[8]++;
    }

    printf("$200-299: %d Salesperson\n", counter[0]);
    printf("$300-399: %d Salesperson\n", counter[1]);
    printf("$400-499: %d Salesperson\n", counter[2]);
    printf("$500-599: %d Salesperson\n", counter[3]);
    printf("$600-699: %d Salesperson\n", counter[4]);
    printf("$700-799: %d Salesperson\n", counter[5]);
    printf("$800-899: %d Salesperson\n", counter[6]);
    printf("$900-999: %d Salesperson\n", counter[7]);
    printf("$1000 and over: %d Salesperson\n", counter[8]);

    return 0;
}
