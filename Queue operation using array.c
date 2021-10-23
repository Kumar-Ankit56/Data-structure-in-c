#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int size;
    int f;
    int r;
    int*arr;

};
int isFull(struct queue*q)
{
    if(q->r==q->size-1)
    {
        return 1;
    }
    return 0;
}
int isEmpty(struct queue*q)
{
    if(q->r==q->f)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct queue*q,int val)
{
    if(isFull(q))
    {
        printf("Queue is Full");
    }
    else
    {
        q->r++;
        q->arr[q->r]=val;
    }
}
int dequeue(struct queue*q)
{
    int a=-1;
    if(isEmpty(q))
    {
        printf("Queue is Empty");
    }
    else
    {
        q->f++;
        a=q->arr[q->f];
    }
    return a;
}
int main()
{
    struct queue q;
    q.size =4;
    q.f=q.r=-1;
    q.arr=(int*)malloc(q.size*sizeof(int));
    /*if(isEmpty(&q)){
        printf("Queue is Empty");
    }*/
    //Enqueue Few element
    enqueue(&q,12);
    enqueue(&q,16);
    enqueue(&q,14);
    enqueue(&q,4);//Contadict one that merage in Circular queue
    //Here queue is not empty as two element is inserted.
    printf("Dequeue element is %d\n",dequeue(&q));
    printf("Dequeue element is %d\n",dequeue(&q));
    printf("Dequeue element is %d\n",dequeue(&q));
    printf("Dequeue element is %d\n",dequeue(&q));
    enqueue(&q,4);//we can't insert more.
    if(isEmpty(&q))
    {
        printf("Queue is Empty\n");
    }
    //Queue is also not Full as array has capacity of 100 element..
    if(isFull(&q))
    {
        printf("Queue is Full\n");
    }


    return(0);
}
