#include <iostream>
#include <clocale>
#include <main.h>
using namespace std;
void printInfo()
{
    cout << "�i���� ������ (c) | ������-�����:��-22 | ����  " << endl;
}
int Task8_2_2(int a,int b)
{
    cout << "����i�� �������� a �� b" << endl;
    cin >> a;
    cin >> b;
    int c;
    if ((a + 7) < abs(b - 5))
         c = 1;
    else
        c = 0;
    return c ;
}
int Task8_2_3(int x, int z)
{
    cout << "����i�� �������� x �� z" << endl;
    cin >> x;
    cin >> z;
    cout << "� ��������i� ������i �������� x �� z �i����i���:\t" << dec << x << "\t" << dec << z << endl;
    cout << "� �i�����������i� ������i �������� x �� z �i����i���:\t" << hex << x << "\t" << hex << z << endl;
    cout << "��������� ������ � �����i�  s_calculation(): " << fixed << s_calculation(x,z) << endl;
}
int main()
{
    setlocale(LC_ALL, "ukr");
    //8.2.1
    printInfo();
    int a,b;
    double x,z;
    //8.2.2
    cout << Task8_2_2(a,b) << endl;
    //8.2.3
    cout << Task8_2_3(x,z) << endl;
    return 0;
}
