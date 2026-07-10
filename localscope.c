#include <stdio.h>

int add(int n1, int n2){
    int result = n1 + n2;
    return result;
}

int main(){
    int n1;
    int n2;
    printf("Enter a value for n1: \n");
    printf("Enter a value for n2: \n");
    scanf("%d",n1);
    scanf("%d",n2);
    int sum = add(n1,n2);
    printf("Addition Result = %d",sum);
    return 0;
}