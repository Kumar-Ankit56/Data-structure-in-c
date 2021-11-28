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
void postOrder(struct node*root){
  if(root!=NULL){
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ",root->data);
  }
}
int main()
{

    // Constructing the root node - Using Function (Recommended)
    struct node *p = createNode(4);
    struct node *p1 = createNode(1);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(5);
    struct node *p4 = createNode(2);
    // Finally The tree looks like this:
    //      4
    //     / \
    //    1   6
    //   / \
    //  5   2

    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    postOrder(p);
    printf("\n");
    //preOrder(p);

 return(0);
}


