#include <stdio.h>

void output1(int input[], int size){
    printf("Output 1: ");
    for(int i = 0; i < size; i++){
        printf("%d ", input[i] + 5);
    }
    printf("\n");
}
void output2(int input[], int n) {
    printf("Output 2: ");
    for (int i = 0; i < n; i++) {
        if (i % 2 == 1)
            printf("%d ", input[i] + 5);
        else
            printf("%d ", input[i]);
    }
    printf("\n");
}
void output3(int input[], int n) {
    printf("Output 3: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", (input[i] / 11) * 2);
    }
    printf("\n");
}
void displayInput(int input[], int n) {
    printf("Input: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", input[i]);
    }
    printf("\n");
}
int main() {
    int input[] = {11, 22, 33, 44, 55};
    int n = 5;
    displayInput(input, n);
    output1(input, n);
    output2(input, n);
    output3(input, n);
    return 0;
}