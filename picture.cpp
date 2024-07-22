#include <iostream>
#include "picture.h"

using namespace std;

void picture() {
    system("cls");

    const int height = 7; // Высота треугольника (0-6, всего 7 строк)
    const int width = 7;  // Ширина треугольника (0-6, всего 7 колонок)

    for (int y = 0; y < height; y++) {
        cout << height - y - 1;
        for (int x = 0; x < width; x++) {
            // Условия для отрисовки границ треугольника
            if (x == 6 || y == 6 || x == 6 - y) {
                cout << '*';
            } else {
                cout << ' ';
            }
        }
        cout << endl;
    }
    cout << " ";
    for (int i = 0; i < height; i++) {
        cout << i;
    }
    cout << endl;
    system("pause");
}
