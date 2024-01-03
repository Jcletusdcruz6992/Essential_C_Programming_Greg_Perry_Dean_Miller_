#include<stdio.h>
#include<string.h>

int main(){
char str[1000];
strcpy(str,"james");
//swapping characters using for loop
int i,j;
char temp;
int len=strlen(str);
for(i=0,j=len-1;i<j;i++,j--){
    temp=str[i];
    str[i]=str[j];
    str[j]=temp;
}
printf("%s \n",str);
return 0;
}
