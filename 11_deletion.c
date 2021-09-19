#include<stdio.h>
//traversal we did in the below code
void display(int arr[], int n){
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }

}
// code for deletion
void indexdeletion(int arr[], int size, int index){

    for(int i = index;i<size-1;i++){
        arr[i] =arr[i+1];
    }


}

int main()
{
    int arr[100]={7,8,12,28,27};
    int size =5, index=0;
    printf("Value before insertion\n");
    display(arr,size);
    indexdeletion(arr, size, index);
    size-=1;
    printf("Value after insertion\n");
    display(arr,size);
 return(0);
}

