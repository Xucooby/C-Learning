#include <iostream>
#include <windows.h>

using namespace std;
int main() {
    SetConsoleOutputCP(65001);

    int len;
    int wid;

    cout << "Enter a lenght: ";
    cin >> len;
    cout << "Enter a width: ";
    cin >> wid;

    for (int a = 1; a <= wid; a++) {
        for (int b = 1; b <= len; b++) {
            cout << "*";
        }
        cout << endl;
    }
}
