#include <iostream>

using namespace std;

int main() {
    /*
     * 1. цикл for. ввести n чисел и вычислить сумму только положительных значений
     * 2. цикл while. вводить числа до 0 и определить количество отрицательных и положительных значений
     * 3. цикл do...while. запрашивать n до тех пор, пока n не станет положительным;
     *    после этого вывести сообщение о принятом значении
     */

    cout << "===== TASK - 1 - FOR =====" << "\n";

    int positiveSum = 0;
    int maxNum = 0;
    int numFOR = 0;

    cout << "Введите максимальное кол-во чисел: ";
    cin >> maxNum;
    cout << "Введите сами числа: " << "\n";

    for (int i = 0; i < maxNum; i++) {
        cin >> numFOR;

        if (numFOR > 0) {
            positiveSum += numFOR;
        }
    }

    cout << "Сумма положительных чисел: " << positiveSum << endl;

    cout << "===== TASK - 2 - WHILE =====" << "\n";

    int negativeCount = 0;
    int positiveCount = 0;
    int numWHILE;

    cout << "Введите число (0 - конец): ";
    cin >> numWHILE;

    while (numWHILE != 0) {
        if (numWHILE > 0) {
            positiveCount++;
        } else {
            negativeCount++;
        }

        cout << "Введите число (0 - конец): ";
        cin >> numWHILE;
    }

    cout << "Кол-во положительных: " << positiveCount << "\n";
    cout << "Кол-во отрицательных: " << negativeCount << "\n";

    cout << "===== TASK - 3 - DO WHILE =====" << "\n";

    int numDOWHILE = 0;

    do {
        cout << "Введите число: ";
        cin >> numDOWHILE;
    } while (numDOWHILE <= 0);

    cout << "Принято значение: " << numDOWHILE << "\n";

    return 0;
}