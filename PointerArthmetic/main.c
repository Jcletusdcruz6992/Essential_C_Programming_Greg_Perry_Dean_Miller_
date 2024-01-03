#include<stdio.h>
int main(){
int arr[3]={7,14,1};
int *ptr=arr;
for(int i=0;i<sizeof(arr)/sizeof(int);i++){

    printf("Array[%d]=%d \n ",i,*(ptr+i));
}

}
