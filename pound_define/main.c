#include<stdio.h>

int main(){
#define FOO 0
#if FOO
printf("FOO is 1 \n");

#else
printf("Foo is 0 /n");
#endif // FOO

}
