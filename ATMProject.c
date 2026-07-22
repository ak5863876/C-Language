#include <stdio.h>

int main(){
    int currentbalance = 1000;
    while(1){
        printf("\n=====ATM MENU=====\n");
        printf("1. View Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw \n");
        printf("4. Exit\n");

        int choice;
        printf("\nEnter a choice number from the ATM menu: ");
        scanf("%d", &choice);

        if(choice == 1){
            printf("\n----------------------\n");
            printf("Current Balance = $ %d",currentbalance);
            printf("\n----------------------\n");
        }else if(choice == 2){
            int deposit;
            printf("\nEnter amount to deposit ($): ");
            scanf("%d", &deposit);
            printf("\nAmount deposited successfully\n");
            currentbalance = currentbalance + deposit;
            printf("\nCurrent Balance = $ %d\n",currentbalance);
        }else if(choice == 3){
            int withdraw;
            printf("\nEnter amount to withdraw ($): ");
            scanf("%d", &withdraw);
            if(withdraw < currentbalance){
                printf("\nAmount withdrawn successfully\n");
                currentbalance = currentbalance - withdraw;
            } else{
                printf("Insufficient funds");
            }
            printf("\nCurrent Balance = $ %d\n",currentbalance);
        }else if(choice == 4){
            printf("\nExiting the ATM\n");
            break;
        }else{
            printf("\nInvalid choice number! Please enter a valid number!\n");
        }
    }
    return 0;
}