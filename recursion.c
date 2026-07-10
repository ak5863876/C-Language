#include <stdio.h>
/*
void recurse(){
}
int main(){
    return 0;
}
*/
int sum(int n);

int main(){
    int number;
    int result;
    printf("Enter a positive integer:");
    scanf("%d", &number);
    result = sum(number);
    printf("\nSum = %d",result);
    return 0;
}
int sum(int n){
    if(n != 0){
        return n + sum(n-1); //sum() calls itself
    } else{
        return n;
    }
}
