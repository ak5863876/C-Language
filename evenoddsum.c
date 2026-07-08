#include <stdio.h>

int main() {
    int evensum = 0;
    int oddsum = 0;
    for(int i = 2; i <= 100; i=i+2){
        evensum = evensum + i;
    }
    printf("Sum of even numbers = %d \n",evensum);
    for(int i = 1; i <= 100; i=i+2){
        oddsum = oddsum + i;
    }
    printf("Sum of even numbers = %d \n",oddsum);
    return 0;
}