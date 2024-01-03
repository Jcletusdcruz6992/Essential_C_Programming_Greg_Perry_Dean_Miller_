#include<stdio.h>
int main(){
int x=5;
int y=15;
const int *ptr1=&x;
int* const ptr2=&y;
printf("value of ptr1=%d \n",*ptr1);
//*ptr1=7;    //Since its const int , you can't modify *ptr vlue;
ptr1=&y;
printf("value of ptr1=%d \n",*ptr1);
printf("Value of ptr2=%d \n ",*ptr2);
*ptr2=9;   //*ptr can be modified ,since int* const ptr
printf("Value of ptr2=%d \n ",*ptr2);
//ptr2=&x; // ptr2 cant be pointed to another address as ptr2 pointer is a constant pointer
return 0;

}
