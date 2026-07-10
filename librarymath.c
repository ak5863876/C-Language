#include <stdio.h>
#include <math.h>

int main(){
   int num1 = 25;
   int num2 = 343;
   int p1 = 9;
   int p2 = 2;
   double sq = sqrt(num1);
   double cube = cbrt(num2);
   double power = pow(p1,p2);
   printf("Square Root of %d is %.1lf",num1,sq);
   printf("\nCube Root of %d is %.1lf",num2,cube);
   printf("\nPower of %d to %d is %.1lf",p1,p2,power);
   return 0;
}

