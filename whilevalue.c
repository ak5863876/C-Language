#include <stdio.h>

int main(){
    int value1 = 1;
    int value2 = 5;
    int value3 = 2;
    while(value1 <= 5){
        printf("\na value is %d\n",value1);
        value1 = value1 + 1;
    }
    printf("-----------------------------");
    while(value2 >= 1){
        printf("\na value is %d\n",value2);
        value2 = value2 - 1;
    }
    printf("-----------------------------");
    while(value3 <= 10){
        printf("\na value is %d\n",value3);
        value3 = value3 + 2;
    }
    printf("-----------------------------");
    return 0;
}