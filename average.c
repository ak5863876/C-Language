#include <stdio.h>

int main(){
    int marks[5];
    int total = 0;
    double average;
    //Input marks for 5 subjects
    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    // Calculate average
    average = (double)total / 5;
    // Display result
    printf("Total Marks = %d\n", total);
    printf("Average Marks = %.2f\n", average);
    return 0;
}