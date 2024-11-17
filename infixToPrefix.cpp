#include<bits/stdc++.h>
using namespace std;

int precedence(char x) {
    if(x == '+' || x == '-') return 1;
    if(x == '*' || x == '/') return 2;
    if(x == '^') return 3;
    else return -1;
}

bool isOperand(char x) {
    return ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'));
}

string infixToPrefix(string infix) {
    stack<char> st;
    string prefix = "";
    reverse(infix.begin(), infix.end());
    
    for(int i = 0; i < infix.length(); i++) {
        char ch = infix[i];
        if(isOperand(ch)) {
            prefix += ch;
        } else if(isspace(ch)) {
            continue;
        } else if(ch == ')') {
            st.push(')');
        } else if(ch == '(') {
            while(st.top() != ')') {
                prefix += st.top();
                st.pop();
            }
            st.pop();
        } else {
            while(!st.empty() && precedence(st.top()) > precedence(ch)) {
                prefix += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }
    
    while(!st.empty()) {
        prefix += st.top();
        st.pop();
    }
    
    reverse(prefix.begin(), prefix.end());
    return prefix;
}

int main() {
    string infix = "((a+(b*c))-d)";
    cout << infixToPrefix(infix) << endl;
    return 0;
}
