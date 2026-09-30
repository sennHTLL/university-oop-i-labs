#include <iostream>

using namespace std;

int main() {
    /*
    * 1. цикл for. вычислить a в степени n без использования pow().
    * 2. цикл while. вводить числа до 0 и найти максимальное среди введённых ненулевых.
    * 3. цикл do...while. запрашивать показатель степени n до ввода неотрицательного значения.
    */

    cout << "===== ===== TASK 1 | FOR ===== ======" << "\n";
    int num { 2 };
    int power { 8 };
    int result { 1 };

    for (int i = 1; i <= power; i++) {
        result *= num;
    }

    cout << result << "\n";

    cout << "===== ===== TASK 2 | WHILE ===== ======" << "\n";
    int notNullNum {};
    int maxNNN {};

    cout << "Введите число: ";
    cin >> notNullNum;

    while (notNullNum != 0) {
        if (notNullNum > maxNNN) {
            maxNNN = notNullNum;
        }

        cout << "Введите число: ";
        cin >> notNullNum;
    }

    cout << "Макс. число: " << maxNNN << "\n";

    cout << "===== ===== TASK 3 | DO WHILE ===== ======" << "\n";

    power = 0;

    do {
        cout << "Введите показатель степени: ";
        cin >> power;
    } while (power >= 0);

    return 0;
}