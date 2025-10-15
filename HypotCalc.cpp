#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Hitung sisi miring" << endl;
    cout << "  |\\" << endl;
    cout << "  | \\" << endl;
    cout << "  |  \\" << endl;
    cout << "  |   \\" << endl;
    cout << "a |    \\ c" << endl;
    cout << "  |     \\" << endl;
    cout << "  |      \\" << endl;
    cout << "  ----------" << endl;
    cout << "    b" << endl;
    cout << endl;

    double a, b, c;

    cout << "Masukkan sisi a dan b: ";
    if (!(cin >> a >> b)) {
        return 1;
    }

    c = sqrt(pow(a, 2) + pow(b, 2));

    cout << "Sisi miring c        : " << c << endl;

    return 0;
}
