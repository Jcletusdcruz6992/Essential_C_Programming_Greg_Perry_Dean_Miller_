#include<stdio.h>

struct fraction{
int numerator;
int denominator;
};

int main(){
struct fraction* ptr=(struct fraction*)malloc(sizeof(struct fraction));
if(ptr==NULL){
    fprintf(stderr,"Memory Allocation failed \n");
    return 1;
}
ptr->numerator=5;
ptr->denominator=7;
printf("Fraction = %d/%d \n",ptr->numerator,ptr->denominator);  //ptr->numerator is usec to derefrence the struct fraction
free(ptr);
return 0;
}
