#include <stdio.h>

int main(){
    int marks[5] = {10,20,30,40,50};
    printf("All Marks:\n");
    for(int i = 0; i < 5; i++){
        printf("Student %d = %d\n",i+1,marks[i]);
    }
    return 0;
}