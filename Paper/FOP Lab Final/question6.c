#include<stdio.h>
#include<string.h>

struct Employee
{
    int id;
    char name[50];
    int age;
    int basicSalary;
    int bonus;
    char dateofJoining[30];
}emp;

void emp_bonus(){
    if(emp.age>50){
        emp.bonus = (emp.basicSalary / 100 ) * 40;
    }
    else{
        emp.bonus = (emp.basicSalary / 100 ) * 25;
    }
}

int main(){

    printf("Provide Employee Detail\n");
    printf("Enter Id: ");
    scanf("%d", &emp.id);
    printf("Enter Name: ");
    scanf("%s", &emp.name);
    printf("Enter Age: ");
    scanf("%d", &emp.age);
    printf("Enter Basic Salary: ");
    scanf("%d", &emp.basicSalary);
    printf("Enter Date of Joining: ");
    scanf("%s", &emp.dateofJoining);

    emp_bonus();

    printf("Name: %s\n", emp.name);
    printf("Salary: %d\n", emp.basicSalary);

    FILE *fp;
    fp=fopen("C:\\Users\\ND.COM\\Desktop\\C Learning\\paper\\employee_data.txt", "a");

    if(fp!=NULL){
        fprintf(fp,"%d\n",emp.id);
        fprintf(fp,"%s\n",emp.name);
        fprintf(fp,"%d\n",emp.age);
        fprintf(fp,"%d\n",emp.basicSalary);
        fprintf(fp,"%d\n",emp.bonus);
        fprintf(fp,"%s\n\n",emp.dateofJoining);
        fclose(fp);
    }

    return 0;
}
