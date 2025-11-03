//вывод линии с помощью do_while

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

    if (direction == 1) {
        do {
            cout << symbol << endl;
            a++;
        }
        while (a < quantity);
    }
    else if (direction == 2) {
        do {
            cout << symbol;
            a++;
        }
        while (a < quantity);
    }
    else {
        cout << "There is no such direction here";
    }

    return 0;
}