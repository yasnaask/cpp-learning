#include <iostream>
#include <string>
using namespace std;

int main() {
    // پروژه: شمارش حروف، اعداد و کاراکترهای دیگه در یک رشته

    string text;
    int countLetters = 0, countDigits = 0, countOthers = 0;

    cout << "Yek matn vared kon: ";
    getline(cin, text);

    for (char ch : text) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            countLetters++;
        } else if (ch >= '0' && ch <= '9') {
            countDigits++;
        } else {
            countOthers++;
        }
    }

    cout << "Tedade harf ha: " << countLetters << endl;
    cout << "Tedade adad: " << countDigits << endl;
    cout << "Tedade digar karaktar ha: " << countOthers << endl;

    return 0;
}
