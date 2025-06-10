#include <iostream>
using namespace std;

int main() {

    // اینجا میخوایم با دستورات شرطی آشنا بشیم، یعنی اینکه برنامه بتونه بر اساس یه شرط یه کاری کنه یا نکنه.

    int age;
    cout << "Salam! Senet ro vared kon: ";
    cin >> age;

    if (age >= 18) {
        cout << "To bozorg shodi! Mituni vote bedi." << endl;
    } else {
        cout << "هنوز کوچیکی، باید صبر کنی." << endl;
    }

    return 0;
}
