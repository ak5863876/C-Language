#include <stdio.h> 

int main(){
    int basic_salary;
    int hra;
    int bonus;
    printf("Employee Salary Calaculation\n");
    printf("Enter your basic salary:\n");
    scanf("%d", &basic_salary);
    printf("Enter your hra:\n");
    scanf("%d", &hra);
    printf("Enter your bonus:\n");
    scanf("%d", &bonus);3
    int total_salary = basic_salary + hra + bonus;
    printf("\nTotal Salary of the Employee = %d",total_salary);

    return 0;
}