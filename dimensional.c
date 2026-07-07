#include <stdio.h>
/*int arr[2][3] = {{1,2,3},{4,5,6}}
Stores two arrays with three elements on each 
Rows = 2, Columns = 3
*/
int main(){
    // Printing each and every elements from the array
    int arr[2][3] = {{1,2,3},{4,5,6}};

    printf("%d\n", arr[0][0]);
    printf("%d\n", arr[1][2]);
    // Changing array indexes
    arr[0][2] = 7;
    arr[1][1] = 8;
    printf("%d\n", arr[0][2]);
    printf("%d\n", arr[1][1]);
    return 0;
}