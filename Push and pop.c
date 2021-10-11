#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int*arr;
};
int isFull(struct stack*ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty(struct stack*ptr)
{
    if(ptr->top==-1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
void push(struct stack*ptr,int val){
  if(isFull(ptr)){
    printf("Stack Overflow! Cna't push %d to the stack\n",val);
  }
  else{
    ptr->top++;
    ptr->arr[ptr->top]=val;
  }
}
int pop(struct stack*ptr){
  if(isEmpty(ptr)){
    printf("Stack Underflow! Can't pop from the stack\n");
    return -1;
  }
  else{
    int val=ptr->arr[ptr->top];
    ptr->top--;
    return val;
  }
}
int main()
{
    struct stack*sp =(struct stack*)malloc(sizeof(struct stack));//It is struct pointer that store the addrees of structure;  Now it is instance of Struct stack;
    sp->size=10;
    sp->top=-1;
    sp->arr=(int*)malloc(sp->size-sizeof(int));
    printf("Stuck has been created successfully\n");// by this line we have made a struct structure;
    printf("Before pushing full%d\n",isFull(sp));
    printf("Before pushing Empty%d\n",isEmpty(sp));
    push(sp,56);
    push(sp,56);
    push(sp,56);
    push(sp,56);
    push(sp,56);
    push(sp,56);
    push(sp,56);
    push(sp,56);
    push(sp,56);
    push(sp,56);//PUshed 10 element
    //push(sp,6);
    printf("After pushing full %d\n",isFull(sp));
    printf("After pushing Empty%d\n",isEmpty(sp));
    printf("Popped %d from stack\n",pop(sp));
    printf("Popped %d from stack\n",pop(sp));
    printf("Popped %d from stack\n",pop(sp));
    return(0);
}
