#include<stdio.h>


struct fraction{
int numerator;
int denominator;
};

void foo(const struct fraction* frac);    // function prototype
void foo(const struct fraction* frac){
printf("Fraction=%d/%d \n",frac->numerator,frac->denominator);
//frac->numerator=5;        // This will give you error means fraction is a constant
}
int main(){
struct fraction my_fraction={12,17};
foo(&my_fraction);
return 0;
}
