//сумма нечётных чисел в диапозоне который ввёл пользователь

#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    int start, end;
    int result = 0;

    cout << "Specify the range of numbers:";
    cin >> start >> end;

    do {
        if (start % 2 != 0) {
            result += start;
        }
        start++;
    }
    while (start <= end);

    cout << "Result of oddsum: " <<result;

    return 0;
}