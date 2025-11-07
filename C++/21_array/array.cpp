#include <iostream>
#include <windows.h>

using namespace std;
int main() {
    SetConsoleOutputCP(65001);

    // int arr[4];
    // arr[0] = 1;
    // arr[1] = 2;
    // arr[2] = 3;
    // arr[3] = 4;

    // int arr[4] = {1,2,3,4};
    // cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];

    // int arr[] = {1,2,3,4};
    // cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];

    // int arr[]{1,2,3,4};
    // cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];

    const int size = 10;
    int arr[size]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }
}