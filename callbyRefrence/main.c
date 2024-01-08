#include<stdio.h>
int func(int *p){
return *p+2;
}

int main(){
    int y=5;
int x=func(&y);
printf("%d \n",x);
return 0;

}
