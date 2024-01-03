#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

char source[1000]="let everything be good to happen";
char* destination=malloc(strlen(source)+1);  //here source+1 is used to accomodate the null character too.
if(destination==NULL){
    fprintf(stderr,"Memory allocation failed \n");
    free(destination);
    return 0;
}
strlcpy(destination,source,strlen(source)+1);
printf("%s \n",destination);
free(destination);
return 0;

}
