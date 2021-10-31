#include<stdio.h>
void printArray(int*A, int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ",A[i]);

    }
      printf("\n");
}
void bubblesortAdative(int*A, int n)
{
    int temp;
    int isSorted=0;
    for(int i=0; i<n-1; i++) //this for loop number of pass.
    {
        printf("Working on pass number %d\n",i+1);
        isSorted=1;
        for(int j=0; j<n-1-i; j++) //for number of comparison in each pass.
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                isSorted=0;
            }
        }
        if(isSorted=1){
            return;
        }
    }
}
void bubblesort(int*A, int n)
{
    int temp;

    for(int i=0; i<n-1; i++) //this for loop number of pass.
    {
        printf("Working on pass number %d\n",i+1);
        for(int j=0; j<n-1-i; j++) //for number of comparison in each pass.
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;

            }
        }

    }
}
int main()
{
    //int A[]= {12,54,65,7,23,9};//unsorted array is used for sorting.
    //int A[]= {1,2,5,6,12,54,625,7,23,9,645};//unsorted array is used for sorting.
    int A[]={1,2,3,4,5,6};
    int n=6;
    printArray(A,n);//printing the array before the sorting
    bubblesortAdative(A,n);
    //bubblesort(A,n);//it will sort the array.
    printArray(A,n);//printing the after sorting
    return(0);
}
