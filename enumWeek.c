#include <stdio.h>

enum Week {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main(){
    enum Week weekend1 = Saturday;
    enum Week weekend2 = Sunday;


    printf("Weekend 1 = %d\n",weekend1);
    printf("Weekend 2 = %d\n",weekend2);

    return 0;
}