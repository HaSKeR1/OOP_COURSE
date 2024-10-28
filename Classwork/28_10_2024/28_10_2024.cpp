#include <iostream>

class Calculator {
public:
    double solve(double leftOperand, double rightOperand, char operation) {
        if (operation == '+') {
            return leftOperand + rightOperand;
        } else if (operation == '-') {
            return leftOperand - rightOperand;
        } else if (operation == '*') {
            return leftOperand * rightOperand;
        } else if (operation == '/') {
            return leftOperand / rightOperand;
        } else {
            throw "Invalid input operation";
        }
        return 0;
    }
};

int main()
{
    try {
        Calculator calculator;
        double result = calculator.solve(5, 6, '/');
        std::cout << result;
        return 0;
    }
    catch (...) {
        std::cout << "Error!";
    }
}