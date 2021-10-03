#include<stdio.h>
#include<stdlib.h>
#define max 4
int stack_arr[max];
int top = -1;
void push(int data){
    if(top==max-1){
        printf("Stack is overflow\n");
        return;
    }
    top=top+1;
    stack_arr[top]=data;
}
int pop()
{
    int value;
    if(top==-1){
        printf("Stack is underflow\n");
        exit(1);//exit means abnormal termination of program. program terminate with failure.
    }
    value=stack_arr[top];
    top=top-1;
    return value;
}
void print(){
    int i;
    if(top==-1){
        printf("Stack is underflow");
        return;
    }
    for(i=top;i>=0;i--){
        printf("%d",stack_arr[i]);
        printf("\n");
    }
}
int main()
{
    int data;
    push(1);
    push(2);
    push(3);
    push(4);
    print();
    push(5);
    data=pop();
    data=pop();
    print();
    return(0);
}
