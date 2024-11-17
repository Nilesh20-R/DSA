#include<iostream>
using namespace std ;

int partition(int arr[], int s, int e, int k)
{
    int start = s ;
    int end = e ;
    int pivot = arr[e-k] ;

    while(start<=end)
    {
        while(arr[start] <= pivot)
        {
            start++ ;
        }
        while(arr[end] > pivot)
        {
            end-- ;
        }
        if(start<end)
        {
            swap(arr[start],arr[end]) ;
        }
    }
    swap(arr[e-k],arr[end]) ;
    return end ;
}

void topKSmallest(int arr[],int s, int e, int k)
{
    if(s<=e)
    {
        int p = partition(arr,s,e,k) ;

        for(int i=0;i<p;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int arr[] ={15,18,14,20,13} ;
    int k = 3 ;
    int n = sizeof(arr)/sizeof(arr[0]) ;
    topKSmallest(arr,0,n-1,k) ;

    return 0 ;
}