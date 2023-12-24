#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char op;

    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите оператор (+, -, *, /): ";
    cin >> op;
    cout << "Введите второе число: ";
    cin >> num2;

    switch (op) {
        case '+':
            cout << "Результат: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Результат: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Результат: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Результат: " << num1 / num2 << endl;
            } else {
                cout << "Ошибка: деление на ноль" << endl;
            }
            break;
        default:
            cout << "Ошибка: некорректный оператор" << endl;
    }

    return 0;
}