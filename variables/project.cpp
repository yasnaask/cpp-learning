#include <iostream>
using namespace std;

int main() {
    // پروژه: برنامه محاسبه محیط و مساحت مستطیل
    // rafiq az to mikham tool va arz e rectangle ro begiri,
    // ba estefade az formula ha mohit va masahat ro hesab konim

    double tool, arz;

    cout << "Salam! Tool rectangle ro vared kon: ";
    cin >> tool;

    cout << "Arz rectangle ro vared kon: ";
    cin >> arz;

    double mohiyat = 2 * (tool + arz);
    double masahat = tool * arz;

    cout << "Mohiyat rectangle = " << mohiyat << endl;
    cout << "Masahat rectangle = " << masahat << endl;

    return 0;
}
