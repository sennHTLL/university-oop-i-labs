#include <iostream>

using namespace std;

int main() {
    /*
     * 1. цикл for. ввести рост 5 студентов и найти максимальный рост
     * 2. цикл while. вводить значения роста до 0 и подсчитать количество значений выше 170 см
     * 3. цикл do...while. запрашивать рост до тех пор, пока значение не попадёт в диапазон 100–230 см
     */

    cout << "===== ===== TASK 1 | FOR ===== =====" << "\n";

    int numOfStudents { 5 };
    int height {};
    int maxHeight {};

    cout << "Введите рост студентов: " << "\n";

    for (int i = 1; i <= numOfStudents; i++) {
        cin >> height;

        if (height > maxHeight) {
            maxHeight = height;
        }
    }

    cout << "Максимальный рост: " << maxHeight << "\n";

    cout << "===== ===== TASK 2 | WHILE ===== =====" << "\n";

    height = 0;
    int heightCount {};
    int plank { 170 };

    cout << "Введите рост - ";
    cin >> height;

    while (height != 0) {

        if (height > plank) {
            heightCount++;
        }

        cout << "Введите рост - ";
        cin >> height;
    }

    cout << "Кол-во роста выше 170 = " << heightCount << "\n";

    cout << "===== ===== TASK 3 | DO WHILE ===== =====" << "\n";

    height = 0;
    bool inRange { false };

    do {
        cout << "Введите рост - ";
        cin >> height;

        if (height > 100 && height < 230) {
            inRange = true;
        }

    } while (!inRange);

    return 0;
}