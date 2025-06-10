#include <iostream>
using namespace std;

int main() {
    // این قسمت با آرایه‌ها آشنا می‌شیم.  
    // آرایه یعنی یه مجموعه از داده‌های هم‌نوع که کنار هم ذخیره شدن.

    int numbers[5] = {10, 20, 30, 40, 50};

    cout << "Arayesho be tartib chap mikonim:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
