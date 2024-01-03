#include<stdio.h>
#include<stdlib.h>
struct fraction{
int numerator;
int denominator;
};
int main(){
int *p;
int q=57;
p=&q;
*p=13;
struct fraction frac;
p=&(frac.numerator);
*p=29;
p=&(frac.denominator);
*p=33;
printf("q=%d, fraction_numerator=%d,fraction_denominator=%d \n",q,frac.numerator,frac.denominator);
return 0;
}
