#include <iostream>
#include <cmath>

using namespace std;

int main() {

    /*
     * 1. Ввести радиус r. Вычислить диаметр d = 2*r.
     * 2. Вычислить длину окружности L = 2*pi*r и площадь S = pi*r*r. Значение pi принять равным 3.14159.
     * 3. Ввести радиусы двух кругов. Вычислить их площади, длины окружностей и разность площадей.
    */

    double pi { 3.14159 };

    double radiusC1 { 5 };
    double radiusC2 { 10 };

    double diameterC1 { 2 * radiusC1 };
    double lengthC1 { 2 * pi * radiusC1 };
    double squareC1 { pi * pow(radiusC1, 2) };

    double diameterC2 { 2 * radiusC2 };
    double lengthC2 { 2 * pi * radiusC2 };
    double squareC2 { pi * pow(radiusC2, 2) };

    double difference { squareC2 - squareC1 };

    cout << "CIRCLE 1 INFO" << "\n";
    cout << diameterC1 << "\n";
    cout << lengthC1 << "\n";
    cout << squareC1 << "\n";

    cout << "CIRCLE 2 INFO" << "\n";
    cout << diameterC2 << "\n";
    cout << lengthC2 << "\n";
    cout << squareC2 << "\n";

    cout << "CIRCLE DIFFERENCES " << difference << "\n";

    return 0;
}