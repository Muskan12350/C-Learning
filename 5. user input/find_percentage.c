#include<stdio.h>

int main(){
    // Declare two variables for storing total and obtained marks
    int totalMarks, obtainedMarks;

    // Take total marks input
    printf("Enter total marks: ");
    scanf("%d", &totalMarks);

    // Take obtained marks input
    printf("Enter obtained marks: ");
    scanf("%d", &obtainedMarks);

    // Calculate percentage
    float percentage = (float) obtainedMarks/totalMarks * 100;

    // Print Percentage
    printf("Percentage is %.2f", percentage);

    return 0;
}
