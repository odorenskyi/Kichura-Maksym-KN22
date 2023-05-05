#include <cmath>
#include <string>
#include "ModulesKichura.h"

using namespace std;

double s_calculation(double x,double z) {
    double S = (sqrt(1 + x) - 3 * cos(x))/(log(pow(x,2)) + 3 * sin(3.14 * x)) + (pow((sqrt(pow(z,3)) + 2),2));
    return S;
}

int getGrade(float height) {
    if (height == 0)
        return 0;
    else if (height > 0 && height <= 0.1)
        return 1;
    else if (height > 0.1 && height <= 0.5)
        return 2;
    else if (height > 0.5 && height <= 1.25)
        return 3;
    else if (height > 1.25 && height <= 2.50)
        return 4;
    else if (height > 2.50 && height <= 4.0)
        return 5;
    else if (height > 4 && height <= 6)
        return 6;
    else if (height > 6 && height <= 9)
        return 7;
    else if (height > 9 && height <= 14)
        return 8;
    else if (height > 14)
        return 9;
    else
        return -1;
}

float getCelsius(float farenheit) {
    return (5.0/9)*(farenheit-32);
}

int t9_3(int number) {
    unsigned int count = 0;
    if (number > 0 || number <= 65535) {
        bool set = !((number >> 1) & 1);
        while (number) {
            count += (number & 1) == set;
            number >>= 1;
        }
    } else {
        return -1;
    }
    return count;
}
