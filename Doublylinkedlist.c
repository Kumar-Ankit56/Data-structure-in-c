#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    // It is struct node pointer.
    struct Node*next;
    struct Node*prev;
};
void frontThenReverse(struct Node*N1,struct Node*N4)
{
    struct Node*ptr=N1;
    printf("Forward traverse:\n");
    while(ptr!=NULL)
    {
        printf(" Element:%d\n",ptr->data);
        ptr=ptr->next;
    }
    ptr=N4;
    printf("Backward traverse:\n");
    while(N4!=NULL)
    {
        printf(" Element:%d\n",ptr->data);
        ptr=ptr->prev;
    }
}
int main()
{
    struct Node*N1;
    struct Node*N2;
    struct Node*N3;
    struct Node*N4;

    //allocate memory for nodes in the linked list in Heap
    N1=(struct Node*)malloc(sizeof(struct Node));
    N2=(struct Node*)malloc(sizeof(struct Node));
    N3=(struct Node*)malloc(sizeof(struct Node));
    N4=(struct Node*)malloc(sizeof(struct Node));

    //link first and second nodes
    N1->data =7;
    N1->next=N2;
    N1->prev=NULL;
    //link second and third nodes
    N2->data =11;
    N2->next=N3;
    N2->prev=N1;
    //link third and fourth nodes
    N3->data =66;
    N3->next=N4;
    N3->prev=N2;
    //terminate the list
    N4->data =23;
    N4->next=NULL;
    N4->prev=N3;

    frontThenReverse(N1,N4);




    return(0);
}



