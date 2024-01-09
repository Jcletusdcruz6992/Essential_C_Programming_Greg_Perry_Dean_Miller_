#include <stdio.h>
#include <stdlib.h>

int main(){
    int i=0;

    while(1){
        i=i+1;
        printf("%d\n",i%2);
        if(i==20){
            break;
        }
    }
}
