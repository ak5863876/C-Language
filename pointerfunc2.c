#include <stdio.h>

int* findSquare(int* num){
    int sq = *num * *num;
    *num = sq;
    return num;
}
int main(){
    int number = 21;
    int* result = findSquare(&number);
    printf("Result is %d",*result);
    return 0;
}