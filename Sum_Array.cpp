#include<iostream>
using namespace std;

int Sum_Array(int arr[] , int n)
{
    if(n<=0)
    {
        return 0;
    }

    else
    {
        return arr[n-1] + Sum_Array(arr , n-1);
    }
}

int main()
{
    int n;
    cout<<"Enter Number of Terms : ";
    cin>>n;
    int a[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }

    int Sum= Sum_Array( a , n );

    cout<<"Sum Of Elements in Given Array is : "<<Sum<<endl;

}