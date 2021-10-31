#include<stdio.h>
#include<stdlib.h>
void printArray(int*A, int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ",A[i]);

    }
    printf("\n");
}
void insertionSort(int*A,int n)
{
    int key,j;
    //Loop for each passes
    for(int i=1; i<=n-1; i++)
    {
        key=A[i];
        j=i-1;
        //Loop for each pass
        while(j>=0 && A[j]>key)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=key;
    }
}
//  -1  0  1   2   3    4    5
//     12|  54  65   07  23   09 i->1, Key=54, j=0
//     12|  54  65   07  23   09 first pass done.

//     12   54| 65   07  23   09 i->2, Key=65, j=1
//     12   54| 65   07  23   09 second pass done.

//     12   54  65|  07  23   09 i->3, Key=7, j=2
//     12   54  07|  65  23   09 i->3, Key=7, j=1
//     12   54  54|  65  23   09 i->3, Key=7, j=0
//     12   12  54|  65  23   09 i->3, Key=7, j=-1
//     7   12  54|  65  23   09 i->3, Key=7, j=-1
//     7  12  54   65| 23   09  3rd pass done.


//     7  12  54   65| 23   09  i->4, Key=23, j=3.
//     7  12  54   65| 65   09  i->4, Key=23, j=2.
//     7  12  54   54| 65   09  i->4, Key=23, j=1.
//     7  12  23   54| 65   09  i->4, Key=23, j=0.
//     7  12  23   54  65|   09  4th pass done.


//     7  12  23   54  65|   09  i->5, Key=9, j=4.
//     7  12  23   54  65|   65  i->5, Key=9, j=3.
//     7  12  23   54  54|   65  i->5, Key=9, j=2.
//     7  12  23   23  54|   65  i->5, Key=9, j=1.
//     7  12  12   23  54|   65  i->5, Key=9, j=0.
//     7  09  12   23  54|   65  i->5, Key=9, j=-1.
//     7  09  12   23  54    65| 5th pass done.




int main()
{
    int A[]= {12,54,65,7,23,9};
    int n=6;
    printArray(A,n);
    insertionSort(A,n);
    printArray(A,n);
    return(0);
}
