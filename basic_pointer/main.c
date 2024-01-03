#include<stdio.h>

int main(){
int x=7;
int *ptr;
printf("Address of ptr =%p before assignment \n",ptr);
ptr=&x;
printf("Address of x is %p \n",&x);
printf("Address of ptr =%p after assignment \n",ptr);
printf("Value of p is %d \n",*ptr);
return 0;

}
