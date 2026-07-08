#include <stdio.h>

int main() {
    while(1){
        int num;
        printf("Enter a number:");
        scanf("%d", &num);
        
        if (num > 0){
            printf("Positive Value = %d \n",num);
            break;
        } else if (num < 0 && num % 2 == 0){
            printf("Negative Even \n");
            continue;
        }
        printf("%d \n",num);
    }
    return 0;
}