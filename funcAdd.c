#include<stdio.h>

void add(); // Global Scope

void add(){
    int a = 5;
    int b = 6;
    int c = a + b;
    printf("%d",c);
}

int main(){
    add();
    return 0;
}