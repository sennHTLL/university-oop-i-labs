#include <iostream>
#include <cmath>

using namespace std;

int main() {

    /*
     * 1. Ввести радиус r. Вычислить диаметр d = 2*r.
     * 2. Вычислить длину окружности L = 2*pi*r и площадь S = pi*r*r. Значение pi принять равным 3.14159.
     * 3. Ввести радиусы двух кругов. Вычислить их площади, длины окружностей и разность площадей.
    */

    double pi { 3.14159};

    double radiusC1 { 5 };
    double radiusC2 { 10 };

    double diameterC1 { 2 * radiusC1 };
    double lengthC1 { 2 * pi * radiusC1 };
    double squareC1 { pi * radiusC1 * radiusC1 };

    double diameterC2 { 2 * radiusC2 };
    double lengthC2 { 2 * pi * radiusC2 };
    double squareC2 { pi * radiusC2 * radiusC2 };

    cout << "CIRCLE 1 INFO" << endl;
    cout << diameterC1 << endl;
    cout << lengthC1 << endl;
    cout << squareC1 << endl;

    cout << "CIRCLE 2 INFO" << endl;
    cout << diameterC2 << endl;
    cout << lengthC2 << endl;
    cout << squareC2 << endl;

    return 0;
}