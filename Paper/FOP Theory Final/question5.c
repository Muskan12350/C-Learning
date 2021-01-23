#include<stdio.h>
#include<string.h>

struct Student{
    int id;
    char dateofJoining[30];
    char name[50];
    int score;
    char grade;
}std1, std2, std3;

void countStudentsByScores(struct Student stds[3]){
    int lessThan90=0, greaterThan90=0;
    for(int i=0;i<3;i++){
        if(stds[i].score<90){
            lessThan90++;
        }
        else if(stds[i].score>90){
            greaterThan90++;
        }
    }
    printf("Number of students whose score is less than 90: %d\n", lessThan90);
    printf("Number of students whose score is greater than 90: %d\n", greaterThan90);
}

void printByCheckingNameAndScore(struct Student stds[3]){
    for(int i=0;i<3;i++){
        if(strcmp(stds[i].name, "Akram")==0 && stds[i].score<60){
            printf("ID: %d\n", stds[i].id);
            printf("Name: %s\n", stds[i].name);
            printf("Date of Joining: %s\n", stds[i].dateofJoining);
            printf("Score: %d\n", stds[i].score);
            printf("Grade: %c\n", stds[i].grade);
        }
    }
}

void printNamesByCheckingIdAndGrade(struct Student stds[3]){
    for(int i=0;i<3;i++){
        if(stds[i].grade=='A' && stds[i].id<10){
            printf("Name: %s\n", stds[i].name);
        }
    }
}

void printNamesByCheckingDate(struct Student stds[3]){
    for(int i=0;i<3;i++){
        if(strcmp(stds[i].dateofJoining, "1/10/2020")==0){
            printf("Name: %s\n", stds[i].name);
        }
    }
}

int main(){

    // I am making logic for three students but it will work for 100 too if we add 100 students

    std1.id = 4;
    strcpy(std1.dateofJoining, "8/10/2020");
    strcpy(std1.name, "Muskan");
    std1.score = 98;
    std1.grade = 'A';

    std2.id = 8;
    strcpy(std2.dateofJoining, "1/10/2020");
    strcpy(std2.name, "Sehrish");
    std2.score = 80;
    std2.grade = 'B';

    std3.id = 12;
    strcpy(std3.dateofJoining, "5/10/2020");
    strcpy(std3.name, "Akram");
    std3.score = 50;
    std3.grade = 'C';

    struct Student students[3] = {std1, std2, std3};

    countStudentsByScores(students);
    printf("\n");
    printByCheckingNameAndScore(students);
    printf("\n");
    printNamesByCheckingIdAndGrade(students);
    printf("\n");
    printNamesByCheckingDate(students);

    return 0;
}
