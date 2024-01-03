#include<stdio.h>
int main(){
int *p=NULL;          //Here p is not pointing to a valid memory address , thats the meaning when a pointer equals NULL;
if(p==NULL){
    printf("p doesn't point to any valid memory address \n");
}
p=(int *)malloc(sizeof(int));
if(p==NULL){
    fprintf(stderr,"Memory allocation failed \n");
    free(p);
    return 1;
}
*p=75;
printf("%d \n",*p);
free(p);
return 0;

}
