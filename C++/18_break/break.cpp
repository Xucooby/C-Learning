#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    cout << "The start of a cycle!" << endl;

    for (int i = 0; i <= 10; i++) {
        cout << i << endl;

        if (i == 5) {
        cout << "i equals 5" << endl;
        break;
        }
    }

    cout << "The end of a cycle!" << endl;
    return 0;
}