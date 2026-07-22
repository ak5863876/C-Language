#include <stdio.h> 

int main(){
    int math;
    int physics;
    int chemistry;
    int english;
    printf("STUDENT MARKS\n");
    printf("Enter marks for math:");
    scanf("%d", &math);
    printf("\nEnter marks for physics:");
    scanf("%d", &physics);
    printf("\nEnter marks for chemistry:");
    scanf("%d", &chemistry);
    printf("\nEnter marks for english:");
    scanf("%d", &english);
    int total_marks = math + physics + chemistry + english;
    printf("\nMath Marks = %d",math);
    printf("\nPhysics Marks = %d",physics);
    printf("\nChemistry Marks = %d",chemistry);
    printf("\nEnglish Marks = %d",english);
    printf("\nTotal Marks = %d",total_marks);
    return 0;
}