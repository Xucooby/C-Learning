#include <iostream>
#include <windows.h>

using namespace std;

int main () {
    SetConsoleOutputCP(65001);
    int firstNumber;
    int secondNumber;
    char action;
    int result;
    cout<<"Enter a two numbers:";
    cin>>firstNumber>>secondNumber;
    cout<<"You entered numbers: "<<firstNumber<<" and "<<secondNumber<<endl;
    cout<<"What action do you want to take with them? * / + - %"<<endl;
    cin>>action;
    switch (action) {
        case '*': {
            result = firstNumber * secondNumber;
            cout<<"The result is: "<<result<<endl;
            cout<<firstNumber<<action<<secondNumber<<"="<<result<<endl;
        }
            break;
        case '/': {
            result = firstNumber / secondNumber;
            cout<<"The result is: "<<result<<endl;
            cout<<firstNumber<<action<<secondNumber<<"="<<result<<endl;
        }
            break;
        case '+': {
            result = firstNumber + secondNumber;
            cout<<"The result is: "<<result<<endl;
            cout<<firstNumber<<action<<secondNumber<<"="<<result<<endl;
        }
            break;
        case '-': {
            result = firstNumber - secondNumber;
            cout<<"The result is: "<<result<<endl;
            cout<<firstNumber<<action<<secondNumber<<"="<<result<<endl;
        }
            break;
        case '%': {
            result = firstNumber % secondNumber;
            cout<<"The result is: "<<result<<endl;
            cout<<firstNumber<<action<<secondNumber<<"="<<result<<endl;
        }
            break;
        default:
            cout<<"Dont know this action!"<<endl;
            break;
    }
}