#include<stdio.h>
static int twice_fun(int n){
int result=n*3;
result=result-n;
return result;
}

int main(){
int double_value;
double_value=twice_fun(7);
printf("Value after doubling =%d \n",double_value);
return;

}
