#include <iostream>
#include <stack>
#include <cmath>

class FastExpr {
public:
    static int evaluateExpression(const std::string& expression) {
        std::stack<int> values;
        std::stack<char> ops;

        for (char ch : expression) {
            if (ch == ' ') {
                continue;
            }

            if (isdigit(ch)) {
                values.push(ch - '0');
            } else if (ch == 'a') {
                ops.push(ch);  // abs function
            } else if (ch == '+' || ch == '-' || ch == '*') {
                ops.push(ch);
            } else if (ch == ')') {
                int val = values.top();
                values.pop();

                if (ops.top() == 'a') {
                    values.push(abs(val));
                    ops.pop();
                } else {
                    int prevVal = values.top();
                    values.pop();
                    char op = ops.top();
                    ops.pop();

                    if (op == '+') {
                        values.push(prevVal + val);
                    } else if (op == '-') {
                        values.push(prevVal - val);
                    } else if (op == '*') {
                        values.push(prevVal * val);
                    }
                }
            }
        }

        return values.top();
    }
};

int main() {
    std::string expression;
    std::cout << "Nhap bieu thuc: ";
    std::getline(std::cin, expression);

    int result = FastExpr::evaluateExpression(expression);

    std::cout << "Ket qua: " << result << std::endl;

    return 0;
}
