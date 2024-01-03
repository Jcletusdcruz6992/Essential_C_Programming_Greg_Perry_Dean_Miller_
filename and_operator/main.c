#include<stdio.h>
void foo(){
int i;
int *p;
p=&i;
*p=13;
printf("Value of p=%d \n",i);
}

int main(){
foo();//here p and i are available locally,oncce foo function is executed p and i cannot be modified.
//printf("Value of p=%d \n",i);
}
