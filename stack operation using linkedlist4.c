#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*link
    };
struct node*top=NULL;
int isEmpty()
{
    if(top==NULL)
        return 1;
    else
        return 0;
}
void push(int data)
{
    struct node*newNode;
    newNode=malloc(sizeof(newNode));
    //check if memory can't be allocated due to some reason;
    if(newNode==NULL)
    {
        printf("Stack overflow");
        exit(1);
    }
    newNode->data=data;
    newNode->link=NULL;

    newNode->link=top;
    top=newNode;
}
int pop()
{
    struct node*temp;
    int val;
    if(isEmpty())
    {
        printf("Stack underflow");
        exit(1);
    }
    temp=top;
    val=temp->data;
    top=top->link;
    free(temp);
    temp=NULL;
    return val;
}
int peek()
{
    if(isEmpty())
    {
        printf("Stack underflow");
        exit(1);
    }
    return top->data;
}
void print()
{
    struct node*temp;
    temp=top;
    if(isEmpty())
    {
        printf("Stack underflow");
        exit(1);
    }
    printf("The stack element are:");
    while(temp)
    {
        printf("%d ",temp->data);
        temp=temp->link;
    }
    printf("\n");
}
int main()
{
    int choice,data;
    while(1)
    {
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print the top element\n");
        printf("4. Print all the element of stack\n");
        printf("5. Quite\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            printf("Enter The element to be pushed: ");
            scanf("%d",&data);
            push(data);
            break;
        case 2:
            data = pop();
            printf("Deleted element is %d\n",data);
            break;
        case 3:
            printf("The topmost element of the stack is %d\n",peek());
            break;
        case 4:
            print();
            break;
        case 5:
            exit(1);
        default:
            printf("wrong choice\n");
            break;
        }
    }
    return 0;
}

