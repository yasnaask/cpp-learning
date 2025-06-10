#include <iostream>
using namespace std;

// پروژه: ماشین حساب ساده با توابع

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Taghsim bar sefr nemishe!" << endl;
        return 0;
    }
    return a / b;
}

int main() {
    double num1, num2;
    char op;

    cout << "Adad aval ro vared kon: ";
    cin >> num1;

    cout << "Amaliat (+, -, *, /) ro vared kon: ";
    cin >> op;

    cout << "Adad dovom ro vared kon: ";
    cin >> num2;

    double result;

    if (op == '+') {
        result = add(num1, num2);
    } else if (op == '-') {
        result = subtract(num1, num2);
    } else if (op == '*') {
        result = multiply(num1, num2);
    } else if (op == '/') {
        result = divide(num1, num2);
    } else {
        cout << "Amaliat ghalat vared shod!" << endl;
        return 1;
    }

    cout << "Natije: " << result << endl;

    return 0;
}
