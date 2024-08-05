#include <iostream>  
using namespace std;  
  
int linearSearch(int arr[], int n, int t) {  
    for (int i = 0; i < n; i++) {  
        if (arr[i] == t) {  
            return i;  
        }  
    }  
    return -1;  
}  
  
int main() {  
    int data[] = {12, 45, 78, 23, 56, 89, 67, 34, 90};  
    int n = sizeof(data) / sizeof(data[0]);  
    int t;
    cout<<"Enter Target : ";
    cin>>t;  
  
    int result = linearSearch(data, n, t);  
  
    if (result != -1) {  
        cout << "Element found at index " << result << endl;  
    } else {  
        cout << "Element not found in the array." << endl;  
    }  
  
    return 0;  
}  
