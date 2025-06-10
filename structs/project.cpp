#include <iostream>
using namespace std;

// ساختار مخاطب
struct Contact {
    string name;
    string phone;
};

int main() {
    // پروژه: دفترچه مخاطبین ساده

    int tedad;
    cout << "Chand ta mokhatab mikhay sabt koni? ";
    cin >> tedad;

    Contact daftarche[tedad];

    // گرفتن اطلاعات مخاطبین
    for (int i = 0; i < tedad; i++) {
        cout << "\nMokhatab " << i + 1 << endl;
        cout << "Esm: ";
        cin >> ws; // برای خالی کردن بافر ورودی
        getline(cin, daftarche[i].name);
        cout << "Shomare: ";
        getline(cin, daftarche[i].phone);
    }

    // نمایش لیست مخاطبین
    cout << "\n***** Liste Mokhatabin *****" << endl;
    for (int i = 0; i < tedad; i++) {
        cout << "Esm: " << daftarche[i].name << " | Shomare: " << daftarche[i].phone << endl;
    }

    return 0;
}
