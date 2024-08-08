#include<iostream>
using namespace std;

void Pair_Sum(int *a, int n)
{
    cout<<" Pair of Elements are : "<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)  
        {
            for(int k=0;k<n;k++)
            {
                if(a[i] + a[j] == a[k])
                {
                    cout<<"("<<a[i]<<", "<<a[j]<<")"<<endl; 
                }
            }
        }
    }
}

int main()
{
    int arr[]= {2,5,6,11,17,7,8,10,13,14,25} ;
    int n= sizeof(arr)/sizeof(arr[0]) ;
    Pair_Sum(arr,n) ;

    return 0;
}








