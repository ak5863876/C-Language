#include <stdio.h>

int main(){
    int dimen[3][3];
    printf("Enter nine integers for the 2D array:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &dimen[i][j]);
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%4d", dimen[i][j]);
        }
        printf("\n");
    }
    return 0;
}