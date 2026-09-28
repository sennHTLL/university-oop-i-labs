#include <iostream>
#include <cmath>

using namespace std;

int main() {
    /*
     * 1. Ввести длину a и ширину b прямоугольника. Найти площадь и периметр.
     * 2. Дополнительно вычислить длину диагонали d = sqrt(a*a + b*b). Для использования sqrt подключить <cmath>.
     * 3. Ввести стоимость одного квадратного метра материала.
     *    Вычислить площадь, периметр, диагональ и общую стоимость покрытия прямоугольника.
    */

    double costPerSquareMeter {}, height {}, width {};

    cout << "Enter cost per square meter / height / width: ";
    cin >> costPerSquareMeter >> height >> width;

    double perimeter { (width + height) * 2 };
    double square { width * height };
    double diagonal { sqrt(width * width + height * height) };

    double costCoverage { costPerSquareMeter * square };

    cout << "Cost per square meter: " << costPerSquareMeter << "\n";
    cout << "Height: " << height << " / Width: " << width << "\n";
    cout << "Perimeter: " << perimeter << "\n";
    cout << "Square: " << square << "\n";
    cout << "Diagonal: " << diagonal << "\n";
    cout << "Cost of coverage: " << costCoverage << "\n";

    return 0;
}