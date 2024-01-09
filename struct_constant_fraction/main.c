#include<stdio.h>


typedef struct fraction{
int numerator;
int denominator;
}Frac;

void foo(const Frac* frac);    // function prototype
void foo(const Frac* frac){
printf("Fraction=%d/%d \n",frac->numerator,frac->denominator);
//frac->numerator=5;        // This will give you error means fraction is a constant
}
int main(){
Frac my_fraction={12,17};
foo(&my_fraction);
return 0;
}
