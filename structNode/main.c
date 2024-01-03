#include<stdio.h>
struct fraction{
int numerator;
int denominator;
};

struct node{
int data;
struct node* next;        // next is a pointer that points to the next element in the node
};

int main(){
struct fraction* fr=(struct fraction* )malloc(sizeof(struct fraction));
if(fr==NULL){
    fprintf(stderr,"Memory allocation failed \n");
    free(fr);
    return 1;
}
fr->numerator=5;
fr->denominator=7;
printf("fraction=%d/%d \n",fr->numerator,fr->denominator);

//creating head for the linked list
struct node* head=malloc(sizeof(struct node));
if(head==NULL){
    fprintf(stderr,"Memory allocation failed \n");
    free(head);
    free(fr);
    return 1;

}
head->data=1;

//linking next element to the head
head->next=malloc(sizeof(struct node));
if(head->next==NULL){
    fprintf(stderr,"Memory allocation failed \n");
    free(head);
    free(head->next);
    free(fr);
    return 1;

}
head->next->data=2;

head->next->next=NULL;

//printing linked list
struct node* current=head;
while(current!=NULL){
    printf("%d \n",current->data);
    current=current->next;

}

//freeing frac and linkedlist
free(fr);
current=head;
while(current!=NULL){
    struct node* temp=current;
    current=current->next;
    free(temp);
}


return 0;
}
