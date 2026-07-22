#include <stdio.h>
#include <string.h>

int ids[50];
char names[50][50];
double salaries[50];
int count = 0;

void addEmployee() {
    if (count >= 50) {
        printf("Employee list is full.\n");
        return 0;
    }
    printf("Enter ID: ");
    scanf("%d", &ids[count]);
    printf("Enter name: ");
    scanf("%49s", names[count]);
    printf("Enter salary: ");
    scanf("%lf", &salaries[count]);
    count++;
    printf("Employee added successfully.\n");
}

void displayEmployees() {
    if (count == 0) {
        printf("No employees found.\n");
        return 0;
    }
    printf("\nEmployee List:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s, Salary: %.2lf\n",ids[i], names[i], salaries[i]);
    }
}

void searchEmployee() {
    int id;
    printf("Enter ID to search: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (ids[i] == id) {
            printf("Employee Found\n");
            printf("Name: %s\n", names[i]);
            printf("Salary: %.2lf\n", salaries[i]);
            return 0;
        }
    }
    printf("Employee not found.\n");
}

void updateSalary() {
    int id;
    printf("Enter ID to update salary: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (ids[i] == id) {
            printf("Enter new salary: ");
            scanf("%lf", &salaries[i]);
            printf("Salary updated successfully.\n");
            return 0;
        }
    }
    printf("Employee not found.\n");
}

void deleteEmployee() {
    int id;
    printf("Enter ID to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (ids[i] == id) {
            for (int j = i; j < count - 1; j++) {
                ids[j] = ids[j + 1];
                salaries[j] = salaries[j + 1];
                strcpy(names[j], names[j + 1]);
            }
            count--;
            printf("Employee deleted successfully.\n");
            return;
        }
    }
    printf("Employee not found.\n");
}

int main() {
    int choice;
    while (1) {
        printf("\n===== Employee Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Employee Salary\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                displayEmployees();
                break;
            case 3:
                searchEmployee();
                break;
            case 4:
                updateSalary();
                break;
            case 5:
                deleteEmployee();
                break;
            case 6:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}