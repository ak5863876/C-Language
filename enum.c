#include <stdio.h>

enum Size {
    Small = 27,
    Medium = 35,
    Large = 56,
    ExtraLarge = 87
};

int main(){
    enum Size shoeSize1 = Small;
    enum Size shoeSize2 = Medium;
    enum Size shoeSize3 = Large;
    enum Size shoeSize4 = ExtraLarge;

    printf("Shoe Size 1 = %d\n",shoeSize1);
    printf("Shoe Size 2 = %d\n",shoeSize2);
    printf("Shoe Size 3 = %d\n",shoeSize3);
    printf("Shoe Size 4 = %d\n",shoeSize4);
    return 0;
}