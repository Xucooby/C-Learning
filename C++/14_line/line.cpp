//вывод линии с помощью while

#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    char symbol;
    int quantity;
    int direction;
    int a = 0;

    cout << "This program outputs a line of symbols" << endl;
    cout << "Enter a random symbol:";
    cin >> symbol;
    cout << "Enter a random quantity of symbols:";
    cin >> quantity;
    cout << "Enter a number of a line direction:" << endl << "1.Vertical" << endl << "2.Horizontal" << endl;
    cin >> direction;
    cout << "You entered: " << endl << "Symbol: " <<symbol << endl << "Quantity: " << quantity << endl << "Direction: " << direction << endl;
    cout << "Line: " << endl;

    while (a < quantity) {
        if (direction == 1) {
            cout << symbol << endl;
        }
        if (direction == 2) {
            cout << quantity;
        }
        a++;
    }
}