#include <stdio.h>

int main(){
    for(int i = 1; i <= 5; i++){
        printf("\na value is %d\n",i);
    }
    printf("***********************");
    for(int j = 10; j >= 1; j--){
        printf("\na value is %d\n",j);
    }
    printf("***********************");
    for(int k = 0; k <= 20; k+=2){
        printf("\na value is %d\n",k);
    }
    printf("***********************");
    return 0;
}