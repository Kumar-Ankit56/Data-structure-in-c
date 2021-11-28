#include<stdio.h>
#include<malloc.h>
struct node{
    int data;
    struct node*left;
    struct node*right;
};
struct node* createNode(int data){
    //Creating a node pointer.
    struct node*n;
    n=(struct node*)malloc(sizeof(struct node));//ALLOCATing memeory in the heap.
    n->data=data;//setting the data.
    n->left=NULL;//setting the left node to null.
    n->right=NULL;//setting the right node to null.
    return n;//Finally returing the created node.
};
int main()
{
    /* "tHis logic is good and simple forward but its repeating some line of code."
    //constructing the root node

    struct node*p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=2;
    p->left=NULL;
    p->right=NULL;
    //constructing the 1st node.
    struct node*p1;
    p1=(struct node*)malloc(sizeof(struct node));
    p->data=2;
    p1->left=NULL;
    p1->right=NULL;
    //constructing the 2nd node.
    struct node*p2;
    p2=(struct node*)malloc(sizeof(struct node));
    p->data=2;
    p2->left=NULL;
    p2->right=NULL;

    //Linking the root node with left and right children.
    p->left=p1;
    p->right=p2;
    */


    //constructing the root node using function.

    struct node*p=createNode(2);
    struct node*p1=createNode(1);
    struct node*p2=createNode(4);

    //Linking the root node with left and right children.
    p->left=p1;
    p->right=p2;


 return(0);
}
