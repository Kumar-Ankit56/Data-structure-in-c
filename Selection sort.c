#include<stdio.h>
void printArray(int*A, int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ",A[i]);

    }
    printf("\n");
}
void selectionSort(int*A,int n)
{
    int indexofMin,temp;
    printf("Running selection sort....\n");
    for(int i=0; i<n-1; i++)
    {
        indexofMin=i;
        for(int j=i+1; j<n; j++)
        {
            if(A[j]<A[indexofMin])
            {
                indexofMin=j;

            }
        }
        //swap A[i] and A[indexofMin]
        temp=A[i];
        A[i]=A[indexofMin];
        A[indexofMin]=temp;
    }
}
// 00 01 02 03 04
// 03 05 02 13 12

// it will compare all the element with element with 3 and if it get any element less than it it will replace their place.
//After first pass
// 00 01 02 03 04
// 02 05 03 13 12

//After second pass
// 00 01 02 03 04
// 02 03 05 13 12

//After 3rd pass
// 00 01 02 03 04
// 02 05 03 13 12

//After 4th pass
// 00 01 02 03 04
// 02 05 03 12 13

int main()
{
    int A[]= {3,5,2,13,12};
    int n=5;
    printArray(A,n);
    selectionSort(A,n);
    printArray(A,n);
    return(0);
}
