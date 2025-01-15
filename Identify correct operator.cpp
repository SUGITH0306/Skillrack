#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string input, expr, result, a, b, op;
    std::getline(std::cin, input);

    // Split input into expression and result
    size_t eqPos = input.find('=');
    expr = input.substr(0, eqPos);
    result = input.substr(eqPos + 1);

    // Find operator in the expression
    for (size_t i = 0; i < expr.length(); i++) {
        if (expr[i] == '+' || expr[i] == '-' || expr[i] == '*' || expr[i] == '/') {
            a = expr.substr(0, i);
            b = expr.substr(i + 1);
            break;
        }
    }

    // Check for the correct operator
    for (char c : "+-*/") {
        double lhs = std::stod(a);
        double rhs = std::stod(b);
        double res = 0;

        if (c == '+') res = lhs + rhs;
        else if (c == '-') res = lhs - rhs;
        else if (c == '*') res = lhs * rhs;
        else if (c == '/' && rhs != 0) res = lhs / rhs;

        if (static_cast<int>(res) == std::stoi(result)) {
            std::cout << c << std::endl;
            break;
        }
    }

    return 0;
}

Example 1:
Input:
5-4=20
Output:
*
Example 2:
Input:
999+9=111
Output:
/
