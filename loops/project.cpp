#include <iostream>
using namespace std;

int main() {
    // پروژه: محاسبه فاکتوریل یه عدد

    int num;
    unsigned long long factorial = 1;

    cout << "Yek adad vared kon baraye hesab factorial: ";
    cin >> num;

    if (num < 0) {
        cout << "Manfi nemishe factorial hesab kard!" << endl;
    } else {
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }
        cout << "Factorial-e " << num << " = " << factorial << endl;
    }

    return 0;
}
