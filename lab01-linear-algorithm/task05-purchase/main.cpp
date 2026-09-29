#include <iostream>

using namespace std;

int main() {

    /*
     * 1. Ввести цену одного товара и количество. Найти стоимость покупки.
     * 2. Ввести цены и количества двух товаров. Найти стоимость каждого вида товара и общую стоимость покупки.
     * 3. Ввести цену, количество и процент скидки. Вычислить стоимость без скидки, величину скидки и итоговую стоимость.
    */

    double price1 { 500 };
    double quantity1 { 5 };

    double price2 { 100 };
    double quantity2 { 10 };

    cout << "Товар 1. Цена - " << price1 << " тг. Кол-во - " << quantity1 << "\n";
    cout << "Товар 2. Цена - " << price2 << " тг. Кол-во - " << quantity2 << "\n";

    double cost1 { price1 * quantity1 };
    double cost2 { price2 * quantity2 };

    cout << "Стоимость товара 1 - " << cost1 << "\n";
    cout << "Стоимость товара 2 - " << cost2 << "\n";

    double totalCost { cost1 + cost2 };

    cout << "Стоимость покупки - " << totalCost << "\n";

    return 0;
}