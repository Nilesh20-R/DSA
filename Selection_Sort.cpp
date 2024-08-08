#include<iostream>
using namespace std;

void S_Sort(int arr[] , int n);

void Display(int arr[] , int n);

int main()
{
    //int a[10]= {10,45,101,123,145,8,7,54,50,47}
    int a[10];
    cout<<"Enter an Array : "<<endl;

    for(int i=0 ; i<10 ; i++)
    {
        cin>>a[i];
    }

    S_Sort(a,10);

    Display(a,10);

}

void S_Sort(int arr[] , int n)
{
    for(int i=0 ; i<(n-1) ; i++)
    {
        for(int j=i+1 ; j<n ; j++)
        {
            if( arr[j] < arr[i] )
            {
                swap(arr[i] , arr[j]);
            }
        }
    }
}

void Display(int arr[] , int n)
{
    cout<<"Sorted Array is : "<<endl;
    
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}