#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node*left;
    struct node*right;
};
struct node* createNode(int data)
{
    //Creating a node pointer.
    struct node*n;
    n=(struct node*)malloc(sizeof(struct node));//ALLOCATing memeory in the heap.
    n->data=data;//setting the data.
    n->left=NULL;//setting the left node to null.
    n->right=NULL;//setting the right node to null.
    return n;//Finally returing the created node.
};
void inOrder(struct node*root)
{
    if(root!=NULL)
    {
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
}

int isBST(struct node*root)
{
    static struct node*prev=NULL;
    if(root!=NULL)
    {
        if(!isBST(root->left))
        {
            return 0;
        }
        if(prev!=NULL && root->data<=prev->data)
        {
            return 0;
        }
        prev=root;
        return isBST(root->right);
    }
    else
    {
        return 1;
    }
}
int main()
{

    // Constructing the root node - Using Function (Recommended)
    struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);
    // Finally The tree looks like this:
    //      4
    //     / \
    //    1   6
    //   / \
    //  5   2

    // Finally The tree looks like this for binary search tree:
    //      5
    //     / \
    //    3   6
    //   / \
    //  1   4


    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    //postOrder(p);
    //printf("\n");
    //preOrder(p);
    inOrder(p);
    printf("\n");
    if(isBST(p))
    {
        printf("This is BTS");

    }
    else
    {
        printf("This is not a BTS");
    }

    return(0);
}


