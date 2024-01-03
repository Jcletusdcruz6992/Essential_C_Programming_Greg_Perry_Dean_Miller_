#include<stdio.h>
int main(){
int score[100];
score[0]=19;
score[99]=88;
score[110]=77;
printf("First score = %d \n",score[0]);
printf("Second score = %d \n ",score[99]);
printf("garbage score = %d \n ",score[49]);
printf("Outbound score = %d \n ",score[110]);
return 0;

}
