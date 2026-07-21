#include <stdio.h>

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d", arr[i]);
        printf("\n");
    }
}

int findMax(int arr[], int size){
    int max = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int sumArray(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

int countVowels(char str[]){
    int count = 0;
    int i = 0;
    while(str[i] != '\0'){
        char c = str[i];
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
            count++;
        }
        i++;
    }
    return count;
}

int main(){
    int nums[] = {55, 14, 45, 776, 234, 87};
    char word[] = "Colloquialism";
    printf("Array: \n");
    printArray(nums,6);
    printf("Max: %d\n",findMax(nums,6));
    printf("Sum: %d\n",sumArray(nums,6));
    printf("No. of vowels = %d\n",countVowels(word));
    return 0;
}