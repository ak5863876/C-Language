#include <stdio.h>
/*
switch(variable/expression){
  case value1: 
    //body of case 1
    break;
  case value2: 
    //body of case 2
    break;
  case valueN: 
    //body of case N
    break;
  
  default:
    //body of default
}
*/
int main(){
    int number;
    printf("Enter a number b/w 1-7: ");
    scanf("%d", &number);

    switch(number){
        case 1:
        printf("Sunday");
        break;
    
        case 2:
        printf("Monday");
        break;
    
        case 3:
        printf("Tuesday");
        break;  

        case 4:
        printf("Wednesday");
        break;    

        case 5:
        printf("Thursday");
        break;    

        case 6:
        printf("Friday");
        break;
            
        case 7:
        printf("Saturday");
        break;
        
        default:
        printf("Invalid Number!");
    }
    return 0;
}
/*
Switch with Multiple Cases

int main(){
    int number;
    printf("Enter a number b/w 1-7: ");
    scanf("%d", &number);

    switch(number){
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        printf("WeekDay");
        break;
        
        case 1:
        case 7:
        printf("Weekend");
        break;
        
        default:
        printf("Invalid Number!");
    }
    return 0;
}
*/