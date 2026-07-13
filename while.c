#include <stdio.h>
/*
while(condition){
    // statements inside while
}
*/
int main(){
    int count = 1;
    while(count <= 5){
        printf("While loop in C \n");
        printf("Count = %d \n",count);
        count = count + 1;
    }
    return 0;
}