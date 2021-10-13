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
int peek(struct stack*sp,int i){
    int arrayInd=sp->top-i+1;
    if(arrayInd<0){
        printf("Not a valid position for stack\n");
        return -1;
    }
    else{
        return sp->arr[arrayInd];
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
    push(sp,36);
    push(sp,26);
    push(sp,16);
    push(sp,1);
    push(sp,96);
    push(sp,66);
    push(sp,35);
    push(sp,57);
    push(sp,58);
    push(sp,90);//PUshed 10 element
    //push(sp,6);
    printf("After pushing full %d\n",isFull(sp));
    printf("After pushing Empty%d\n",isEmpty(sp));

    //printing value from the stack
    for(int j=1;j<=sp->top+1;j++){
        printf("The value at position %d is %d\n",j,peek(sp,j));
    }
    return(0);
}

