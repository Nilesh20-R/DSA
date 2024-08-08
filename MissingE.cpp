#include<iostream>
using namespace std;

void Miss_Element(int *a , int n);

int main()
{
   int a[5] ={15,16,17,18,20} ;
   Miss_Element(a,5) ;
   
   return 0;
}

void Miss_Element(int *a, int n)
{
    for(int i=0;i<n-1;i++)
    {
        int lsb1= a[i] &1 ; 
        int lsb2= a[i+1] &1 ;
        if(lsb1 == lsb2)
        {
            cout<< " Missing Element is : "<<(a[i] + a[i+1])/2 ;
        }
    }
}