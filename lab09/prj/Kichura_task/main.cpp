#include <iostream>
#include <cctype>
#include <clocale>
#include "ModulesKichura.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    while (true) {
        char data;
        char exit;
        cout << "������ j, z, x ��� c: ";
        cin >> data;

        switch (data) {
            case 'j':
                double x, z;
                cout << "������ x: ";
                cin >> x;
                cout << "������ z: ";
                cin >> z;
                cout << "s = " << s_calculation(x, z) << endl;
                break;
            case 'z':
                float value;
                int grade;
                cout << "������ ������ ����� � ������: ";
                cin >> value;
                grade = getGrade(value);
                cout << "��� ����������: " << grade << endl;
                break;
            case 'x': {
                float farenheit;
                float celsius;

                cout << "������ ������� ������� �� ������ ����������: ";
                cin >> farenheit;

                celsius = getCelsius(farenheit);

                cout << "ʳ������ ������� �� ������ ������: " << celsius << endl;
                break;
            }
            case 'c':
                int n;
                int result;
                cout << "������ N: ";
                cin >> n;
                result = t9_3(n);
                if (result == -1)
                    cout << "������� ����������� ����." << endl;
                else
                    cout << "���������: " << result << endl;
                break;
            default:
                cout << "\a������� ����������� ����." << endl;
        }

        cout << "������ v, V ��� A ��� ������ �� ��������: ";
        cin >> exit;

        if (tolower(exit) == 'v' || exit == 'A')
            break;
    }

    return 0;
}
