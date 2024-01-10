#include<stdio.h>
#include<assert.h>

#define MAX_SIZE 5

int main(){
int arr[MAX_SIZE];
int index=6;
assert(index>0);    //To check if index is not negative
assert(index<MAX_SIZE);
arr[index]=7;
printf("Array[%d]=%d \n",index,arr[index]);
return 0;


}
