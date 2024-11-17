#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> solve(int k, int n, string current)
{
     vector<string> ans ;

    // base case
    if(k>n)
    {
        ans.push_back(current) ;
        return ans;
    }

    else{
          vector<string> resultT =  solve(k+1,n,current+'T') ;
          ans.insert(ans.end(), resultT.begin(), resultT.end()) ;
          vector<string> resultF= solve(k+1,n,current+'F') ;
          ans.insert(ans.end(), resultF.begin(), resultF.end()) ;
    }
    return ans ;
}

int main()
{
    int n;
    cout<<"enter n to make the different possible combinations of true and false: "<<endl;
    cin>>n ;
    vector<string> res= solve(1,n,"") ;
    for (const string& step : res) 
    {
        cout << step << endl;
    }

    return 0;
}