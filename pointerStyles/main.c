#include<stdio.h>
int main(){
int* ptrA;
ptrA=(int*)malloc(sizeof(int));
*ptrA=5;

int *ptrB;
ptrB=(int*)malloc(sizeof(int));
*ptrB=6;

int *ptrC;
ptrC=(int*)malloc(sizeof(int));
*ptrC=7;

printf("ptrA=%d \n",*ptrA);
printf("ptrB=%d \n",*ptrB);
printf("ptrC=%d \n",*ptrC);

free(ptrA);
free(ptrB);
free(ptrC);
return 0;
}
