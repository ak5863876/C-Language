#include <stdio.h>

int main(){
    int arr[6];
    int sum = 0;
    double average;
    printf("Enter marks for 6 subjects:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    average = (double)sum / 6;
    printf("Total Marks = %d\n", sum);
    printf("Average Marks = %.2f\n", average);
    return 0;
}