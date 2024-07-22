#include <iostream>
#include "triangle.h"

using namespace std;

void triangle() {
    system("cls");
    float x, y;
    float count1 = 0, count2 = 0;
    cout << "To exit press Enter\n" << endl;
    do {
        cout << "Input coordinates (x and y): ";
        cin >> x >> y;
        count1++;
        if ((x <= 6 && y <= 6) && (x >= 0 && y >= 0) && (x >= y)) {
            count2++;
        }
        cout << "Percent is " << (count2 / count1) * 100 << "%" << endl << "To continue press y" << endl;

        cin.ignore(); 
        char ch = cin.get(); 

        if (ch == '\n') {
            break; 
        }
    } while (true);
}
