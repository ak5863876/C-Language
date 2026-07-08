#include <stdio.h>

int result;

void subtract(int n1, int n2){
    result = n2 - n1;
    printf("Subtraction Result = %d",result);
}
int main(){
    subtract(41,83);
    return 0;
}