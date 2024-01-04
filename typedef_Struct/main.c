#include<stdio.h>
#include<string.h>

struct fraction{
int numerator;
int denominator
};

typedef struct student{
char name[10];
int age;
}data;

int main(){
struct fraction fra;
fra.numerator=5;
fra.denominator=7;

printf("Fraction =%d/%d \n",fra.numerator,fra.denominator);


data s1;
strcpy(s1.name,"James");
s1.age=28;
printf("Student name=%s , Age=%d \n",s1.name,s1.age);
return 0;

}
