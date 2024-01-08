#include<stdio.h>

typedef struct treenode{
int data;
char leftNode;
char rightNode;

}TreeNode;

int main(){
    TreeNode* root=(TreeNode*)malloc(sizeof(TreeNode));
    root->data=7;
    root->leftNode=NULL;
    root->rightNode=NULL;
    printf("Data=%d , rightNode=%p, leftNode=%p \n",root->data,(void *)root->leftNode,(void *)root->rightNode);

return 0;
}
