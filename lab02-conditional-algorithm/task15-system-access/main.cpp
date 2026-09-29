#include <iostream>

using namespace std;

int main() {
    /*
     * 1. Ввести целое значение возраста. Разрешить доступ, если возраст не меньше 18
     * 2. Ввести возраст и логическую переменную hasPermission.
     *    Доступ разрешить, если возраст не меньше 18 и разрешение имеется.
     * 3. Ввести возраст, наличие разрешения и статус блокировки isBlocked.
     *    Доступ разрешить только если возраст >= 18, hasPermission == true и isBlocked == false.
    */

    int age { 20 };
    bool hasPermission { true };
    bool isBlocked { true };

    if (age >= 18 && hasPermission && !isBlocked) {
        cout << "разрешено" << endl;
    } else {
        cout << "запрещено" << endl;
    }

    return 0;
}