#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool areParenthesesBalanced(string exp) {
    stack<char> stack;
    for (char c : exp) {
        if (c == '(' || c == '{' || c == '[') {
            stack.push(c);
        } else if (c == ')' || c == '}' || c == ']') {
            if (stack.empty()) return false;
            if ((c == ')' && stack.top() != '(') ||
                (c == '}' && stack.top() != '{') ||
                (c == ']' && stack.top() != '[')) {
                return false;
            }
            stack.pop();
        }
    }
    return stack.empty();
}

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/' || op == '%') return 2;
    return 0;
}

string infixToPostfix(string infix) {
    stack<char> stack;
    string postfix = "";

    for (char c : infix) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
            postfix += c;
        } else if (c == '(') {
            stack.push(c);
        } else if (c == ')') {
            while (!stack.empty() && stack.top() != '(') {
                postfix += stack.top();
                stack.pop();
            }
            if (!stack.empty()) stack.pop();
        } else {
            while (!stack.empty() && precedence(c) <= precedence(stack.top())) {
                postfix += stack.top();
                stack.pop();
            }
            stack.push(c);
        }
    }

    while (!stack.empty()) {
        postfix += stack.top();
        stack.pop();
    }

    return postfix;
}

int main() {
    string expression;
    cout << "Enter an infix expression: ";
    getline(cin, expression);

    if (!areParenthesesBalanced(expression)) {
        cout << "Invalid expression: Unbalanced parentheses." << endl;
    } else {
        string postfix = infixToPostfix(expression);
        cout << "Postfix expression: " << postfix << endl;
    }

    return 0;
}
