#include <iostream>
#include <string>
#include "triangle.h"
#include "picture.h"
#include "menu.h"

using namespace std;

int main() {
    string option = "";
    do {
        menu();
        cin >> option;
        if ((option.length() == 1) && (option == "1" || option == "2" || option == "3")) {
            switch(option[0]) {
                case '1':
                    picture();
                    break;
                case '2':
                    triangle();
                    break;
            }
        } else {
            cout << "Incorrect input" << endl;
            system("pause");
        }
    } while (option != "3");

    return 0;
}
