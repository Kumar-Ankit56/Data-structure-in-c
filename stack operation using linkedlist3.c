#include<stdio.h>
#include<stdlib.h>
struct node{
   int data;
   struct node*link
};
struct node*top=NULL;
void push(int data){
   struct node*newNode;
   newNode=malloc(sizeof(newNode));
   //check if memory can't be allocated due to some reason;
   if(newNode==NULL){
    printf("Stack overflow");
    exit(1);
   }
   newNode->data=data;
   newNode->link=NULL;

   newNode->link=top;
   top=newNode;
}
void print(){
  struct node*temp;
  temp=top;
  printf("The stack element are:");
  while(temp){
    printf("%d",temp->data);
    temp=temp->link;
  }
  printf("\n");
}
int main(){
    int choice,data;
    while(1){
        printf("1. push\n");
        printf("2. print\n");
        printf("3. quite\n");
        printf("Enter your choice");
        scanf("%d",&choice);

        switch(choice){
        case 1:
            printf("Enter The element to be pushed: ");
            scanf("%d",&data);
            push(data);
            break;
        case 2:
            print();
            break;
        case 3:
            exit(1);
        default:
            printf("wrong choice");
            break;
        }
    }
    return 0;
}
