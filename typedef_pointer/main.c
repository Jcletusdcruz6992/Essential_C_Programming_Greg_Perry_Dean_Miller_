#include<stdio.h>

typedef struct fraction{
int numerator;
int denominator
}Frac;

int main(){
Frac *p1=(Frac *)malloc(sizeof(Frac));
p1->numerator=7;
p1->denominator=4;
printf("Fraction=%d/%d \n",p1->numerator,p1->denominator);
free(p1);
return 0;

}
