#include <iostream>
using namespace std;

// درودی دوباره!  
// اینجا با توابع آشنا میشیم.  
// تابع یعنی یه قطعه کد که اسم داره و هر وقت بخوای می‌تونی اون کد رو صدا بزنی.

void sayHello() {
    cout << "Salam! In ye function hast." << endl;
}

int add(int a, int b) {
    return a + b;
}

int main() {
    sayHello();

    int result = add(5, 7);
    cout << "Jam-e 5 va 7 = " << result << endl;

    return 0;
}
