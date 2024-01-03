#include<stdio.h>

struct fraction{
int numerator;
int denominator;
};

int main(){
struct fraction var1={2,5};
struct fraction *fractPointer=&var1;
printf("Fraction=%d/%d \n",fractPointer->numerator,fractPointer->denominator);
return 0;
}
