#include<stdio.h>

void add(int,int);

void add(int a,int b){
    int c=a+b;
    printf("Result is %d",c);
}

int main(){
    int a = 6;
    int b = 14;

    add(a,b);

    return 0;
}