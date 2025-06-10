#include <iostream>
using namespace std;

int main() {
    // پروژه: پیدا کردن بزرگ‌ترین عدد در آرایه

    int size;
    cout << "Tedade adad ro vared kon: ";
    cin >> size;

    int arr[size];  // آرایه به اندازه ورودی کاربر

    cout << "Adadha ro vared kon:\n";
    for (int i = 0; i < size; i++) {
        cout << "Adad " << i + 1 << ": ";
        cin >> arr[i];
    }

    int maxNum = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > maxNum) {
            maxNum = arr[i];
        }
    }

    cout << "Bozorgtarin adad: " << maxNum << endl;

    return 0;
}
