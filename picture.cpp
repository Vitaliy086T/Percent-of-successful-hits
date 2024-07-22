#include <iostream>
#include "picture.h"

using namespace std;

void picture() {
    system("cls");

    const int height = 7; // ������ ������������ (0-6, ����� 7 �����)
    const int width = 7;  // ������ ������������ (0-6, ����� 7 �������)

    for (int y = 0; y < height; y++) {
        cout << height - y - 1;
        for (int x = 0; x < width; x++) {
            // ������� ��� ��������� ������ ������������
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
