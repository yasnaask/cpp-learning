#include <iostream>
using namespace std;

int main() {
    // پروژه: تشخیص عدد زوج یا فرد

    int num;
    cout << "Ye adad vared kon: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << num << " adad zoj hast." << endl;
    } else {
        cout << num << " adad fard hast." << endl;
    }

    return 0;
}
