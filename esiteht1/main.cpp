#include <iostream>

using namespace std;

class BasicALU {

public:
    BasicALU() {  cout<<"BasicALU constructor!! "<<endl;}

    double sum(double a, double b) {
        return a + b;
    }

    double sub(double a, double b) {
        return a - b;
    }

    double mul(double a, double b) {
        return a * b;
    }

    double div(double a, double b) {
        if (b != 0) {
            return a / b;
        } else {
            cout << "Error: Division by zero!" << endl;
            return 0.0; // You can handle this error in a more appropriate way if needed.
        }
    }
};

class Calculator {
private:
    double op1, op2, result;
    char operation;

public:
    Calculator() {
        cout << "Calculator constructor!!" << endl;
    }

    void inputOperands() {
        cout << "Give first operand" << endl;
        cin >> op1;

        cout << "Give operation +, -, * or / " << endl;
        cin >> operation;

        cout << "Give second operand" << endl;
        cin >> op2;
    }

    void calculateResult() {
        BasicALU alu; // Create an instance of BasicALU

        switch (operation) {
        case '+':
            result = alu.sum(op1, op2);
            break;
        case '-':
            result = alu.sub(op1, op2);
            break;
        case '*':
            result = alu.mul(op1, op2);
            break;
        case '/':
            result = alu.div(op1, op2);
            break;
        default:
            cout << "No such operation!" << endl;
        }
    }

    void showResults() {
        cout << op1 << "" << operation << "" << op2 << " = " << result << endl;
    }

    void giveResult(Calculator &calc) {
        cout << calc.op1 << "" << calc.operation << "" << calc.op2 << " = " << calc.result << endl;
    }
};
