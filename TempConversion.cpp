#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "Konversi Suhu" << endl;
    cout << "-----------------" << endl;

    double celsius, reamur, fahrenheit;
    char degree_symbol = char(248);
    cout << "Input Celsius:   ";
    if (!(cin >> celsius)) {
        cerr << "Input tidak valid. Harap masukkan nilai angka untuk suhu." << endl;
        return 1;
    }
    cout << "                 " << degree_symbol << "C" << endl;


    reamur = celsius * 4.0 / 5.0;

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    cout << "Konversi     : " << endl;

    cout << fixed << setprecision(0);

    cout << reamur << " " << degree_symbol << "R" << endl;

    cout << fahrenheit << " " << degree_symbol << "F" << endl;

    return 0;
}
