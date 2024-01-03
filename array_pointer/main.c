#include<stdio.h>
int main(){
int arr[3]={5,9,11};
int *ptr=arr;  //ptr points to first element in the array;
printf("Array=%d \n",*ptr);
ptr++;// ptr points to the next element in arr
printf("Array=%d \n",*ptr);
return 0;
}
