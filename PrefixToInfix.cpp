#include <bits/stdc++.h>
using namespace std;

bool isOperand(char x) {
    return (x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z');
}

string getInfix(string exp) {
    stack<string> s;
    
    for (int i = exp.length() - 1; i >= 0; i--) {
        if (isOperand(exp[i])) {
            s.push(string(1, exp[i]));  // Push the operand (single character) to stack
        } else {
            string op1 = s.top();
            s.pop();
            string op2 = s.top();
            s.pop();
            s.push("(" + op1 + exp[i] + op2 + ")");
        }
    }
    return s.top();
}

int main() {
    string exp = "*-A/BC-/AKL";
    cout << getInfix(exp) << endl;
    return 0;
}
