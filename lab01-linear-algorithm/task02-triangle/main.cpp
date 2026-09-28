#include <iostream>
#include <cmath>

using namespace std;

int main() {

    /*
     * 1. Ввести основание a и высоту h. Найти площадь S = a*h/2.
     * 2. Ввести три стороны a, b, c и вычислить периметр и полупериметр.
     * 3. Ввести стороны a, b, c. Вычислить полупериметр p и площадь по формуле Герона S = sqrt(p*(p-a)*(p-b)*(p-c)).
    */

    double base {},
           height { 5 };
    double sideA {5},
           sideB {5},
           sideC {5};

    double perimeter { sideA + sideB + sideC };
    double semiPerimeter { perimeter / 2 };
    double squareHerons { sqrt(semiPerimeter * (semiPerimeter - sideA) * (semiPerimeter - sideB) * (semiPerimeter - sideC)) };

    base = { 2 * squareHerons / height };
    double square { base * height / 2 };

    cout << perimeter << endl;
    cout << semiPerimeter << endl;
    cout << square << endl;
    cout << squareHerons << endl;

    return 0;
}