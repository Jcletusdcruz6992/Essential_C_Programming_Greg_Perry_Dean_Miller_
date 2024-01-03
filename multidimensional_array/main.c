#include<stdio.h>

int main(){
//Intializing all array elements to 0
int runs[10][10]={0};
runs[0][0]=17;   // assigning value to first element
runs[9][9]=5;   // assigning value to last element
printf("First element is %d \n",runs[0][0]);
printf("Last element is %d \n ",runs[9][9]);
// to efficiently modify the value;
for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        runs[9][9]=8;
    }
}
printf("Array after modifaction is %d \n",runs[9][9]);
return 0;
}
