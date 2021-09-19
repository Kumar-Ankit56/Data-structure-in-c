#include<stdio.h>
//traversal we did in the below code
void display(int arr[], int n){
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }

}
// code for insertion
int indexinsertion(int arr[], int size, int element, int capacity, int index){
    if(size>=capacity){
        return -1;
    };
    for(int i = size-1;i>=index;i--){
        arr[i+1] =arr[i];
    }
    arr[index]= element;
    return 1;
}

int main()
{
    int arr[100]={7,8,12,28,27};
    int size =5, element=45, index=3;
    printf("Value before insertion\n");
    display(arr,size);
    indexinsertion(arr, size, element, 100, index);
    size+=1;
    printf("Value after insertion\n");
    display(arr,size);
 return(0);
}
