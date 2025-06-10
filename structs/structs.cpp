#include <iostream>
using namespace std;

// تعریف یه ساختار ساده به اسم Contact
struct Contact {
    string name;
    string phone;
    int age;
};

int main() {

    // اینجا می‌خوایم با ساختارها (structs) آشنا بشیم.  
    // ساختار به ما کمک می‌کنه چندتا داده‌ی مرتبط رو کنار هم نگه داریم.

    Contact myFriend;

    myFriend.name = "Yasna";
    myFriend.phone = "09121234567";
    myFriend.age = 25;

    cout << "Esm: " << myFriend.name << endl;
    cout << "Shomare: " << myFriend.phone << endl;
    cout << "Sen: " << myFriend.age << endl;

    return 0;
}
