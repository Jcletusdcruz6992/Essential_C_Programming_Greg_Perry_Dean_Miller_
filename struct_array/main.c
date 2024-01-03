#include<stdio.h>

struct fraction{
int numerator;
int denominator;
};

int main(){
struct fraction num[5];
num[0].numerator=5;
num[0].denominator=5;
num[1].numerator=21;
num[1].denominator=8;
num[2].numerator=17;
num[2].denominator=9;
num[3].numerator=13;
num[3].denominator=41;
num[4].numerator=3;
num[4].denominator=41;

for(int i=0;i<5;i++){
    printf("Fraction[%d]:%d/%d \n",i,num[i].numerator,num[i].denominator);
}
return 0;
}
