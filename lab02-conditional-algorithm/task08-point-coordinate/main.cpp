#include <iostream>

using namespace std;

int main() {
    /*
     * 1. Ввести координату x. Определить, находится ли точка справа или слева от начала координат, либо в начале координат
     * 2. Ввести x и y. Определить, лежит ли точка на одной из координатных осей
     * 3. Ввести x и y. Определить четверть координатной плоскости или указать, что точка лежит на оси/в начале координат
    */

    int coordinateX { -1 }, coordinateY { -1 };

    if (coordinateX > 0) {
        cout << "точка X справа" << endl;
    } else if (coordinateX < 0) {
        cout << "точка X слева" << endl;
    } else {
        cout << "точка X в начале" << endl;
    }

    if (coordinateX > 0 && coordinateY > 0) {
        cout << "I четверть" << endl;
    } else if (coordinateX < 0 && coordinateY > 0) {
        cout << "II четверть" << endl;
    } else if (coordinateX < 0 && coordinateY < 0) {
        cout << "III четверть" << endl;
    } else if (coordinateX > 0 && coordinateY < 0) {
        cout << "IV четверть" << endl;
    } else if (coordinateX == 0 && coordinateY == 0) {
        cout << "точка в начале" << endl;
    } else if (coordinateX == 0) {
        cout << "точка на оси Y" << endl;
    } else {
        cout << "точка на оси X" << endl;
    }

    return 0;
}