#include "ModulesKichura.h"
#include <iostream>
#include <clocale>
#include <limits>

using namespace std;

bool test_1(float height, int grade) {
	int actualGrade = getGrade(height);
	if (grade == actualGrade)
		return true;
	else
		cout << endl << "Очікуваний результат: " << grade << endl << "Отриманий результат: " << actualGrade << endl;
	return false;
}

bool test_2(float farenheit, float celsius) {
	float result = getCelsius(farenheit);
	if (result == celsius)
		return true;
	else
		cout << endl << "Очікуваний результат: " << celsius << endl << "Отриманий результат: " << result << endl;
    return false;
}

bool test_3(int n, int count) {
	int result = t9_3(n);
	if (result == count)
		return true;
	else {
		cout << endl << "Очікуваний результат: " << count << endl << "Отриманий результат: " << result << endl;
		return false;
	}
}

int main() {
	float height[5] = {8, 0, 5, 15, 3};
	int grade[5] = {7, 0, 6, 9, 5};

	float farenheit[5] = {0, 5, 15, 100, 200};
	float celsius[5] = {-17.7777786254883, -15, -9.44444465637207, 37.7777786254883, 93.3333358764648};

	int n[5] = {0, 1, 16, 1023, 1024};
	int result_3[5] = {0, 1, 1, 0, 1};

	cout.precision(std::numeric_limits<double>::digits10);

	setlocale(LC_ALL, "");

	for (int i = 0; i < 3; i++) {
		switch (i) {
			case 0:
				for (int j = 0; j < 5; j++) {
					cout << "Test " << i + 1 << "." << j + 1 << " (висота у метрах: " << height[j] << ", бал хвилювання моря: " << grade[j] << ") " << (test_1(height[j], grade[j]) ? "passed" : "failed") << endl;
				}
				break;
			case 1:
				for (int j = 0; j < 5; j++) {
					cout << "Test " << i + 1 << "." << j + 1 << " (за шкалою Фаренгейта: " << farenheit[j] << ", за шкалою Цельсія: " << celsius[j] << ") " << (test_2(farenheit[j], celsius[j]) ? "passed" : "failed") << endl;
				}
				break;
			case 2:
				for (int j = 0; j < 5; j++) {
					cout << "Test " << i + 1 << "." << j + 1 << " (N = " << n[j] << ", результат = " << result_3[j] << ") " << (test_3(n[j], result_3[j]) ? "passed" : "failed") << endl;
				}
				break;
		}

	}

	return 0;
}
