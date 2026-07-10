#include <stdio.h>

void findSquare(int* num){
    int sq = *num * *num;
    *num = sq;
}
int main(){
    int number = 21;
    findSquare(&number);
    printf("Square is %d",number);
    return 0;
}