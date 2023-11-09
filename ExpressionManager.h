#ifndef EXPRESSION_MANAGER_H
#define EXPRESSION_MANAGER_H

#include <string>
#include <stack>

class ExpressionManager {
public:
    std::string convertInfixToPostfix(const std::string& infix);
private:
    bool isOperator(char c) const;
    int precedence(char op) const;
    bool areParenthesesBalanced(const std::string& expression) const;
};

#endif //EXPRESSION_MANAGER_H
