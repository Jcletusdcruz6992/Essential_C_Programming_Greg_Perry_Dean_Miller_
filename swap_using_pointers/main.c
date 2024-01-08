#include<stdio.h>
#include<stdlib.h>
void swap(int* x, int* y){
int temp=*x;
*x=*y;
*y=temp;
}

int main(){
int a=5;
int b=7;

printf("Value before swapping is a=%d and b=%d \n ",a,b);
swap(&a,&b);
printf("Value after swapping is a=%d and b=%d \n",a,b);
return 0;

}
