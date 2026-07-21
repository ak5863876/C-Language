#include <stdio.h>

int main(){
    int mat[3][3];
    int sum = 0;
    printf("Enter 9 integers to calculate its sum:\n");
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            scanf("%d", &mat[i][j]);
            sum += mat[i][j];
        }
    }
    printf("Total Sum of 2D Array = %d",sum);
    return 0;
}