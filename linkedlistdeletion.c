#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    // It is struct node pointer.
    struct Node*next;
};
void linkedlisttraversel(struct Node*ptr)
{
    while(ptr!=NULL)
    {
        printf(" Element:%d\n",ptr->data);
        ptr=ptr->next;
    }
}
// Case:1 Deleting the first element from linked list.
struct Node* deletefirst(struct Node*head)
{
    struct Node*ptr=head;
    head=head->next;
    free(ptr);
    return head;
};
// Case:2 Deleting the element at index from linked list.
struct Node* deleteAtIndex(struct Node*head, int index)
{
    struct Node*p=head;
    struct Node*q=head->next;
    for(int i=0; i<index-1; i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
};
// Case:3 Deleting the last element from linked list.
struct Node* deletelast(struct Node*head)
{
    struct Node*p=head;
    struct Node*q=head->next;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
};
// Case:4 Deleting the element by given value from linked list.
struct Node* deleteAtgivenvalue(struct Node*head, int value)
{
    struct Node*p=head;
    struct Node*q=head->next;
    while(q->data!=value && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    if(q->data==value)
    {
        p->next=q->next;
        free(q);
    }
    return head;
};
int main()
{
    struct Node*head;
    struct Node*second;
    struct Node*third;
    struct Node*fourth;

    //allocate memory for nodes in the linked list in Heap
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));

    //link first and second nodes
    head->data =12;
    head->next=second;
    //link second and third nodes
    second->data =14;
    second->next=third;
    //link third and fourth nodes
    third->data =67;
    third->next=fourth;
    //terminate the list
    fourth->data =29;
    fourth->next=NULL;

    printf("Linkedlist before deletion:\n");
    linkedlisttraversel(head);
    printf("Linkedlist after deletion\n");
    //head=deletefirst(head);
    //head=deleteAtIndex(head,2);
    //head=deletelast(head);
    head=deleteAtgivenvalue(head,67);
    linkedlisttraversel(head);




    return(0);
}
