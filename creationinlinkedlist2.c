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
//This is how we insert a node at starting
struct Node*insertAtfirst(struct Node*head, int data)
{
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
};
struct Node*insertAtbetween(struct Node*head, int data,int index)
{
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node*p=head;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
};
struct Node*insertAtEnd(struct Node*head, int data){
   struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
   struct Node*p=head;
    ptr->data=data;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;

};
struct Node*insertAfterNode(struct Node*head,struct Node*prevNode, int data){
   struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
   ptr->data=data;
    ptr->next=prevNode->next;
    prevNode->next=ptr;
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
    head->data =7;
    head->next=second;
    //link second and third nodes
    second->data =11;
    second->next=third;
    //link third and fourth nodes
    third->data =66;
    third->next=fourth;
    //terminate the list
    fourth->data =23;
    fourth->next=NULL;

    linkedlisttraversel(head);
    /*head=insertAtfirst(head,45);
    printf(" After insertion node at starting. Now linkedlist is:\n");
    linkedlisttraversel(head);*/


    /*head=insertAtbetween(head,25,2);
    printf(" After insertion node at between. Now linkedlist is:\n");
    linkedlisttraversel(head);*/


    /*head=insertAtEnd(head,24);
    printf(" After insertion node at between. Now linkedlist is:\n");
    linkedlisttraversel(head);*/


    head=insertAfterNode(head,second,45);
    printf(" After insertion node at between. Now linkedlist is:\n");
    linkedlisttraversel(head);







    return(0);

}
