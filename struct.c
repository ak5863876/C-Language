#include <stdio.h>

struct Person{
    double salary;
    int age;
};

int main(){
    struct Person p1;
    struct Person p2;

    struct Person p3 = {.age = 30, .salary = 97752.45};

    p1.age = 20;
    p1.salary = 79400.75;

    printf("Age of person 1 = %d\n",p1.age);
    printf("Salary of person 1 = %.2lf\n",p1.salary);

    p2.age = 25;
    p2.salary = 82048.34;

    printf("Age of person 2 = %d\n",p2.age);
    printf("Salary of person 2 = %.2lf\n",p2.salary);

    printf("Age of person 3 = %d\n",p3.age);
    printf("Salary of person 3 = %.2lf\n",p3.salary);

    return 0;
}

/*
typedef function:

typedef struct Person{
    double salary;
    int age;
} person;

int main(){
    person p1;

    p1.age = 20;
    p1.salary = 79400.75;

    printf("Age of person 1 = %d\n",p1.age);
    printf("Salary of person 1 = %.2lf\n",p1.salary);

    return 0;
}



*/