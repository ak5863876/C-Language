#include <stdio.h> 
/* 
Budget Increase
*/
int main(){
    int project_budget;
    printf("Enter your project budget: ");
    scanf("%d", &project_budget);
    printf("Before Update = %d",project_budget);
    // Updating project budget by 5000
    int update = project_budget + 5000;
    printf("\nAfter Update = %d",update);
    return 0;
}