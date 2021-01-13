#include<stdio.h>
#include<string.h>

struct Employee
{
    int id;
    char name[50];
    char dateofJoining[30];
    char position;
    int salary;
}emp1, emp2;

void printNames(struct Employee emps[3]){
    for(int i=0;i<3;i++){
        if(emps[i].position=='C'){
            printf("Name of Employee: %s\n", emps[i].name);
        }
    }
}

void printDetailsByCheckingIds(struct Employee emps[3]){
    for(int i=0;i<3;i++){
        if(emps[i].id>=10 && emps[i].id<=20){
            printf("Id of Employee: %d\n", emps[i].id);
            printf("Name of Employee: %s\n", emps[i].name);
            printf("Date of Joining: %s\n", emps[i].dateofJoining);
            printf("Position of Employee: %c\n", emps[i].position);
            printf("Salary of Employee: %d\n\n", emps[i].salary);
        }
    }
}

void printDetailsByCheckingSalary(struct Employee emps[3]){
    for(int i=0;i<3;i++){
        if(emps[i].salary<30000){
            printf("Id of Employee: %d\n", emps[i].id);
            printf("Name of Employee: %s\n", emps[i].name);
            printf("Date of Joining: %s\n", emps[i].dateofJoining);
            printf("Position of Employee: %c\n", emps[i].position);
            printf("Salary of Employee: %d\n\n", emps[i].salary);
        }
    }
}

void printDetailsByCheckingNameAndSalary(struct Employee emps[3]){
    for(int i=0;i<3;i++){
        if(emps[i].salary==29000 && strcmp(emps[i].name, "Kaleem")==0){
            printf("Id of Employee: %d\n", emps[i].id);
            printf("Name of Employee: %s\n", emps[i].name);
            printf("Date of Joining: %s\n", emps[i].dateofJoining);
            printf("Position of Employee: %c\n", emps[i].position);
            printf("Salary of Employee: %.d\n\n", emps[i].salary);
        }
    }
}

void printTotal(struct Employee emps[3]){
    int total1=0, total2=0;
    for(int i=0;i<3;i++){
        if(emps[i].salary<30000){
            total1++;
        }
        if(emps[i].salary>50000){
            total2++;
        }
    }
    printf("Total employees whose salary is less than 30000 = %d\n", total1);
    printf("Total employees whose salary is greater than 50000 = %d\n", total2);
}

int main(){

    struct Employee emp3;

    emp1.id = 10;
    strcpy(emp1.name, "Muskan");
    //emp1.name = "Muskan";
    strcpy(emp1.dateofJoining, "1 Jan 2021");
    //emp1.dateofJoining = "1 Jan 2021";
    emp1.position = 'C';
    emp1.salary = 60000;

    emp2.id = 18;
    strcpy(emp2.name, "Sehrish");
    strcpy(emp2.dateofJoining, "1 Jan 2019");
    emp2.position = 'A';
    emp2.salary = 40000;

    emp3.id = 2;
    strcpy(emp3.name, "Waqar");
    strcpy(emp3.dateofJoining, "1 Jan 2020");
    emp3.position = 'C';
    emp3.salary = 20000;

    struct Employee employees[3] = {emp1, emp2, emp3};

    printNames(employees);
    printf("\n\n");
    printDetailsByCheckingIds(employees);
    printf("\n");
    printDetailsByCheckingSalary(employees);
    printf("\n");
    printDetailsByCheckingNameAndSalary(employees);
    printf("\n");
    printTotal(employees);

    return 0;
}
