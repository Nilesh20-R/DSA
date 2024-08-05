#include<iostream>
using namespace std;

int main()
{
    int v;
    cout<<"Enter Velocity : ";
    cin>>v;
    int count=0;

    while(v>0)
    {
        v=v/2;
        count++;
    }

    cout<<"Number of Dips is "<<count<<endl;    
}