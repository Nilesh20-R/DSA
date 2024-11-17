#include <iostream>
using namespace std;

void towerOfHanoi(int n, char F, char T, char A) {
    if (n == 1) {
        cout << "Move disk 1 from " << F << " to " << T << endl;
        return;
    }
    
    towerOfHanoi(n - 1, F, A, T);
    
    cout << "Move disk " << n << " from " << F << " to " << T << endl;
    
    towerOfHanoi(n - 1, A, T, F);
}

int main() {
    int n = 4;
 
    towerOfHanoi(n, 'A', 'C', 'B');
    
    return 0;
}