#include<stdio.h>

int main(){
int y=7;
void* j;
j=&y;
printf("%d \n",*(int *) j);  // first typecast from void* to int8 , then derefrence it.
return 0;
}
