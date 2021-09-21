#include<stdio.h>
int linearsearch(int arr[],int size, int element)
{
    for(int i; i<size; i++)
    {
        if(arr[i]==element)
        {
            return i;
        }
        return -1;

    }
}
int Binarysearch(int arr[],int size, int element)
{
    int low, mid, high;
    low =0;
    high = size-1;
    //start searching
    while(low<=high)
    {
        mid= (low+high)/2;
        if(arr[mid]==element)
        {
            return mid;
        }
        if(arr[mid]<element)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    //start ending
    return -1;

}
int main()
{
    //Unsorted array for linear search
    /*int arr[]= {0,56,45,3,4,2,55,66,12,98};
    int size = sizeof(arr)/sizeof(int);*/
    //sorted array for binary search
    int arr[]= {0,56,65,73,74,82,85,86,92,98};
    int size = sizeof(arr)/sizeof(int);
    int element=85;
    int searchindex = Binarysearch(arr,size,element);
    printf("The array %d is found at index %d\n",element,searchindex);
    return(0);
}
