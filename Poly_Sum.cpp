#include<iostream>
#include<math.h>
using namespace std;

void Poly_Sum(int *a , int x , int n)
{
   int sum= 0;

   for(int i=0;i<n;i++)
   {
      sum = sum + (a[i] * pow(x,i)) ;
   }

   cout<<"Sum of polynomial is= "<< sum <<endl;
}

int main()
{
    int arr[]= {2,4,7,1,3,6,9} ;

    int n= sizeof(arr)/sizeof(arr[0]) ;

    int x;

    cout<<"Enter the value of X- ";
    cin>>x ;

    Poly_Sum(arr,x,n) ;

}