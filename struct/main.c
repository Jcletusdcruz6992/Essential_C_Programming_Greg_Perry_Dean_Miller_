#include<stdio.h>
//Defining struct
struct fraction{
int numerator;
int denominator;
};
//Defining print function
void printFraction(struct fraction f){
printf("%d/%d \n",f.numerator,f.denominator);
}
int main(){
    //variable declaration
struct fraction f1;
struct fraction f2;
//Using periods . to assign values to variables
f1.numerator=22;
f1.denominator=7;
f2.numerator=24;
f2.denominator=11;
printFraction(f1);
printFraction(f2);

return 0;

}
