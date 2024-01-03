#include<stdio.h>
#include<string.h>

int main(){
char str[9];
strncpy(str,"James is doing good",sizeof(str)-1);
//then assign '/0' to the end
str[sizeof(str)-1]='\0';
printf("%s \n",str);
return 0;
}
