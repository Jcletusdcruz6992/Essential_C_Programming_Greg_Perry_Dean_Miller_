#include<stdio.h>
#include<string.h>
struct student{
char name[50];
int roll_num;
int age;
};

void printStudentName(struct student s){
printf("Student Name: %s  | Roll No: %d | Age: %d \n",s.name,s.roll_num,s.age);
}
int main(){
    struct student s1;
    struct student s2;
    struct student s3;

    strcpy(s1.name,"James");
    s1.roll_num=33;
    s1.age=28;

    strcpy(s2.name,"Jacob");
    s2.roll_num=54;
    s2.age=27;

    strcpy(s3.name,"John");
    s3.roll_num=20;
    s3.age=44;
printStudentName(s1);
printStudentName(s2);
printStudentName(s3);
return 0;

}
